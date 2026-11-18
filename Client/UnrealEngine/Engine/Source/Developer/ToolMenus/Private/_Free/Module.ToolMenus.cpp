// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 369

// StartupCallbacks'' @ 140f47580

void __cdecl `dynamic_initializer_for_'UToolMenus::StartupCallbacks__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UToolMenus::StartupCallbacks__);
  return;
}

// TestMenuName'' @ 140f475a0

void __cdecl
`dynamic_initializer_for_'UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::TestMenuName__(void)

{
  ::FName::FName(&UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::TestMenuName,"TestMenu");
  return;
}

// TypeName'' @ 140f475c0

void __cdecl `dynamic_initializer_for_'UE::ToolMenus::FMenu::TypeName__(void)

{
  ::FName::FName(&UE::ToolMenus::FMenu::TypeName,"Menu");
  return;
}

// TypeName'' @ 140f475e0

void __cdecl `dynamic_initializer_for_'UE::ToolMenus::FMenuEntry::TypeName__(void)

{
  ::FName::FName(&UE::ToolMenus::FMenuEntry::TypeName,"MenuEntry");
  return;
}

// TypeName'' @ 140f47600

void __cdecl `dynamic_initializer_for_'UE::ToolMenus::FMenuWildcardEntry::TypeName__(void)

{
  ::FName::FName(&UE::ToolMenus::FMenuWildcardEntry::TypeName,"WildcardMenuEntry");
  return;
}

// `dynamic_initializer_for_'FToolMenusTestUtiltiesSpecAutomationSpecInstance'' @ 140f47620

void __cdecl
UE::ToolMenus::Private::`anonymous_namespace'::
_dynamic_initializer_for__FToolMenusTestUtiltiesSpecAutomationSpecInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FToolMenusTestUtiltiesSpec");
  FAutomationSpecBase::FAutomationSpecBase
            ((FAutomationSpecBase *)&FToolMenusTestUtiltiesSpecAutomationSpecInstance,&local_18,
             false);
  FToolMenusTestUtiltiesSpecAutomationSpecInstance._0_8_ =
       &___7FToolMenusTestUtiltiesSpec_Private_ToolMenus_UE__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FToolMenusTestUtiltiesSpecAutomationSpecInstance__);
  return;
}

// `dynamic_initializer_for_'LogToolMenus'' @ 140f47680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogToolMenus__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogToolMenus,L"LogToolMenus",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogToolMenus__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantToolMenus'' @ 140f476c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantToolMenus__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ToolMenus";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ToolMenus",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FToolMenusModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_UToolMenuEntryScript_CanExecute'' @ 140f47710

void __cdecl _dynamic_initializer_for__NAME_UToolMenuEntryScript_CanExecute__(void)

{
  FName::FName(&NAME_UToolMenuEntryScript_CanExecute,L"CanExecute");
  return;
}

// `dynamic_initializer_for_'NAME_UToolMenuEntryScript_ConstructMenuEntry'' @ 140f47730

void __cdecl _dynamic_initializer_for__NAME_UToolMenuEntryScript_ConstructMenuEntry__(void)

{
  FName::FName(&NAME_UToolMenuEntryScript_ConstructMenuEntry,L"ConstructMenuEntry");
  return;
}

// `dynamic_initializer_for_'NAME_UToolMenuEntryScript_Execute'' @ 140f47750

void __cdecl _dynamic_initializer_for__NAME_UToolMenuEntryScript_Execute__(void)

{
  FName::FName(&NAME_UToolMenuEntryScript_Execute,L"Execute");
  return;
}

// `dynamic_initializer_for_'NAME_UToolMenuEntryScript_GetCheckState'' @ 140f47770

void __cdecl _dynamic_initializer_for__NAME_UToolMenuEntryScript_GetCheckState__(void)

{
  FName::FName(&NAME_UToolMenuEntryScript_GetCheckState,L"GetCheckState");
  return;
}

// `dynamic_initializer_for_'NAME_UToolMenuEntryScript_GetIcon'' @ 140f47790

void __cdecl _dynamic_initializer_for__NAME_UToolMenuEntryScript_GetIcon__(void)

{
  FName::FName(&NAME_UToolMenuEntryScript_GetIcon,L"GetIcon");
  return;
}

// `dynamic_initializer_for_'NAME_UToolMenuEntryScript_GetLabel'' @ 140f477b0

void __cdecl _dynamic_initializer_for__NAME_UToolMenuEntryScript_GetLabel__(void)

{
  FName::FName(&NAME_UToolMenuEntryScript_GetLabel,L"GetLabel");
  return;
}

// `dynamic_initializer_for_'NAME_UToolMenuEntryScript_GetToolTip'' @ 140f477d0

void __cdecl _dynamic_initializer_for__NAME_UToolMenuEntryScript_GetToolTip__(void)

{
  FName::FName(&NAME_UToolMenuEntryScript_GetToolTip,L"GetToolTip");
  return;
}

// `dynamic_initializer_for_'NAME_UToolMenuEntryScript_IsVisible'' @ 140f477f0

void __cdecl _dynamic_initializer_for__NAME_UToolMenuEntryScript_IsVisible__(void)

{
  FName::FName(&NAME_UToolMenuEntryScript_IsVisible,L"IsVisible");
  return;
}

// `dynamic_initializer_for_'NAME_UToolMenuEntryScript_ShowInToolbarTopLevel'' @ 140f47810

void __cdecl _dynamic_initializer_for__NAME_UToolMenuEntryScript_ShowInToolbarTopLevel__(void)

{
  FName::FName(&NAME_UToolMenuEntryScript_ShowInToolbarTopLevel,L"ShowInToolbarTopLevel");
  return;
}

// `dynamic_initializer_for_'NAME_UToolMenuSectionDynamic_ConstructSections'' @ 140f47830

void __cdecl _dynamic_initializer_for__NAME_UToolMenuSectionDynamic_ConstructSections__(void)

{
  FName::FName(&NAME_UToolMenuSectionDynamic_ConstructSections,L"ConstructSections");
  return;
}

// `dynamic_initializer_for_'ToolMenusRefreshMenuWidget'' @ 140f47850

void __cdecl _dynamic_initializer_for__ToolMenusRefreshMenuWidget__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_5>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&ToolMenusRefreshMenuWidget,L"ToolMenus.RefreshAllWidgets",
             L"Refresh All Tool Menu Widgets",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__ToolMenusRefreshMenuWidget__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h__Script_ToolMenus_1534343798'' @ 140f47980

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h__Script_ToolMenus_1534343798__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ToolMenus",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h__Script_ToolMenus_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h__Script_ToolMenus_1210806912'' @ 140f479c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h__Script_ToolMenus_1210806912__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ToolMenus",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h__Script_ToolMenus_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h__Script_ToolMenus_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h__Script_ToolMenus_2296601262'' @ 140f47a10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h__Script_ToolMenus_2296601262__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ToolMenus",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h__Script_ToolMenus_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h__Script_ToolMenus_1890321942'' @ 140f47a50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h__Script_ToolMenus_1890321942__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ToolMenus",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h__Script_ToolMenus_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h__Script_ToolMenus_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntry_h__Script_ToolMenus_2041899126'' @ 140f47aa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntry_h__Script_ToolMenus_2041899126__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ToolMenus",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntry_h__Script_ToolMenus_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuMisc_h__Script_ToolMenus_1007821820'' @ 140f47ae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuMisc_h__Script_ToolMenus_1007821820__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ToolMenus",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuMisc_h__Script_ToolMenus_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuMisc_h__Script_ToolMenus_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuOwner_h__Script_ToolMenus_2160613449'' @ 140f47b30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuOwner_h__Script_ToolMenus_2160613449__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ToolMenus",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuOwner_h__Script_ToolMenus_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h__Script_ToolMenus_1757847924'' @ 140f47b70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h__Script_ToolMenus_1757847924__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ToolMenus",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h__Script_ToolMenus_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h__Script_ToolMenus_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h__Script_ToolMenus_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuWidgetCollectionContext_h__Script_ToolMenus_4185352601'' @ 140f47bc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuWidgetCollectionContext_h__Script_ToolMenus_4185352601__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ToolMenus",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuWidgetCollectionContext_h__Script_ToolMenus_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h__Script_ToolMenus_1008555598'' @ 140f47c00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h__Script_ToolMenus_1008555598__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ToolMenus",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h__Script_ToolMenus_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h__Script_ToolMenus_129841238'' @ 140f47c40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h__Script_ToolMenus_129841238__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ToolMenus",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h__Script_ToolMenus_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h__Script_ToolMenus_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ToolMenus'' @ 140f47c90

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ToolMenus__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x1c0d581a;
  local_res8[0].DeclarationsHash = 0x8ab1f4cf;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ToolMenus,L"/Script/ToolMenus",
             &Z_Registration_Info_UPackage__Script_ToolMenus,local_res8);
  return;
}

// Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry @ 142c2cc00

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature @ 142c2cc40

UFunction * __cdecl
Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature @ 142c2cc80

UFunction * __cdecl
Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature @ 142c2ccc0

UFunction * __cdecl
Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature @ 142c2cd00

UFunction * __cdecl
Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FToolMenuContext @ 142c2cd40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FToolMenuContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuContext.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FToolMenuContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FToolMenuContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FToolMenuContext.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FToolMenuContext.InnerSingleton;
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

// Z_Construct_UPackage__Script_ToolMenus @ 142c2cdc0

UPackage * __cdecl Z_Construct_UPackage__Script_ToolMenus(void)

{
  if (Z_Registration_Info_UPackage__Script_ToolMenus.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ToolMenus.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ToolMenus.OuterSingleton;
}

// Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon @ 142c2ce00

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand @ 142c2ce40

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner @ 142c2ce80

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon @ 142c2cec0

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 142c2cf00

void __cdecl
Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel @ 142c2cf10

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 142c2cf50

void __cdecl
Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand @ 142c2cf60

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip @ 142c2cfa0

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 142c2cfe0

void __cdecl
Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics
::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewStructOps @ 142c2cff0

void * __cdecl Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FToolDynamicUIAction,&UE::CoreUObject::Private::Construct<FToolDynamicUIAction>,&UE::CoreUObject::Private::ConstructForTests<FToolDynamicUIAction>,&UE::CoreUObject::Private::Destruct<FToolDynamicUIAction>,&UE::CoreUObject::Private::Copy<FToolDynamicUIAction>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 142c2d030

void * __thiscall
IToolMenusModule::_scalar_deleting_destructor_(IToolMenusModule *this,uint param_1)

{
  *this = (IToolMenusModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UToolMenuEntryScript_NoRegister @ 142c2d070

UClass * __cdecl Z_Construct_UClass_UToolMenuEntryScript_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuEntryScript.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuEntryScript",
               &Z_Registration_Info_UClass_UToolMenuEntryScript.InnerSingleton,
               UToolMenuEntryScript::StaticRegisterNativesUToolMenuEntryScript,0xb0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolMenuEntryScript>,
               InternalVTableHelperCtorCaller<UToolMenuEntryScript>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuEntryScript.InnerSingleton;
}

// Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry @ 142c2d290

UFunction * __cdecl Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_ToolMenus_EToolMenuInsertFallback @ 142c2d2d0

UEnum * __cdecl Z_Construct_UEnum_ToolMenus_EToolMenuInsertFallback(void)

{
  if (Z_Registration_Info_UEnum_EToolMenuInsertFallback.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EToolMenuInsertFallback.InnerSingleton,
               &Z_Construct_UEnum_ToolMenus_EToolMenuInsertFallback_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EToolMenuInsertFallback.InnerSingleton;
}

// Z_Construct_UEnum_ToolMenus_EToolMenuInsertType @ 142c2d310

UEnum * __cdecl Z_Construct_UEnum_ToolMenus_EToolMenuInsertType(void)

{
  if (Z_Registration_Info_UEnum_EToolMenuInsertType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EToolMenuInsertType.InnerSingleton,
               &Z_Construct_UEnum_ToolMenus_EToolMenuInsertType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EToolMenuInsertType.InnerSingleton;
}

// Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType @ 142c2d350

UEnum * __cdecl Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType(void)

{
  if (Z_Registration_Info_UEnum_EToolMenuStringCommandType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EToolMenuStringCommandType.InnerSingleton,
               &Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EToolMenuStringCommandType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FToolMenuInsert @ 142c2d390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FToolMenuInsert(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuInsert.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FToolMenuInsert.InnerSingleton,
               &Z_Construct_UScriptStruct_FToolMenuInsert_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FToolMenuInsert.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FToolMenuInsert.InnerSingleton;
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

// Z_Construct_UScriptStruct_FToolMenuStringCommand @ 142c2d410

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FToolMenuStringCommand(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuStringCommand.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FToolMenuStringCommand.InnerSingleton,
               &Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FToolMenuStringCommand.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FToolMenuStringCommand.InnerSingleton;
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

// EToolMenuStringCommandType_StaticEnum @ 142c2d490

UEnum * __cdecl EToolMenuStringCommandType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EToolMenuStringCommandType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolMenus();
    Z_Registration_Info_UEnum_EToolMenuStringCommandType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType,(UObject *)pUVar1,
                       L"EToolMenuStringCommandType");
  }
  return Z_Registration_Info_UEnum_EToolMenuStringCommandType.OuterSingleton;
}

// Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject @ 142c2d4d0

UFunction * __cdecl Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewStructOps @ 142c2d510

void * __cdecl Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FToolMenuStringCommand,&UE::CoreUObject::Private::Construct<FToolMenuStringCommand>,&UE::CoreUObject::Private::ConstructForTests<FToolMenuStringCommand>,&UE::CoreUObject::Private::Destruct<FToolMenuStringCommand>,&UE::CoreUObject::Private::Copy<FToolMenuStringCommand>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel @ 142c2d550

UFunction * __cdecl Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UToolMenus_NoRegister @ 142c2d590

UClass * __cdecl Z_Construct_UClass_UToolMenus_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UToolMenus::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenus",
               &Z_Registration_Info_UClass_UToolMenus.InnerSingleton,
               UToolMenus::StaticRegisterNativesUToolMenus,0x378,8,CLASS_Intrinsic,CASTCLASS_None,
               L"EditorPerProjectUserSettings",InternalConstructor<UToolMenus>,
               InternalVTableHelperCtorCaller<UToolMenus>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenus.InnerSingleton;
}

// Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel @ 142c2d640

UFunction * __cdecl Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EToolMenuInsertType_StaticEnum @ 142c2d680

UEnum * __cdecl EToolMenuInsertType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EToolMenuInsertType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolMenus();
    Z_Registration_Info_UEnum_EToolMenuInsertType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ToolMenus_EToolMenuInsertType,(UObject *)pUVar1,
                       L"EToolMenuInsertType");
  }
  return Z_Registration_Info_UEnum_EToolMenuInsertType.OuterSingleton;
}

// EToolMenuInsertFallback_StaticEnum @ 142c2d6c0

UEnum * __cdecl EToolMenuInsertFallback_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EToolMenuInsertFallback.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolMenus();
    Z_Registration_Info_UEnum_EToolMenuInsertFallback.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ToolMenus_EToolMenuInsertFallback,(UObject *)pUVar1,
                       L"EToolMenuInsertFallback");
  }
  return Z_Registration_Info_UEnum_EToolMenuInsertFallback.OuterSingleton;
}

// NewStructOps @ 142c2d700

void * __cdecl Z_Construct_UScriptStruct_FToolMenuInsert_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FToolMenuInsert,&UE::CoreUObject::Private::Construct<FToolMenuInsert>,&UE::CoreUObject::Private::ConstructForTests<FToolMenuInsert>,&UE::CoreUObject::Private::Destruct<FToolMenuInsert>,&UE::CoreUObject::Private::Copy<FToolMenuInsert>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FToolMenuOwner @ 142c2d780

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FToolMenuOwner(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuOwner.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FToolMenuOwner.InnerSingleton,
               &Z_Construct_UScriptStruct_FToolMenuOwner_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FToolMenuOwner.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FToolMenuOwner.InnerSingleton;
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

// NewStructOps @ 142c2d800

void * __cdecl Z_Construct_UScriptStruct_FToolMenuOwner_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FToolMenuOwner,&UE::CoreUObject::Private::Construct<FToolMenuOwner>,&UE::CoreUObject::Private::ConstructForTests<FToolMenuOwner>,&UE::CoreUObject::Private::Destruct<FToolMenuOwner>,&UE::CoreUObject::Private::Copy<FToolMenuOwner>,&UE::CoreUObject::Private::GetStructTypeHash<FToolMenuOwner>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UToolMenuSectionDynamic @ 142c2d840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UToolMenuSectionDynamic(void)

{
  if (Z_Registration_Info_UClass_UToolMenuSectionDynamic.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UToolMenuSectionDynamic.OuterSingleton,
               &Z_Construct_UClass_UToolMenuSectionDynamic_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UToolMenuSectionDynamic.OuterSingleton;
}

// Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections @ 142c2d8b0

UFunction * __cdecl Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// EToolMenuSectionAlign_StaticEnum @ 142c2dbc0

UEnum * __cdecl EToolMenuSectionAlign_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EToolMenuSectionAlign.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolMenus();
    Z_Registration_Info_UEnum_EToolMenuSectionAlign.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ToolMenus_EToolMenuSectionAlign,(UObject *)pUVar1,
                       L"EToolMenuSectionAlign");
  }
  return Z_Registration_Info_UEnum_EToolMenuSectionAlign.OuterSingleton;
}

// NewStructOps @ 142c2dc40

void * __cdecl Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x238;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FToolMenuSection,&UE::CoreUObject::Private::Construct<FToolMenuSection>,&UE::CoreUObject::Private::ConstructForTests<FToolMenuSection>,&UE::CoreUObject::Private::Destruct<FToolMenuSection>,&UE::CoreUObject::Private::Copy<FToolMenuSection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USlateTabManagerContext @ 142c2df10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USlateTabManagerContext(void)

{
  if (Z_Registration_Info_UClass_USlateTabManagerContext.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USlateTabManagerContext.OuterSingleton,
               &Z_Construct_UClass_USlateTabManagerContext_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USlateTabManagerContext.OuterSingleton;
}

// Z_Construct_UClass_UToolMenuContextBase @ 142c2df50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UToolMenuContextBase(void)

{
  if (Z_Registration_Info_UClass_UToolMenuContextBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UToolMenuContextBase.OuterSingleton,
               &Z_Construct_UClass_UToolMenuContextBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UToolMenuContextBase.OuterSingleton;
}

// Z_Construct_UClass_UToolMenuProfileContext @ 142c2df90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UToolMenuProfileContext(void)

{
  if (Z_Registration_Info_UClass_UToolMenuProfileContext.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UToolMenuProfileContext.OuterSingleton,
               &Z_Construct_UClass_UToolMenuProfileContext_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UToolMenuProfileContext.OuterSingleton;
}

// Z_Construct_UClass_UToolMenus @ 142c2dfd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UToolMenus(void)

{
  if (Z_Registration_Info_UClass_UToolMenus.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UToolMenus.OuterSingleton,
               &Z_Construct_UClass_UToolMenus_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UToolMenus.OuterSingleton;
}

// Z_Construct_UScriptStruct_FToolMenuProfileMap @ 142c2e010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FToolMenuProfileMap(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuProfileMap.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FToolMenuProfileMap.InnerSingleton,
               &Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FToolMenuProfileMap.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FToolMenuProfileMap.InnerSingleton;
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

// NewStructOps @ 142c2e090

void * __cdecl Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FToolMenuProfileMap,&UE::CoreUObject::Private::Construct<FToolMenuProfileMap>,&UE::CoreUObject::Private::ConstructForTests<FToolMenuProfileMap>,&UE::CoreUObject::Private::Destruct<FToolMenuProfileMap>,&UE::CoreUObject::Private::Copy<FToolMenuProfileMap>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c2e0d0

void * __cdecl Z_Construct_UScriptStruct_FToolMenuContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FToolMenuContext,&UE::CoreUObject::Private::Construct<FToolMenuContext>,&UE::CoreUObject::Private::ConstructForTests<FToolMenuContext>,&UE::CoreUObject::Private::Destruct<FToolMenuContext>,&UE::CoreUObject::Private::Copy<FToolMenuContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 142c2e130

void * __thiscall
FToolMenusModule::_scalar_deleting_destructor_(FToolMenusModule *this,uint param_1)

{
  *this = (FToolMenusModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 142c2e170

void __cdecl
Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UToolMenus_AddMenuEntryObject @ 142c2e240

UFunction * __cdecl Z_Construct_UFunction_UToolMenus_AddMenuEntryObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenus_ExtendMenu @ 142c2e280

UFunction * __cdecl Z_Construct_UFunction_UToolMenus_ExtendMenu(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UToolMenuWidgetCollectionContext @ 142c2e2c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UToolMenuWidgetCollectionContext(void)

{
  if (Z_Registration_Info_UClass_UToolMenuWidgetCollectionContext.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UToolMenuWidgetCollectionContext.OuterSingleton,
               &Z_Construct_UClass_UToolMenuWidgetCollectionContext_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UToolMenuWidgetCollectionContext.OuterSingleton;
}

// Z_Construct_UFunction_UToolMenus_FindContext @ 142c2e300

UFunction * __cdecl Z_Construct_UFunction_UToolMenus_FindContext(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UToolMenus_FindContext_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenus_FindMenu @ 142c2e3d0

UFunction * __cdecl Z_Construct_UFunction_UToolMenus_FindMenu(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UToolMenus_FindMenu_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenus_Get @ 142c2e410

UFunction * __cdecl Z_Construct_UFunction_UToolMenus_Get(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UToolMenus_Get_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 142c2e450

void __cdecl
Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UToolMenus_IsMenuRegistered @ 142c2e460

UFunction * __cdecl Z_Construct_UFunction_UToolMenus_IsMenuRegistered(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenus_RefreshAllWidgets @ 142c2e4a0

UFunction * __cdecl Z_Construct_UFunction_UToolMenus_RefreshAllWidgets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenus_RefreshAllWidgets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 142c2e4e0

void __cdecl
Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UToolMenus_RefreshMenuWidget @ 142c2e4f0

UFunction * __cdecl Z_Construct_UFunction_UToolMenus_RefreshMenuWidget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bWarnIfAlreadyRegistered_SetBit @ 142c2e530

void __cdecl
Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_bWarnIfAlreadyRegistered_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UToolMenus_RegisterMenu @ 142c2e540

UFunction * __cdecl Z_Construct_UFunction_UToolMenus_RegisterMenu(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenus_RemoveEntry @ 142c2e6c0

UFunction * __cdecl Z_Construct_UFunction_UToolMenus_RemoveEntry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UToolMenuSectionDynamic_NoRegister @ 142c2e700

UClass * __cdecl Z_Construct_UClass_UToolMenuSectionDynamic_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuSectionDynamic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuSectionDynamic",
               &Z_Registration_Info_UClass_UToolMenuSectionDynamic.InnerSingleton,
               UToolMenuSectionDynamic::StaticRegisterNativesUToolMenuSectionDynamic,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UToolMenuSectionDynamic>
               ,InternalVTableHelperCtorCaller<UToolMenuSectionDynamic>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuSectionDynamic.InnerSingleton;
}

// Z_Construct_UFunction_UToolMenus_RemoveMenu @ 142c2e8c0

UFunction * __cdecl Z_Construct_UFunction_UToolMenus_RemoveMenu(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 142c2e970

void __cdecl
Z_Construct_UFunction_UToolMenus_RemoveMenuEntryObject_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UToolMenus_RemoveMenuEntryObject @ 142c2e980

UFunction * __cdecl Z_Construct_UFunction_UToolMenus_RemoveMenuEntryObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenus_RemoveMenuEntryObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenus_RemoveSection @ 142c2ea00

UFunction * __cdecl Z_Construct_UFunction_UToolMenus_RemoveSection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldCloseWindowAfterMenuSelection_SetBit @ 142c2ea40

void __cdecl
Z_Construct_UScriptStruct_FToolMenuEntry_Statics::
NewProp_bShouldCloseWindowAfterMenuSelection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bCommandIsKeybindOnly_SetBit @ 142c2ea50

void __cdecl
Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bCommandIsKeybindOnly_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x759) = 1;
  return;
}

// NewStructOps @ 142c2ea60

void * __cdecl Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x780;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FToolMenuEntry,&UE::CoreUObject::Private::Construct<FToolMenuEntry>,&UE::CoreUObject::Private::ConstructForTests<FToolMenuEntry>,&UE::CoreUObject::Private::Destruct<FToolMenuEntry>,&UE::CoreUObject::Private::Copy<FToolMenuEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UToolMenus_SetSectionLabel @ 142c2eaa0

UFunction * __cdecl Z_Construct_UFunction_UToolMenus_SetSectionLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenus_SetSectionPosition @ 142c2eae0

UFunction * __cdecl Z_Construct_UFunction_UToolMenus_SetSectionPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName @ 142c2eb20

UFunction * __cdecl Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 142c2f220

void * __thiscall
UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::_scalar_deleting_destructor_
          (FToolMenusTestUtiltiesSpec *this,uint param_1)

{
  FAutomationSpecBase::~FAutomationSpecBase((FAutomationSpecBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// Z_Construct_UClass_UToolMenuEntryScript @ 142c2f2e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UToolMenuEntryScript(void)

{
  if (Z_Registration_Info_UClass_UToolMenuEntryScript.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UToolMenuEntryScript.OuterSingleton,
               &Z_Construct_UClass_UToolMenuEntryScript_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UToolMenuEntryScript.OuterSingleton;
}

// Z_Construct_UScriptStruct_FScriptSlateIcon @ 142c2f320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FScriptSlateIcon(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FScriptSlateIcon.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FScriptSlateIcon.InnerSingleton,
               &Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FScriptSlateIcon.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FScriptSlateIcon.InnerSingleton;
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

// Z_Construct_UScriptStruct_FToolMenuEntryScriptData @ 142c2f3a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FToolMenuEntryScriptData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuEntryScriptData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FToolMenuEntryScriptData.InnerSingleton,
               &Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FToolMenuEntryScriptData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FToolMenuEntryScriptData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced @ 142c2f420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuEntryScriptDataAdvanced.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FToolMenuEntryScriptDataAdvanced.InnerSingleton,
               &Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FToolMenuEntryScriptDataAdvanced.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FToolMenuEntryScriptDataAdvanced.InnerSingleton;
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

// NewStructOps @ 142c2f4a0

void * __cdecl Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FScriptSlateIcon,&UE::CoreUObject::Private::Construct<FScriptSlateIcon>,&UE::CoreUObject::Private::ConstructForTests<FScriptSlateIcon>,&UE::CoreUObject::Private::Destruct<FScriptSlateIcon>,&UE::CoreUObject::Private::Copy<FScriptSlateIcon>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsSubMenu_SetBit @ 142c2f4e0

void __cdecl
Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bIsSubMenu_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bOpenSubMenuOnClick_SetBit @ 142c2f4f0

void __cdecl
Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::
NewProp_bOpenSubMenuOnClick_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// NewProp_bShouldCloseWindowAfterMenuSelection_SetBit @ 142c2f500

void __cdecl
Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::
NewProp_bShouldCloseWindowAfterMenuSelection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x16) = 1;
  return;
}

// NewProp_bSimpleComboBox_SetBit @ 142c2f510

void __cdecl
Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bSimpleComboBox_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x17) = 1;
  return;
}

// NewStructOps @ 142c2f520

void * __cdecl
Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FToolMenuEntryScriptDataAdvanced,&UE::CoreUObject::Private::Construct<FToolMenuEntryScriptDataAdvanced>,&UE::CoreUObject::Private::ConstructForTests<FToolMenuEntryScriptDataAdvanced>,&UE::CoreUObject::Private::Destruct<FToolMenuEntryScriptDataAdvanced>,&UE::CoreUObject::Private::Copy<FToolMenuEntryScriptDataAdvanced>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c2f560

void * __cdecl Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FToolMenuEntryScriptData,&UE::CoreUObject::Private::Construct<FToolMenuEntryScriptData>,&UE::CoreUObject::Private::ConstructForTests<FToolMenuEntryScriptData>,&UE::CoreUObject::Private::Destruct<FToolMenuEntryScriptData>,&UE::CoreUObject::Private::Copy<FToolMenuEntryScriptData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 142c2f790

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_5>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 142c2fb10

void __cdecl
Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UClass_UToolMenu @ 142c2fb20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UToolMenu(void)

{
  if (Z_Registration_Info_UClass_UToolMenu.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UToolMenu.OuterSingleton,
               &Z_Construct_UClass_UToolMenu_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UToolMenu.OuterSingleton;
}

// Z_Construct_UEnum_ToolMenus_EToolMenuSectionAlign @ 142c2fb60

UEnum * __cdecl Z_Construct_UEnum_ToolMenus_EToolMenuSectionAlign(void)

{
  if (Z_Registration_Info_UEnum_EToolMenuSectionAlign.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EToolMenuSectionAlign.InnerSingleton,
               &Z_Construct_UEnum_ToolMenus_EToolMenuSectionAlign_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EToolMenuSectionAlign.InnerSingleton;
}

// Z_Construct_UScriptStruct_FToolMenuEntry @ 142c2fba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FToolMenuEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuEntry.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FToolMenuEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FToolMenuEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FToolMenuEntry.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FToolMenuEntry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FToolMenuSection @ 142c2fc20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FToolMenuSection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuSection.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FToolMenuSection.InnerSingleton,
               &Z_Construct_UScriptStruct_FToolMenuSection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FToolMenuSection.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FToolMenuSection.InnerSingleton;
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

// Z_Construct_UFunction_UToolMenuEntryScript_CanExecute @ 142c2fca0

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryScript_CanExecute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript @ 142c2fce0

UFunction * __cdecl Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry @ 142c2fd20

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenu_AddMenuEntry @ 142c2fd60

UFunction * __cdecl Z_Construct_UFunction_UToolMenu_AddMenuEntry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenu_AddMenuEntryObject @ 142c2fda0

UFunction * __cdecl Z_Construct_UFunction_UToolMenu_AddMenuEntryObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenuEntryScript_Execute @ 142c2fe20

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryScript_Execute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenu_AddSectionScript @ 142c2fe60

UFunction * __cdecl Z_Construct_UFunction_UToolMenu_AddSectionScript(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState @ 142c2fea0

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenu_AddSubMenuScript @ 142c2fee0

UFunction * __cdecl Z_Construct_UFunction_UToolMenu_AddSubMenuScript(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenuEntryScript_GetIcon @ 142c2ff20

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryScript_GetIcon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenu_InitMenu @ 142c2ff60

UFunction * __cdecl Z_Construct_UFunction_UToolMenu_InitMenu(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UToolMenu_InitMenu_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenuEntryScript_GetLabel @ 142c2ffa0

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryScript_GetLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenu_RemoveMenuEntryObject @ 142c2ffe0

UFunction * __cdecl Z_Construct_UFunction_UToolMenu_RemoveMenuEntryObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenu_RemoveMenuEntryObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip @ 142c30020

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldCleanupContextOnDestroy_SetBit @ 142c30060

void __cdecl
Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCleanupContextOnDestroy_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x49) = 1;
  return;
}

// NewProp_bShouldCloseWindowAfterMenuSelection_SetBit @ 142c30070

void __cdecl
Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4a) = 1;
  return;
}

// NewProp_bCloseSelfOnly_SetBit @ 142c30080

void __cdecl Z_Construct_UClass_UToolMenu_Statics::NewProp_bCloseSelfOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4b) = 1;
  return;
}

// NewProp_bSearchable_SetBit @ 142c30090

void __cdecl Z_Construct_UClass_UToolMenu_Statics::NewProp_bSearchable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// NewProp_bToolBarIsFocusable_SetBit @ 142c300a0

void __cdecl Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarIsFocusable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4d) = 1;
  return;
}

// NewProp_bSeparateSections_SetBit @ 142c300b0

void __cdecl Z_Construct_UClass_UToolMenu_Statics::NewProp_bSeparateSections_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4e) = 1;
  return;
}

// NewProp_bToolBarForceSmallIcons_SetBit @ 142c300c0

void __cdecl
Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarForceSmallIcons_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  return;
}

// NewProp_bPreventCustomization_SetBit @ 142c300d0

void __cdecl
Z_Construct_UClass_UToolMenu_Statics::NewProp_bPreventCustomization_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x52) = 1;
  return;
}

// Z_Construct_UFunction_UToolMenuEntryScript_InitEntry @ 142c300e0

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryScript_InitEntry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 142c301d0

void __cdecl
Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UFunction_UToolMenuEntryScript_IsVisible @ 142c301e0

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryScript_IsVisible(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry @ 142c30220

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 142c30310

void __cdecl
Z_Construct_UFunction_UToolMenuEntryScript_ShowInToolbarTopLevel_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UFunction_UToolMenuEntryScript_ShowInToolbarTopLevel @ 142c30320

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryScript_ShowInToolbarTopLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryScript_ShowInToolbarTopLevel_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenuEntryScript_UnregisterMenuEntry @ 142c30360

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryScript_UnregisterMenuEntry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryScript_UnregisterMenuEntry_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bHasRegisteredMenuEntry_SetBit @ 142c303a0

void __cdecl
Z_Construct_UClass_UToolMenuEntryScript_Statics::NewProp_bHasRegisteredMenuEntry_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa8) = 1;
  return;
}

// Z_Construct_UClass_UToolMenuContextExtensions @ 142c30460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UToolMenuContextExtensions(void)

{
  if (Z_Registration_Info_UClass_UToolMenuContextExtensions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UToolMenuContextExtensions.OuterSingleton,
               &Z_Construct_UClass_UToolMenuContextExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UToolMenuContextExtensions.OuterSingleton;
}

// Z_Construct_UClass_UToolMenuEntryExtensions @ 142c304a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UToolMenuEntryExtensions(void)

{
  if (Z_Registration_Info_UClass_UToolMenuEntryExtensions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UToolMenuEntryExtensions.OuterSingleton,
               &Z_Construct_UClass_UToolMenuEntryExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UToolMenuEntryExtensions.OuterSingleton;
}

// Z_Construct_UClass_UToolMenuSectionExtensions @ 142c304e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UToolMenuSectionExtensions(void)

{
  if (Z_Registration_Info_UClass_UToolMenuSectionExtensions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UToolMenuSectionExtensions.OuterSingleton,
               &Z_Construct_UClass_UToolMenuSectionExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UToolMenuSectionExtensions.OuterSingleton;
}

// Z_Construct_UFunction_UToolMenuContextExtensions_DebugLogContextObjectClasses @ 142c30520

UFunction * __cdecl
Z_Construct_UFunction_UToolMenuContextExtensions_DebugLogContextObjectClasses(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuContextExtensions_DebugLogContextObjectClasses_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass @ 142c30560

UFunction * __cdecl Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon @ 142c305a0

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand @ 142c305e0

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner @ 142c30620

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel @ 142c30660

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UToolMenu_NoRegister @ 142c306a0

UClass * __cdecl Z_Construct_UClass_UToolMenu_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenu",&Z_Registration_Info_UClass_UToolMenu.InnerSingleton
               ,UToolMenu::StaticRegisterNativesUToolMenu,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UToolMenu>,InternalVTableHelperCtorCaller<UToolMenu>,
               local_res8,UToolMenuBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenu.InnerSingleton;
}

// Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip @ 142c30820

UFunction * __cdecl Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip_Statics::FuncParams);
  }
  return ReturnFunction;
}

// CastChecked<UToolMenus,UObject> @ 142c31000

UToolMenus * __cdecl CastChecked<UToolMenus,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UToolMenus>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UToolMenus::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UToolMenus *)param_1;
  }
  pFVar3 = GetTypeName<UToolMenus>(&local_28);
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

// ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int> @ 142c310c0

void __cdecl
ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
          (void *param_1,TObjectPtr<UObject> *param_2,int param_3)

{
  TObjectPtr<UObject> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UObject>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UObject>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
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

// ConstructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int> @ 142c31120

void __cdecl
ConstructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
          (void *param_1,TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *param_2,
          int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar4 = (longlong *)((longlong)param_1 + 0x10);
    plVar5 = (longlong *)&param_2->field_0x38;
    do {
      pUVar1 = *(UObject **)((longlong)plVar4 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      plVar4[-2] = (longlong)pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      lVar2 = plVar5[-5];
      *plVar4 = lVar2;
      plVar4[5] = 0;
      if (lVar2 != 0) {
        plVar3 = plVar5 + -3;
        if ((longlong *)*plVar5 != (longlong *)0x0) {
          plVar3 = (longlong *)*plVar5;
        }
        (**(code **)*plVar3)(plVar3,plVar4 + 2);
      }
      plVar4 = plVar4 + 8;
      plVar5 = plVar5 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FToolMenuEntry,FToolMenuEntry,int> @ 142c311d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
ConstructItems<FToolMenuEntry,FToolMenuEntry,int>(void *param_1,FToolMenuEntry *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FToolMenuEntry::FToolMenuEntry((FToolMenuEntry *)(lVar1 + (longlong)param_2),param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FToolMenuSection,FToolMenuSection,int> @ 142c31220

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
ConstructItems<FToolMenuSection,FToolMenuSection,int>
          (void *param_1,FToolMenuSection *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FToolMenuEntry *pFVar3;
  UObject *pUVar4;
  longlong *plVar5;
  TDelegate<void___cdecl(FMenuBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  TDelegate<void___cdecl(FMenuBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy> *pTVar11;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    piVar10 = (int *)((longlong)param_1 + 0x24);
    pTVar11 = &(param_2->Construct).NewToolMenuDelegateLegacy;
    do {
      pFVar1 = (ForAnyElementType *)(piVar10 + -3);
      *(undefined8 *)((longlong)pTVar11 + (longlong)param_1 + (-0x118 - (longlong)param_2)) =
           *(undefined8 *)&pTVar11[-0xc].field_0x8;
      uVar7 = *(undefined4 *)&pTVar11[-0xc].field_0x14;
      uVar8 = *(undefined4 *)&pTVar11[-0xb].field_0x0;
      uVar9 = *(undefined4 *)&pTVar11[-0xb].field_0x4;
      piVar10[-7] = *(undefined4 *)&pTVar11[-0xc].field_0x10;
      piVar10[-6] = uVar7;
      piVar10[-5] = uVar8;
      piVar10[-4] = uVar9;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *(int *)&pTVar11[-0xb].field_0x10;
      pFVar3 = *(FToolMenuEntry **)&pTVar11[-0xb].field_0x8;
      piVar10[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar10 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x780,8,iVar2,0,pFVar1,iVar2,piVar10);
        ConstructItems<FToolMenuEntry,FToolMenuEntry,int>(pFVar1->Data,pFVar3,iVar2);
      }
      uVar7 = *(undefined4 *)&pTVar11[-10].field_0x4;
      piVar10[1] = *(undefined4 *)&pTVar11[-10].field_0x0;
      piVar10[2] = uVar7;
      piVar10[3] = *(int *)&pTVar11[-10].field_0x8;
      FToolMenuContext::FToolMenuContext
                ((FToolMenuContext *)(piVar10 + 5),(FToolMenuContext *)&pTVar11[-10].field_0x10);
      pUVar4 = *(UObject **)(pTVar11 + -5);
      *(UObject **)(piVar10 + 0x1f) = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      piVar10[0x21] = 0;
      piVar10[0x22] = 0;
      plVar5 = *(longlong **)&pTVar11[-5].field_0x8;
      *(longlong **)(piVar10 + 0x21) = plVar5;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 8))(plVar5,local_res18);
      }
      piVar10[0x23] = *(int *)&pTVar11[-5].field_0x10;
      *(undefined1 *)(piVar10 + 0x25) = *(undefined1 *)(pTVar11 + -4);
      *(undefined8 *)(piVar10 + 0x27) = 0;
      piVar10[0x29] = 0;
      piVar10[0x2a] = 0;
      piVar10[0x2b] = 0;
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(piVar10 + 0x27),
                 (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)&pTVar11[-4].field_0x8
                );
      TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
      ::
      TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
                ((TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(piVar10 + 0x2d),
                 (TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)&pTVar11[-3].field_0x8);
      piVar10[0x39] = 0;
      piVar10[0x3a] = 0;
      *(undefined8 *)(piVar10 + 0x37) = 0;
      piVar10[0x3b] = 0;
      TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy> *)(piVar10 + 0x37)
                 ,(TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy> *)(pTVar11 + -1))
      ;
      piVar10[0x3f] = 0;
      piVar10[0x40] = 0;
      *(undefined8 *)(piVar10 + 0x3d) = 0;
      piVar10[0x41] = 0;
      TDelegate<void___cdecl(FMenuBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FMenuBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy> *)
                 (piVar10 + 0x3d),pTVar11);
      piVar10[0x45] = 0;
      piVar10[0x46] = 0;
      *(undefined8 *)(piVar10 + 0x43) = 0;
      piVar10[0x47] = 0;
      TDelegate<void___cdecl(FToolBarBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FToolBarBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>
                  *)(piVar10 + 0x43),
                 (TDelegate<void___cdecl(FToolBarBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>
                  *)(pTVar11 + 1));
      *(undefined1 *)(piVar10 + 0x49) = *(undefined1 *)(pTVar11 + 2);
      FMenuEntryResizeParams::FMenuEntryResizeParams
                ((FMenuEntryResizeParams *)(piVar10 + 0x4b),
                 (FMenuEntryResizeParams *)&pTVar11[2].field_0x8);
      piVar10[0x7f] = 0;
      piVar10[0x80] = 0;
      *(undefined8 *)(piVar10 + 0x7d) = 0;
      piVar10[0x81] = 0;
      TDelegate<bool___cdecl(FToolMenuEntry_const_&,FToolMenuEntry_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
      ::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<bool___cdecl(FToolMenuEntry_const_&,FToolMenuEntry_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
                  *)(piVar10 + 0x7d),
                 (TDelegate<bool___cdecl(FToolMenuEntry_const_&,FToolMenuEntry_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
                  *)&pTVar11[10].field_0x10);
      *(undefined1 *)(piVar10 + 0x83) = pTVar11[0xb].field_0x10;
      pTVar6 = pTVar11 + 0xb;
      pTVar11 = (TDelegate<void___cdecl(FMenuBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy> *)
                &pTVar11[0x17].field_0x10;
      *(undefined1 *)((longlong)piVar10 + 0x20d) = pTVar6->field_0x11;
      piVar10 = piVar10 + 0x8e;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FToolMenuVisibilityChoice,FToolMenuVisibilityChoice,int> @ 142c31480

void __cdecl
ConstructItems<FToolMenuVisibilityChoice,FToolMenuVisibilityChoice,int>
          (void *param_1,FToolMenuVisibilityChoice *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
      ::
      TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
                ((TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(lVar1 + (longlong)param_2),&param_2->Value);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TAttribute<EVisibility>,TAttribute<EVisibility>,int> @ 142c314d0

void __cdecl
ConstructItems<TAttribute<EVisibility>,TAttribute<EVisibility>,int>
          (void *param_1,TAttribute<EVisibility> *param_2,int param_3)

{
  TAttribute<EVisibility> *pTVar1;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  
  if (param_3 != 0) {
    this = (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)
           ((longlong)param_1 + 8);
    pTVar1 = param_2;
    do {
      pTVar2 = &pTVar1->Getter;
      this[-1].field_0x10 =
           *(undefined1 *)((longlong)this + (longlong)param_2 + (-8 - (longlong)param_1));
      this[-1].field_0x11 = *(undefined1 *)((longlong)(pTVar2 + -1) + 0x11);
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>(this,pTVar2);
      pTVar1 = (TAttribute<EVisibility> *)(pTVar2 + 1);
      this = (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)&this[1].field_0x8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<FGeneratedToolMenuWidget,1>,TSharedPtr<FGeneratedToolMenuWidget,1>,int> @ 142c31550

void __cdecl
ConstructItems<TSharedPtr<FGeneratedToolMenuWidget,1>,TSharedPtr<FGeneratedToolMenuWidget,1>,int>
          (void *param_1,TSharedPtr<FGeneratedToolMenuWidget,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FGeneratedToolMenuWidget **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedPtr<FExtender,1>,TSharedPtr<FExtender,1>,int> @ 142c31590

void __cdecl
ConstructItems<TSharedPtr<FExtender,1>,TSharedPtr<FExtender,1>,int>
          (void *param_1,TSharedPtr<FExtender,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FExtender **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedPtr<FUICommandList,1>,TSharedPtr<FUICommandList,1>,int> @ 142c315d0

void __cdecl
ConstructItems<TSharedPtr<FUICommandList,1>,TSharedPtr<FUICommandList,1>,int>
          (void *param_1,TSharedPtr<FUICommandList,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FUICommandList **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int> @ 142c31610

void __cdecl
ConstructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
          (void *param_1,TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FMenuEntryBase **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int> @ 142c31650

void __cdecl
ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
          (void *param_1,TSharedRef<UE::ToolMenus::FMenuSection,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FMenuSection **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// CreateLambda<`UToolMenus::PopulateToolBarBuilderWithTopLevelChildren'::__l45::<lambda_1>_> @ 142c32130

TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
CreateLambda<_UToolMenus::PopulateToolBarBuilderWithTopLevelChildren_::__l45::<lambda_1>_>
          (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          <lambda_1> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateToolBarBuilderWithTopLevelChildren'::`45'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = 0;
    puVar2[3] = (param_1->Previous).AllocatorInstance.Data;
    (param_1->Previous).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar2 + 4) = (param_1->Previous).ArrayNum;
    *(int *)((longlong)puVar2 + 0x24) = (param_1->Previous).ArrayMax;
    (param_1->Previous).ArrayNum = 0;
    (param_1->Previous).ArrayMax = 0;
    puVar2[5] = (param_1->Next).Object;
    puVar2[6] = (param_1->Next).SharedReferenceCount.ReferenceController;
    (param_1->Next).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (param_1->Next).Object = (TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_> *)0x0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// DefaultConstructItems<FCustomizedToolMenu,int> @ 142c32210

void __cdecl DefaultConstructItems<FCustomizedToolMenu,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x1b0);
    do {
      FToolMenuProfile::FToolMenuProfile((FToolMenuProfile *)(puVar1 + -0x36));
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x24) = 0x80;
      *(undefined4 *)(puVar1 + 5) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
      puVar1[7] = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1 = puVar1 + 0x41;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`UToolMenus::GenerateSubMenu'::__l9::FMenuHierarchyInfo,int> @ 142c32290

void __cdecl
DefaultConstructItems<_UToolMenus::GenerateSubMenu_::__l9::FMenuHierarchyInfo,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FToolMenuSection,int> @ 142c322c0

void __cdecl DefaultConstructItems<FToolMenuSection,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0xc0);
    do {
      puVar1[-0x18] = 0;
      puVar1[-0x17] = 0;
      *(undefined1 *)(puVar1 + -0x16) = 0;
      puVar1[-0x15] = 0;
      puVar1[-0x14] = 0;
      puVar1[-0x13] = 0;
      *(undefined2 *)(puVar1 + -0x12) = 0x300;
      *(undefined1 *)(puVar1 + -0x11) = 0;
      puVar1[-0x10] = 0;
      puVar1[-0xf] = 0;
      puVar1[-0xe] = 0;
      puVar1[-0xd] = 0;
      puVar1[-0xc] = 0;
      puVar1[-0xb] = 0;
      puVar1[-10] = 0;
      puVar1[-9] = 0;
      puVar1[-8] = 0;
      puVar1[-7] = 0;
      puVar1[-6] = 0;
      puVar1[-5] = 0;
      puVar1[-4] = 0;
      FText::FText((FText *)(puVar1 + -3));
      *(undefined1 *)(puVar1 + -1) = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined2 *)(puVar1 + 3) = 0x19;
      puVar1[6] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined1 *)(puVar1 + 7) = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      *(undefined4 *)(puVar1 + 10) = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      *(undefined4 *)(puVar1 + 0xd) = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      *(undefined4 *)(puVar1 + 0x10) = 0;
      *(undefined4 *)(puVar1 + 0x12) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x94) = 0;
      *(undefined1 *)(puVar1 + 0x11) = 0;
      puVar1[0x15] = 0;
      puVar1[0x13] = 0;
      puVar1[0x14] = 0;
      *(undefined2 *)(puVar1 + 0x16) = 0;
      puVar1[0x19] = 0;
      puVar1[0x17] = 0;
      puVar1[0x18] = 0;
      *(undefined2 *)(puVar1 + 0x1a) = 0;
      puVar1[0x1d] = 0;
      puVar1[0x1b] = 0;
      puVar1[0x1c] = 0;
      *(undefined2 *)(puVar1 + 0x1e) = 0;
      puVar1[0x21] = 0;
      puVar1[0x1f] = 0;
      puVar1[0x20] = 0;
      *(undefined4 *)(puVar1 + 0x22) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x114) = 0;
      puVar1[0x25] = 0;
      puVar1[0x23] = 0;
      puVar1[0x24] = 0;
      *(undefined2 *)(puVar1 + 0x26) = 0;
      puVar1[0x29] = 0;
      puVar1[0x27] = 0;
      puVar1[0x28] = 0;
      *(undefined1 *)((longlong)puVar1 + 0x151) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x153) = 0;
      puVar1[0x2b] = 0;
      puVar1[0x2c] = 0;
      *(undefined4 *)(puVar1 + 0x2d) = 0;
      *(undefined2 *)(puVar1 + 0x2e) = 0;
      puVar1 = puVar1 + 0x47;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int> @ 142c324d0

void __cdecl
DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
          (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x38;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FCustomizedToolMenu,int> @ 142c32520

void __cdecl DestructItems<FCustomizedToolMenu,int>(FCustomizedToolMenu *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->EntryOrder).field_0x40;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      FToolMenuProfile::~FToolMenuProfile((FToolMenuProfile *)(puVar1 + -0x3d));
      puVar1 = puVar1 + 0x41;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FToolMenuEntry,int> @ 142c325a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl DestructItems<FToolMenuEntry,int>(FToolMenuEntry *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined8 *)&(param_1->Construct).field_0x8;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + 7));
      if ((void *)puVar4[8] != (void *)0x0) {
        FMemory::Free((void *)puVar4[8]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar4 + 7));
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + 2));
      if ((void *)puVar4[3] != (void *)0x0) {
        FMemory::Free((void *)puVar4[3]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar4 + 2));
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + -1));
      if ((void *)*puVar4 != (void *)0x0) {
        FMemory::Free((void *)*puVar4);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar4 + -1));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)puVar4[-2]);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)puVar4[-4]);
      if ((void *)puVar4[-7] != (void *)0x0) {
        FMemory::Free((void *)puVar4[-7]);
      }
      FToolUIActionChoice::~FToolUIActionChoice((FToolUIActionChoice *)(puVar4 + -0x31));
      bVar1 = *(byte *)(puVar4 + -0x32);
      if ((2 < (ulonglong)bVar1) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(puVar4 + -0x36);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + -0x39));
      if ((void *)puVar4[-0x38] != (void *)0x0) {
        FMemory::Free((void *)puVar4[-0x38]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar4 + -0x39));
      if ((longlong *)puVar4[-0x3c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar4[-0x3c] + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + -0x3f));
      if ((void *)puVar4[-0x3e] != (void *)0x0) {
        FMemory::Free((void *)puVar4[-0x3e]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar4 + -0x3f));
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + -0x47));
      if ((void *)puVar4[-0x46] != (void *)0x0) {
        FMemory::Free((void *)puVar4[-0x46]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar4 + -0x47));
      if ((longlong *)puVar4[-0x4a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar4[-0x4a] + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + -0x4d));
      if ((void *)puVar4[-0x4c] != (void *)0x0) {
        FMemory::Free((void *)puVar4[-0x4c]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar4 + -0x4d));
      if ((longlong *)puVar4[-0x50] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar4[-0x50] + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + -0x53));
      if ((void *)puVar4[-0x52] != (void *)0x0) {
        FMemory::Free((void *)puVar4[-0x52]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar4 + -0x53));
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + -0x56));
      if ((void *)puVar4[-0x55] != (void *)0x0) {
        FMemory::Free((void *)puVar4[-0x55]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar4 + -0x56));
      FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)(puVar4 + -0x6f));
      FMenuEntryStyleParams::~FMenuEntryStyleParams((FMenuEntryStyleParams *)(puVar4 + -0x88));
      FToolMenuEntryToolBarData::~FToolMenuEntryToolBarData
                ((FToolMenuEntryToolBarData *)(puVar4 + -0xcd));
      FNewToolMenuChoice::~FNewToolMenuChoice((FNewToolMenuChoice *)(puVar4 + -0xdc));
      puVar4 = puVar4 + 0xf0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FToolMenuSection,int> @ 142c32830

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl DestructItems<FToolMenuSection,int>(FToolMenuSection *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Label).Getter;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this[0xe].field_0x8);
      if (*(void **)&this[0xe].field_0x10 != (void *)0x0) {
        FMemory::Free(*(void **)&this[0xe].field_0x10);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&this[0xe].field_0x8);
      FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)(this + 6));
      FNewSectionConstructChoice::~FNewSectionConstructChoice
                ((FNewSectionConstructChoice *)&this[2].field_0x10);
      bVar1 = this[2].field_0x8;
      if ((2 < (ulonglong)bVar1) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(this + 1);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
      if (*(void **)&this->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this);
      if (*(longlong **)(this + -1) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(this + -1) + 0x10))();
      }
      FToolMenuContext::~FToolMenuContext((FToolMenuContext *)&this[-6].field_0x8);
      DestructItems<FToolMenuEntry,int>(*(FToolMenuEntry **)(this + -7),*(int *)&this[-7].field_0x8)
      ;
      if (*(void **)(this + -7) != (void *)0x0) {
        FMemory::Free(*(void **)(this + -7));
      }
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this[0x17].field_0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FToolMenuVisibilityChoice,int> @ 142c32960

void __cdecl
DestructItems<FToolMenuVisibilityChoice,int>(FToolMenuVisibilityChoice *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    uVar3 = (ulonglong)(param_1->Value).TypeIndex;
    if ((2 < uVar3) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) break;
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3])(param_1);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// DestructItems<TAttribute<EVisibility>,int> @ 142c329f0

void __cdecl
DestructItems<TAttribute<EVisibility>,int>(TAttribute<EVisibility> *param_1,int param_2)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = &param_1->Getter;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this);
    param_1 = (TAttribute<EVisibility> *)(this + 1);
  }
  return;
}

// DestructItems<TSharedPtr<FGeneratedToolMenuWidget,1>,int> @ 142c32a40

void __cdecl
DestructItems<TSharedPtr<FGeneratedToolMenuWidget,1>,int>
          (TSharedPtr<FGeneratedToolMenuWidget,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FUICommandList,1>,int> @ 142c32a80

void __cdecl
DestructItems<TSharedPtr<FUICommandList,1>,int>(TSharedPtr<FUICommandList,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int> @ 142c32ac0

void __cdecl
DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
          (TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int> @ 142c32b00

void __cdecl
DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
          (TSharedRef<UE::ToolMenus::FMenuSection,1> *param_1,int param_2)

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

// DuplicateObject<UToolMenu> @ 142c32b40

UToolMenu * __cdecl DuplicateObject<UToolMenu>(UToolMenu *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UToolMenu *pUVar2;
  
  pUVar1 = UToolMenu::StaticClass();
  pUVar2 = (UToolMenu *)DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pUVar2;
}

// DuplicateObject<UToolMenuEntryScript> @ 142c32b90

UToolMenuEntryScript * __cdecl
DuplicateObject<UToolMenuEntryScript>(UToolMenuEntryScript *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UToolMenuEntryScript *pUVar2;
  
  pUVar1 = UToolMenuEntryScript::StaticClass();
  pUVar2 = (UToolMenuEntryScript *)
           DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pUVar2;
}

// GetTypeHash<FMultiBox_const_,1> @ 142c34080

uint __cdecl GetTypeHash<FMultiBox_const_,1>(TWeakPtr<FMultiBox_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<FMultiBox,1> @ 142c340b0

uint __cdecl GetTypeHash<FMultiBox,1>(TWeakPtr<FMultiBox,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeName<UToolMenus> @ 142c340e0

FString * __cdecl GetTypeName<UToolMenus>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UToolMenus::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<USlateTabManagerContext> @ 142c341a0

void __cdecl InternalConstructor<USlateTabManagerContext>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USlateTabManagerContext__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UToolMenu> @ 142c341e0

void __cdecl InternalConstructor<UToolMenu>(FObjectInitializer *param_1)

{
  UToolMenuBase *this;
  FObjectInitializer *pFVar1;
  
  this = (UToolMenuBase *)param_1->Obj;
  if (this != (UToolMenuBase *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UToolMenuBase::UToolMenuBase(this,pFVar1);
    *(undefined4 *)&this[1].field_0x20 = 0x10105;
    *(undefined ***)this = &___7UToolMenu__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined2 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    this[2].field_0x10 = 0;
    this[2].field_0x18 = 0;
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
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined4 *)&this[6].field_0x10 = 0;
    *(undefined2 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[6].field_0x1c = 0;
    *(undefined2 *)&this[1].field_0x24 = 1;
    this[1].field_0x26 = 1;
    this[6].field_0x1a = 1;
    *(undefined4 *)&this[6].field_0x24 = 1000;
  }
  return;
}

// InternalConstructor<UToolMenuContextBase> @ 142c342f0

void __cdecl InternalConstructor<UToolMenuContextBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UToolMenuContextBase__6B_;
  }
  return;
}

// InternalConstructor<UToolMenuContextExtensions> @ 142c34320

void __cdecl InternalConstructor<UToolMenuContextExtensions>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UToolMenuContextExtensions__6B_;
  }
  return;
}

// InternalConstructor<UToolMenuEntryExtensions> @ 142c34350

void __cdecl InternalConstructor<UToolMenuEntryExtensions>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UToolMenuEntryExtensions__6B_;
  }
  return;
}

// InternalConstructor<UToolMenuEntryScript> @ 142c34380

void __cdecl InternalConstructor<UToolMenuEntryScript>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UToolMenuEntryScript__6B_;
    FToolMenuEntryScriptData::FToolMenuEntryScriptData((FToolMenuEntryScriptData *)(this + 1));
    this[4].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UToolMenuProfileContext> @ 142c343c0

void __cdecl InternalConstructor<UToolMenuProfileContext>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UToolMenuProfileContext__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UToolMenuSectionDynamic> @ 142c34400

void __cdecl InternalConstructor<UToolMenuSectionDynamic>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UToolMenuSectionDynamic__6B_;
  }
  return;
}

// InternalConstructor<UToolMenuSectionExtensions> @ 142c34430

void __cdecl InternalConstructor<UToolMenuSectionExtensions>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UToolMenuSectionExtensions__6B_;
  }
  return;
}

// InternalConstructor<UToolMenuWidgetCollectionContext> @ 142c34460

void __cdecl InternalConstructor<UToolMenuWidgetCollectionContext>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UToolMenuWidgetCollectionContext__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UToolMenus> @ 142c344a0

void __cdecl InternalConstructor<UToolMenus>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  *(undefined ***)this = &___7UToolMenus__6B_;
  *(undefined8 *)(this + 1) = 0;
  *(undefined8 *)&this[1].field_0x8 = 0;
  *(undefined8 *)&this[1].field_0x10 = 0;
  *(undefined8 *)&this[1].field_0x18 = 2;
  *(undefined8 *)&this[1].field_0x20 = 0;
  *(undefined8 *)(this + 2) = 0;
  *(undefined4 *)&this[2].field_0x8 = 0;
  *(undefined8 *)&this[2].field_0x10 = 0;
  *(undefined8 *)&this[2].field_0x18 = 0;
  *(undefined4 *)&this[2].field_0x20 = 0;
  *(undefined8 *)(this + 3) = 0;
  *(undefined8 *)&this[3].field_0x8 = 0;
  *(undefined8 *)&this[3].field_0x10 = 0;
  *(undefined8 *)&this[3].field_0x18 = 2;
  *(undefined8 *)&this[3].field_0x20 = 0;
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)&this[4].field_0x8 = 0;
  *(undefined8 *)&this[4].field_0x10 = 2;
  FSlateIcon::FSlateIcon((FSlateIcon *)&this[4].field_0x18);
  FSlateIcon::FSlateIcon((FSlateIcon *)&this[5].field_0x10);
  *(undefined8 *)&this[6].field_0x8 = 0;
  *(undefined8 *)&this[6].field_0x10 = 0;
  *(undefined8 *)&this[6].field_0x18 = 0;
  *(undefined8 *)&this[6].field_0x20 = 0;
  *(undefined8 *)&this[7].field_0x10 = 0;
  *(undefined4 *)&this[7].field_0x18 = 0;
  *(undefined4 *)&this[7].field_0x1c = 0x80;
  *(undefined4 *)&this[7].field_0x20 = 0xffffffff;
  *(undefined4 *)&this[7].field_0x24 = 0;
  *(undefined8 *)&this[8].field_0x8 = 0;
  *(undefined4 *)&this[8].field_0x10 = 0;
  *(undefined8 *)&this[8].field_0x18 = 0;
  *(undefined8 *)&this[8].field_0x20 = 0;
  *(undefined8 *)&this[9].field_0x10 = 0;
  *(undefined4 *)&this[9].field_0x18 = 0;
  *(undefined4 *)&this[9].field_0x1c = 0x80;
  *(undefined4 *)&this[9].field_0x20 = 0xffffffff;
  *(undefined4 *)&this[9].field_0x24 = 0;
  *(undefined8 *)&this[10].field_0x8 = 0;
  *(undefined4 *)&this[10].field_0x10 = 0;
  *(undefined8 *)&this[10].field_0x18 = 0;
  *(undefined8 *)&this[10].field_0x20 = 0;
  *(undefined8 *)&this[0xb].field_0x10 = 0;
  *(undefined4 *)&this[0xb].field_0x18 = 0;
  *(undefined4 *)&this[0xb].field_0x1c = 0x80;
  *(undefined4 *)&this[0xb].field_0x20 = 0xffffffff;
  *(undefined4 *)&this[0xb].field_0x24 = 0;
  *(undefined8 *)&this[0xc].field_0x8 = 0;
  *(undefined4 *)&this[0xc].field_0x10 = 0;
  *(undefined8 *)&this[0xc].field_0x18 = 0;
  *(undefined8 *)&this[0xc].field_0x20 = 0;
  *(undefined8 *)&this[0xd].field_0x10 = 0;
  *(undefined4 *)&this[0xd].field_0x18 = 0;
  *(undefined4 *)&this[0xd].field_0x1c = 0x80;
  *(undefined4 *)&this[0xd].field_0x20 = 0xffffffff;
  *(undefined4 *)&this[0xd].field_0x24 = 0;
  *(undefined8 *)&this[0xe].field_0x8 = 0;
  *(undefined4 *)&this[0xe].field_0x10 = 0;
  *(undefined8 *)&this[0xe].field_0x18 = 0;
  *(undefined8 *)&this[0xe].field_0x20 = 0;
  *(undefined8 *)(this + 0xf) = 0;
  *(undefined8 *)&this[0xf].field_0x8 = 0;
  *(undefined8 *)&this[0xf].field_0x20 = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)&this[0x10].field_0x4 = 0x80;
  *(undefined4 *)&this[0x10].field_0x8 = 0xffffffff;
  *(undefined4 *)&this[0x10].field_0xc = 0;
  *(undefined8 *)&this[0x10].field_0x18 = 0;
  *(undefined4 *)&this[0x10].field_0x20 = 0;
  *(undefined8 *)(this + 0x11) = 0;
  *(undefined8 *)&this[0x11].field_0x8 = 0;
  *(undefined8 *)&this[0x11].field_0x10 = 0;
  *(undefined8 *)&this[0x11].field_0x18 = 0;
  *(undefined8 *)&this[0x12].field_0x8 = 0;
  *(undefined4 *)&this[0x12].field_0x10 = 0;
  *(undefined4 *)&this[0x12].field_0x14 = 0x80;
  *(undefined4 *)&this[0x12].field_0x18 = 0xffffffff;
  *(undefined4 *)&this[0x12].field_0x1c = 0;
  *(undefined8 *)(this + 0x13) = 0;
  *(undefined4 *)&this[0x13].field_0x8 = 0;
  *(undefined8 *)&this[0x13].field_0x10 = 0;
  *(undefined8 *)&this[0x13].field_0x18 = 0;
  *(undefined8 *)&this[0x14].field_0x8 = 0;
  *(undefined4 *)&this[0x14].field_0x10 = 0;
  *(undefined4 *)&this[0x14].field_0x14 = 0x80;
  *(undefined4 *)&this[0x14].field_0x18 = 0xffffffff;
  *(undefined4 *)&this[0x14].field_0x1c = 0;
  *(undefined8 *)(this + 0x15) = 0;
  *(undefined4 *)&this[0x15].field_0x8 = 0;
  *(undefined8 *)&this[0x15].field_0x10 = 0;
  *(undefined8 *)&this[0x15].field_0x18 = 0;
  *(undefined4 *)&this[0x15].field_0x20 = 0;
  *(undefined4 *)(this + 0x16) = 0;
  *(undefined2 *)&this[0x16].field_0x4 = 0;
  return;
}

// InternalVTableHelperCtorCaller<USlateTabManagerContext> @ 142c344c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USlateTabManagerContext>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USlateTabManagerContext::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USlateTabManagerContext__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UToolMenu> @ 142c34580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UToolMenu>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UToolMenu::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UToolMenuBase::UToolMenuBase((UToolMenuBase *)pUVar1,param_1);
    pUVar1[1].field_0x26 = 1;
    *(undefined ***)pUVar1 = &___7UToolMenu__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined1 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    pUVar1[2].field_0x10 = 0;
    pUVar1[2].field_0x18 = 0;
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
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined4 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x1c = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UToolMenuContextBase> @ 142c346e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UToolMenuContextBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UToolMenuContextBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UToolMenuContextBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UToolMenuContextExtensions> @ 142c34790

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UToolMenuContextExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UToolMenuContextExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UToolMenuContextExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UToolMenuEntryExtensions> @ 142c34840

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UToolMenuEntryExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UToolMenuEntryExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UToolMenuEntryExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UToolMenuEntryScript> @ 142c348f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UToolMenuEntryScript>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UToolMenuEntryScript::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UToolMenuEntryScript__6B_;
    FToolMenuEntryScriptData::FToolMenuEntryScriptData((FToolMenuEntryScriptData *)(pUVar1 + 1));
    pUVar1[4].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UToolMenuProfileContext> @ 142c349b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UToolMenuProfileContext>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UToolMenuProfileContext::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UToolMenuProfileContext__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UToolMenuSectionDynamic> @ 142c34a70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UToolMenuSectionDynamic>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UToolMenuSectionDynamic::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UToolMenuSectionDynamic__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UToolMenuSectionExtensions> @ 142c34b20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UToolMenuSectionExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UToolMenuSectionExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UToolMenuSectionExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UToolMenuWidgetCollectionContext> @ 142c34bd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UToolMenuWidgetCollectionContext>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UToolMenuWidgetCollectionContext::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UToolMenuWidgetCollectionContext__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UToolMenus> @ 142c34c90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UToolMenus>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UToolMenus *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UToolMenus::GetPrivateStaticClass();
  pUVar3 = (UToolMenus *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UToolMenus *)0x0) {
    pUVar3 = UToolMenus::UToolMenus(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UToolMenuEntryScript,UToolMenuEntryScript_const_*,0> @ 142c34d30

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UToolMenuEntryScript,UToolMenuEntryScript_const_*,0>
          (TObjectPtr<UToolMenuEntryScript> *param_1,UToolMenuEntryScript **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UToolMenuEntryScript *)0x0) {
    return *param_2 == (UToolMenuEntryScript *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// LowerBoundInternal<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>_const_,int,TObjectPtr<UObject>,TSortedMap<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>,TSizedDefaultAllocator<32>,TLess<TObjectPtr<UObject_const_>_const_>_>::FKeyForward,TLess<TObjectPtr<UObject_const_>_const_>_> @ 142c34d50

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>_const_,int,TObjectPtr<UObject>,TSortedMap<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>,TSizedDefaultAllocator<32>,TLess<TObjectPtr<UObject_const_>_const_>_>::FKeyForward,TLess<TObjectPtr<UObject_const_>_const_>_>
          (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *param_1,int param_2,
          TObjectPtr<UObject> *param_3,FKeyForward param_4,
          TLess<TObjectPtr<UObject_const_>_const_> param_5)

{
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < param_2) {
    do {
      pUVar2 = (param_3->field0_0x0).DebugPtr;
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      pUVar3 = *(UObject **)(param_1 + iVar1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      if (pUVar3 < pUVar2) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      uVar4 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar4 != 0);
  }
  return iVar5;
}

// MakeShared<TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_>,1> @ 142c34e10

TSharedRef<TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_>,1> * __cdecl
MakeShared<TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_>,1>
          (TSharedRef<TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_>,1>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_>,1> *pTVar4;
  
  pTVar3 = operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object =
         (TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_> *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_V__TAttribute_UEVisibility____V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object =
         (TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1) ==
        (TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_>,1> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// Merge<FToolMenuSection_*,FIdentityFunctor,TDereferenceWrapper<FToolMenuSection_*,`UToolMenus::PopulateToolBarBuilder'::__l2::<lambda_2>_>_> @ 142c34eb0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
AlgoImpl::
Merge<FToolMenuSection_*,FIdentityFunctor,TDereferenceWrapper<FToolMenuSection_*,_UToolMenus::PopulateToolBarBuilder_::__l2::<lambda_2>_>_>
          (FToolMenuSection **param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<FToolMenuSection_*,_private:_void___cdecl_UToolMenus::PopulateToolBarBuilder(FToolBarBuilder_&,UToolMenu_*)_::_2_::<lambda_2>_>
          param_5)

{
  FToolMenuSection **ppFVar1;
  EToolMenuSectionAlign EVar2;
  EToolMenuSectionAlign EVar3;
  FToolMenuSection *pFVar4;
  int iVar5;
  FToolMenuSection **ppFVar6;
  FToolMenuSection **ppFVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FToolMenuSection **ppFVar14;
  FToolMenuSection **ppFVar15;
  FToolMenuSection **ppFVar7;
  
  if (0 < param_2) {
    iVar10 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar13 = 0;
      if (0 < param_2 - iVar10) {
        EVar2 = param_1[param_2]->Alignment;
        uVar11 = param_2 - iVar10;
        do {
          uVar12 = uVar11 >> 1;
          EVar3 = param_1[(longlong)(int)(uVar12 + iVar13) + (longlong)iVar10]->Alignment;
          if (EVar2 == EVar3) {
            iVar5 = 0;
          }
          else if (EVar2 == First) {
            if (EVar3 == Default) {
              iVar5 = -1;
            }
            else {
LAB_142c34f56:
              iVar5 = -1;
              if (EVar3 < EVar2) {
                iVar5 = 1;
              }
            }
          }
          else {
            if ((EVar2 != Default) || (EVar3 != First)) goto LAB_142c34f56;
            iVar5 = 1;
          }
          if (-1 < iVar5) {
            iVar13 = uVar12 + iVar13 + (uVar11 & 1);
          }
          uVar11 = uVar12;
        } while (uVar12 != 0);
      }
      iVar10 = iVar10 + iVar13;
      if (param_2 <= iVar10) {
        return;
      }
      iVar13 = 0;
      ppFVar1 = param_1 + iVar10;
      if (0 < param_3 - param_2) {
        EVar2 = (*ppFVar1)->Alignment;
        uVar11 = param_3 - param_2;
        do {
          uVar12 = uVar11 >> 1;
          EVar3 = param_1[(longlong)(int)(uVar12 + iVar13) + (longlong)param_2]->Alignment;
          if (EVar3 == EVar2) {
            iVar5 = 0;
          }
          else if (EVar3 == First) {
            if (EVar2 == Default) {
              iVar5 = -1;
            }
            else {
LAB_142c34fe6:
              iVar5 = -1;
              if (EVar2 < EVar3) {
                iVar5 = 1;
              }
            }
          }
          else {
            if ((EVar3 != Default) || (EVar2 != First)) goto LAB_142c34fe6;
            iVar5 = 1;
          }
          if (iVar5 < 0) {
            iVar13 = uVar12 + iVar13 + (uVar11 & 1);
          }
          uVar11 = uVar12;
        } while (uVar12 != 0);
      }
      iVar9 = (iVar13 - iVar10) + param_2;
      iVar5 = param_2 - iVar10;
      if ((iVar5 != 0) && (iVar5 < iVar9)) {
        ppFVar6 = ppFVar1 + iVar5;
        ppFVar14 = ppFVar1;
        ppFVar7 = ppFVar1 + iVar5;
        do {
          while( true ) {
            ppFVar8 = ppFVar6 + 1;
            ppFVar15 = ppFVar14 + 1;
            pFVar4 = *ppFVar14;
            *ppFVar14 = *ppFVar6;
            *ppFVar6 = pFVar4;
            ppFVar14 = ppFVar15;
            if (ppFVar8 == ppFVar1 + iVar9) break;
            ppFVar6 = ppFVar8;
            if (ppFVar15 == ppFVar7) {
              ppFVar7 = ppFVar8;
            }
          }
          ppFVar6 = ppFVar7;
        } while (ppFVar15 != ppFVar7);
      }
      param_2 = param_2 + iVar13;
      iVar10 = iVar10 + 1 + iVar13;
    } while (iVar10 < param_2);
  }
  return;
}

// Merge<FToolMenuEntry,FIdentityFunctor,TDereferenceWrapper<FToolMenuEntry,`UToolMenus::AssembleMenuHierarchy'::__l13::<lambda_1>_>_> @ 142c35080

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
AlgoImpl::
Merge<FToolMenuEntry,FIdentityFunctor,TDereferenceWrapper<FToolMenuEntry,_UToolMenus::AssembleMenuHierarchy_::__l13::<lambda_1>_>_>
          (FToolMenuEntry *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<FToolMenuEntry,_public:_void___cdecl_UToolMenus::AssembleMenuHierarchy(UToolMenu_*,TArray<UToolMenu_*,TSizedDefaultAllocator<32>_>_const_&)_::_13_::<lambda_1>_>
          param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  FToolMenuEntry *pFVar4;
  FToolMenuEntry *pFVar5;
  FToolMenuEntry *pFVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FToolMenuEntry *_Src;
  FToolMenuEntry *pFVar11;
  int local_7d8;
  undefined1 local_7c0 [1928];
  FToolMenuEntry *pFVar10;
  
  local_7d8 = 0;
  if (0 < param_2) {
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar7 = 0;
      if (0 < param_2 - local_7d8) {
        uVar9 = param_2 - local_7d8;
        iVar7 = 0;
        do {
          uVar8 = uVar9 >> 1;
          bVar1 = `UToolMenus::AssembleMenuHierarchy'::__l13::<lambda_1>::operator()
                            (param_5.Predicate,param_1 + param_2,
                             param_1 + (longlong)(int)(uVar8 + iVar7) + (longlong)local_7d8);
          if (!bVar1) {
            iVar7 = uVar8 + iVar7 + (uVar9 & 1);
          }
          uVar9 = uVar8;
        } while (uVar8 != 0);
      }
      local_7d8 = local_7d8 + iVar7;
      if (param_2 <= local_7d8) {
        return;
      }
      iVar7 = 0;
      uVar9 = param_3 - param_2;
      pFVar4 = param_1 + local_7d8;
      if (0 < (int)uVar9) {
        do {
          uVar8 = uVar9 >> 1;
          bVar1 = `UToolMenus::AssembleMenuHierarchy'::__l13::<lambda_1>::operator()
                            (param_5.Predicate,
                             param_1 + (longlong)(int)(uVar8 + iVar7) + (longlong)param_2,pFVar4);
          if (bVar1) {
            iVar7 = uVar8 + iVar7 + (uVar9 & 1);
          }
          uVar9 = uVar8;
        } while (uVar8 != 0);
      }
      iVar3 = (iVar7 - local_7d8) + param_2;
      iVar2 = param_2 - local_7d8;
      if ((iVar2 != 0) && (iVar2 < iVar3)) {
        pFVar5 = pFVar4;
        _Src = pFVar4 + iVar2;
        pFVar10 = pFVar4 + iVar2;
        do {
          while( true ) {
            pFVar11 = _Src + 1;
            pFVar6 = pFVar5 + 1;
            memcpy(local_7c0,pFVar5,0x780);
            memcpy(pFVar5,_Src,0x780);
            memcpy(_Src,local_7c0,0x780);
            pFVar5 = pFVar6;
            if (pFVar11 == pFVar4 + iVar3) break;
            _Src = pFVar11;
            if (pFVar6 == pFVar10) {
              pFVar10 = pFVar11;
            }
          }
          _Src = pFVar10;
        } while (pFVar6 != pFVar10);
      }
      local_7d8 = local_7d8 + 1 + iVar7;
      param_2 = param_2 + iVar7;
    } while (local_7d8 < param_2);
  }
  return;
}

// NewObject<UToolMenu> @ 142c35310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UToolMenu * __cdecl
NewObject<UToolMenu>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UToolMenu *pUVar2;
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
  pUVar1 = UToolMenu::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UToolMenu *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8)
  ;
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UToolMenuWidgetCollectionContext> @ 142c35400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UToolMenuWidgetCollectionContext * __cdecl
NewObject<UToolMenuWidgetCollectionContext>(UObject *param_1)

{
  UClass *pUVar1;
  UToolMenuWidgetCollectionContext *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UToolMenuWidgetCollectionContext::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UToolMenuWidgetCollectionContext *)
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

// NewObject<UToolMenus> @ 142c354a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UToolMenus * __cdecl NewObject<UToolMenus>(UObject *param_1)

{
  UClass *pUVar1;
  UToolMenus *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UToolMenus::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UToolMenus *)
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

// RemoveAll<`FToolMenuSection::RemoveEntryObject'::__l2::<lambda_1>_> @ 142c35790

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

int __thiscall
TArray<FToolMenuEntry,TSizedDefaultAllocator<32>_>::
RemoveAll<_FToolMenuSection::RemoveEntryObject_::__l2::<lambda_1>_>
          (TArray<FToolMenuEntry,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  UToolMenuEntryScript *pUVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  FName *pFVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  bool bVar14;
  
  iVar1 = this->ArrayNum;
  lVar11 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pUVar2 = param_1->InObject;
  pFVar3 = (this->AllocatorInstance).Data;
  iVar13 = 0;
  if (*(UToolMenuEntryScript **)(pFVar3 + 0x38) == (UToolMenuEntryScript *)0x0) {
    bVar14 = pUVar2 == (UToolMenuEntryScript *)0x0;
  }
  else {
    bVar14 = *(UToolMenuEntryScript **)(pFVar3 + 0x38) == pUVar2;
  }
  if ((bVar14) &&
     (lVar7._0_4_ = (pUVar2->Data).Name.ComparisonIndex, lVar7._4_4_ = (pUVar2->Data).Name.Number,
     *(longlong *)pFVar3 == lVar7)) {
    bVar12 = 0;
  }
  else {
    bVar12 = 1;
  }
  lVar7 = 0;
  iVar8 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar9 = iVar8 + 1;
    if (lVar7 < lVar11) {
      FVar4 = (FName)param_1->InObject;
      pFVar5 = (FName *)(pFVar3 + lVar7 * 0x780);
      do {
        if (pFVar5[7] == (FName)0x0) {
          bVar14 = FVar4 == (FName)0x0;
        }
        else {
          bVar14 = pFVar5[7] == FVar4;
        }
        if ((bVar14) && (*pFVar5 == *(FName *)((longlong)FVar4 + 0x38))) {
          bVar6 = 0;
        }
        else {
          bVar6 = 1;
        }
        if (bVar12 != bVar6) break;
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 1;
        pFVar5 = pFVar5 + 0xf0;
      } while (lVar7 < lVar11);
    }
    iVar10 = iVar9 - iVar8;
    if (bVar12 == 0) {
      DestructItems<FToolMenuEntry,int>((FToolMenuEntry *)(pFVar3 + (longlong)iVar8 * 0x780),iVar10)
      ;
    }
    else {
      if (iVar13 != iVar8) {
        memmove(pFVar3 + (longlong)iVar13 * 0x780,pFVar3 + (longlong)iVar8 * 0x780,
                (longlong)iVar10 * 0x780);
      }
      iVar13 = iVar13 + iVar10;
    }
    bVar12 = bVar12 ^ 1;
    iVar8 = iVar9;
    if (lVar11 <= lVar7) {
      this->ArrayNum = iVar13;
      return iVar1 - iVar13;
    }
  } while( true );
}

// Reverse<UToolMenu_*> @ 142c35c30

void __cdecl AlgoImpl::Reverse<UToolMenu_*>(UToolMenu **param_1,int param_2)

{
  UToolMenu *pUVar1;
  UToolMenu **ppUVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    ppUVar2 = param_1 + (param_2 + -1);
    do {
      pUVar1 = param_1[lVar3];
      param_1[lVar3] = *ppUVar2;
      lVar3 = lVar3 + 1;
      *ppUVar2 = pUVar1;
      ppUVar2 = ppUVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// Reverse<UToolMenu_const_*> @ 142c35c90

void __cdecl AlgoImpl::Reverse<UToolMenu_const_*>(UToolMenu **param_1,int param_2)

{
  UToolMenu *pUVar1;
  UToolMenu **ppUVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    ppUVar2 = param_1 + (param_2 + -1);
    do {
      pUVar1 = param_1[lVar3];
      param_1[lVar3] = *ppUVar2;
      lVar3 = lVar3 + 1;
      *ppUVar2 = pUVar1;
      ppUVar2 = ppUVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// RotateInternal<FToolMenuSection_*> @ 142c35cf0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

int __cdecl
AlgoImpl::RotateInternal<FToolMenuSection_*>(FToolMenuSection **param_1,int param_2,int param_3)

{
  FToolMenuSection *pFVar1;
  FToolMenuSection **ppFVar2;
  FToolMenuSection **ppFVar4;
  FToolMenuSection **ppFVar5;
  FToolMenuSection **ppFVar6;
  FToolMenuSection **ppFVar3;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    ppFVar2 = param_1 + param_3;
    ppFVar5 = param_1;
    ppFVar3 = param_1 + param_3;
    do {
      while( true ) {
        ppFVar4 = ppFVar2 + 1;
        ppFVar6 = ppFVar5 + 1;
        pFVar1 = *ppFVar5;
        *ppFVar5 = *ppFVar2;
        *ppFVar2 = pFVar1;
        ppFVar5 = ppFVar6;
        if (ppFVar4 == param_1 + param_2) break;
        ppFVar2 = ppFVar4;
        if (ppFVar6 == ppFVar3) {
          ppFVar3 = ppFVar4;
        }
      }
      ppFVar2 = ppFVar3;
    } while (ppFVar6 != ppFVar3);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// RotateInternal<FToolMenuEntry> @ 142c35d70

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

int __cdecl
AlgoImpl::RotateInternal<FToolMenuEntry>(FToolMenuEntry *param_1,int param_2,int param_3)

{
  FToolMenuEntry *_Src;
  FToolMenuEntry *pFVar2;
  FToolMenuEntry *pFVar3;
  FToolMenuEntry *pFVar4;
  undefined1 local_7a8 [1920];
  FToolMenuEntry *pFVar1;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    _Src = param_1 + param_3;
    pFVar3 = param_1;
    pFVar1 = param_1 + param_3;
    do {
      while( true ) {
        pFVar2 = _Src + 1;
        pFVar4 = pFVar3 + 1;
        memcpy(local_7a8,pFVar3,0x780);
        memcpy(pFVar3,_Src,0x780);
        memcpy(_Src,local_7a8,0x780);
        pFVar3 = pFVar4;
        if (pFVar2 == param_1 + param_2) break;
        _Src = pFVar2;
        if (pFVar4 == pFVar1) {
          pFVar1 = pFVar2;
        }
      }
      _Src = pFVar1;
    } while (pFVar4 != pFVar1);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<FToolMenuSection_*,FIdentityFunctor,TDereferenceWrapper<FToolMenuSection_*,`UToolMenus::PopulateToolBarBuilder'::__l2::<lambda_2>_>_> @ 142c35ea0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
AlgoImpl::
StableSortInternal<FToolMenuSection_*,FIdentityFunctor,TDereferenceWrapper<FToolMenuSection_*,_UToolMenus::PopulateToolBarBuilder_::__l2::<lambda_2>_>_>
          (FToolMenuSection **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FToolMenuSection_*,_private:_void___cdecl_UToolMenus::PopulateToolBarBuilder(FToolBarBuilder_&,UToolMenu_*)_::_2_::<lambda_2>_>
          param_4)

{
  EToolMenuSectionAlign EVar1;
  EToolMenuSectionAlign EVar2;
  FToolMenuSection *pFVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (0 < param_2) {
    lVar5 = 0;
    iVar9 = 1;
    do {
      if (iVar9 < param_2) {
        pFVar3 = param_1[lVar5];
        EVar1 = pFVar3->Alignment;
        EVar2 = param_1[lVar5 + 1]->Alignment;
        if (EVar2 == EVar1) {
          iVar4 = 0;
        }
        else if (EVar2 == First) {
          if (EVar1 == Default) {
            iVar4 = -1;
          }
          else {
LAB_142c35f1d:
            iVar4 = -1;
            if (EVar1 < EVar2) {
              iVar4 = 1;
            }
          }
        }
        else {
          if ((EVar2 != Default) || (EVar1 != First)) goto LAB_142c35f1d;
          iVar4 = 1;
        }
        if (iVar4 < 0) {
          param_1[lVar5] = param_1[lVar5 + 1];
          param_1[lVar5 + 1] = pFVar3;
        }
      }
      iVar9 = iVar9 + 2;
      lVar5 = lVar5 + 2;
    } while (lVar5 < param_2);
  }
  iVar9 = 2;
  if (2 < param_2) {
    do {
      iVar4 = iVar9 * 2;
      iVar6 = 0;
      iVar7 = param_2;
      do {
        iVar8 = iVar7;
        if (iVar4 <= iVar7) {
          iVar8 = iVar4;
        }
        Merge<FToolMenuSection_*,FIdentityFunctor,TDereferenceWrapper<FToolMenuSection_*,_UToolMenus::PopulateToolBarBuilder_::__l2::<lambda_2>_>_>
                  (param_1 + iVar6,iVar9,iVar8,param_3,param_4);
        iVar6 = iVar6 + iVar4;
        iVar7 = iVar7 + iVar9 * -2;
      } while (iVar6 < param_2);
      iVar9 = iVar4;
    } while (iVar4 < param_2);
  }
  return;
}

// StableSortInternal<FToolMenuEntry,FIdentityFunctor,TDereferenceWrapper<FToolMenuEntry,`UToolMenus::AssembleMenuHierarchy'::__l13::<lambda_1>_>_> @ 142c35fd0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
AlgoImpl::
StableSortInternal<FToolMenuEntry,FIdentityFunctor,TDereferenceWrapper<FToolMenuEntry,_UToolMenus::AssembleMenuHierarchy_::__l13::<lambda_1>_>_>
          (FToolMenuEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FToolMenuEntry,_public:_void___cdecl_UToolMenus::AssembleMenuHierarchy(UToolMenu_*,TArray<UToolMenu_*,TSizedDefaultAllocator<32>_>_const_&)_::_13_::<lambda_1>_>
          param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FToolMenuEntry *pFVar7;
  FToolMenuEntry *_Src;
  undefined1 local_7a8 [1920];
  
  iVar3 = 0;
  if (0 < param_2) {
    pFVar7 = param_1 + 1;
    _Src = param_1;
    do {
      if ((iVar3 + 1 < param_2) &&
         (bVar2 = `UToolMenus::AssembleMenuHierarchy'::__l13::<lambda_1>::operator()
                            (param_4.Predicate,pFVar7,_Src), bVar2)) {
        memcpy(local_7a8,_Src,0x780);
        memcpy(_Src,_Src + 1,0x780);
        memcpy(_Src + 1,local_7a8,0x780);
      }
      iVar3 = iVar3 + 2;
      pFVar7 = pFVar7 + 2;
      _Src = _Src + 2;
    } while (iVar3 < param_2);
  }
  iVar3 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar3 * 2;
      iVar4 = 0;
      iVar5 = param_2;
      do {
        iVar6 = iVar5;
        if (iVar1 <= iVar5) {
          iVar6 = iVar1;
        }
        Merge<FToolMenuEntry,FIdentityFunctor,TDereferenceWrapper<FToolMenuEntry,_UToolMenus::AssembleMenuHierarchy_::__l13::<lambda_1>_>_>
                  (param_1 + iVar4,iVar3,iVar6,param_3,param_4);
        iVar4 = iVar4 + iVar1;
        iVar5 = iVar5 + iVar3 * -2;
      } while (iVar4 < param_2);
      iVar3 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// StaticEnum<enum_EToolMenuInsertFallback> @ 142c36120

UEnum * __cdecl StaticEnum<enum_EToolMenuInsertFallback>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EToolMenuInsertFallback.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolMenus();
    Z_Registration_Info_UEnum_EToolMenuInsertFallback.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ToolMenus_EToolMenuInsertFallback,(UObject *)pUVar1,
                       L"EToolMenuInsertFallback");
  }
  return Z_Registration_Info_UEnum_EToolMenuInsertFallback.OuterSingleton;
}

// StaticEnum<enum_EToolMenuInsertType> @ 142c36160

UEnum * __cdecl StaticEnum<enum_EToolMenuInsertType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EToolMenuInsertType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolMenus();
    Z_Registration_Info_UEnum_EToolMenuInsertType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ToolMenus_EToolMenuInsertType,(UObject *)pUVar1,
                       L"EToolMenuInsertType");
  }
  return Z_Registration_Info_UEnum_EToolMenuInsertType.OuterSingleton;
}

// StaticEnum<enum_EToolMenuSectionAlign> @ 142c361a0

UEnum * __cdecl StaticEnum<enum_EToolMenuSectionAlign>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EToolMenuSectionAlign.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolMenus();
    Z_Registration_Info_UEnum_EToolMenuSectionAlign.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ToolMenus_EToolMenuSectionAlign,(UObject *)pUVar1,
                       L"EToolMenuSectionAlign");
  }
  return Z_Registration_Info_UEnum_EToolMenuSectionAlign.OuterSingleton;
}

// StaticEnum<enum_EToolMenuStringCommandType> @ 142c361e0

UEnum * __cdecl StaticEnum<enum_EToolMenuStringCommandType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EToolMenuStringCommandType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolMenus();
    Z_Registration_Info_UEnum_EToolMenuStringCommandType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType,(UObject *)pUVar1,
                       L"EToolMenuStringCommandType");
  }
  return Z_Registration_Info_UEnum_EToolMenuStringCommandType.OuterSingleton;
}

// TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateToolBarBuilderWithTopLevelChildren'::__l45::<lambda_1>_> @ 142c364f0

TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,_private:_void___cdecl_UToolMenus::PopulateToolBarBuilderWithTopLevelChildren(FToolBarBuilder_&,UToolMenu_*,FToolMenuEntry_&,bool)_::_45_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateToolBarBuilderWithTopLevelChildren'::__l45::<lambda_1>_>
::
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,_UToolMenus::PopulateToolBarBuilderWithTopLevelChildren_::__l45::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,_private:_void___cdecl_UToolMenus::PopulateToolBarBuilderWithTopLevelChildren(FToolBarBuilder_&,UToolMenu_*,FToolMenuEntry_&,bool)_::_45_::<lambda_1>_>
          *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  TAttribute<EVisibility> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x18);
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateToolBarBuilderWithTopLevelChildren'::`45'::<lambda_1>_>
        ::_vftable_;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->Functor).Previous.ArrayNum;
  pTVar3 = (TAttribute<EVisibility> *)(param_1->Functor).Previous.AllocatorInstance.Data;
  *(int *)((longlong)this + 0x20) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x24) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x24));
    ConstructItems<TAttribute<EVisibility>,TAttribute<EVisibility>,int>(pFVar1->Data,pTVar3,iVar2);
  }
  *(TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x28) =
       (param_1->Functor).Next.Object;
  pTVar4 = (param_1->Functor).Next.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x30) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::CalculateToolbarVisibility'::__l2::<lambda_2>_> @ 142c365c0

TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,_private:_static_class_TAttribute<EVisibility>___cdecl_UToolMenus::CalculateToolbarVisibility(UToolMenu_*,FToolMenuSection_&,FToolMenuEntry_&,bool,bool)_::_2_::<lambda_2>_>
* __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::CalculateToolbarVisibility'::__l2::<lambda_2>_>
::
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,_UToolMenus::CalculateToolbarVisibility_::__l2::<lambda_2>_>
          (void *this,
          TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,_private:_static_class_TAttribute<EVisibility>___cdecl_UToolMenus::CalculateToolbarVisibility(UToolMenu_*,FToolMenuSection_&,FToolMenuEntry_&,bool,bool)_::_2_::<lambda_2>_>
          *param_1)

{
  int iVar1;
  ForElementType<FToolMenuVisibilityChoice> *pFVar2;
  ForElementType<FToolMenuVisibilityChoice> FVar3;
  
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::CalculateToolbarVisibility'::`2'::<lambda_2>_>
        ::_vftable_;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  FVar3 = (param_1->Functor).Visibilities.AllocatorInstance.SecondaryData;
  iVar1 = (param_1->Functor).Visibilities.ArrayNum;
  *(int *)((longlong)this + 0x48) = iVar1;
  if (FVar3 == (ForElementType<FToolMenuVisibilityChoice>)0x0) {
    FVar3 = (ForElementType<FToolMenuVisibilityChoice>)&param_1->Functor;
  }
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0x4c) = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FToolMenuVisibilityChoice>_>
              (0x28,8,iVar1,0,(ForElementType<FToolMenuVisibilityChoice> *)((longlong)this + 0x18),
               iVar1,(int *)((longlong)this + 0x4c));
    pFVar2 = *(ForElementType<FToolMenuVisibilityChoice> **)((longlong)this + 0x40);
    if (*(ForElementType<FToolMenuVisibilityChoice> **)((longlong)this + 0x40) ==
        (ForElementType<FToolMenuVisibilityChoice> *)0x0) {
      pFVar2 = (ForElementType<FToolMenuVisibilityChoice> *)((longlong)this + 0x18);
    }
    ConstructItems<FToolMenuVisibilityChoice,FToolMenuVisibilityChoice,int>
              (pFVar2,(FToolMenuVisibilityChoice *)FVar3,iVar1);
  }
  return this;
}

// TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateToolBarBuilderWithTopLevelChildren'::__l66::<lambda_2>_> @ 142c36680

TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,_private:_void___cdecl_UToolMenus::PopulateToolBarBuilderWithTopLevelChildren(FToolBarBuilder_&,UToolMenu_*,FToolMenuEntry_&,bool)_::_66_::<lambda_2>_>
* __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateToolBarBuilderWithTopLevelChildren'::__l66::<lambda_2>_>
::
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,_UToolMenus::PopulateToolBarBuilderWithTopLevelChildren_::__l66::<lambda_2>_>
          (void *this,
          TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,_private:_void___cdecl_UToolMenus::PopulateToolBarBuilderWithTopLevelChildren(FToolBarBuilder_&,UToolMenu_*,FToolMenuEntry_&,bool)_::_66_::<lambda_2>_>
          *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  TAttribute<EVisibility> *pTVar3;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x18);
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateToolBarBuilderWithTopLevelChildren'::`66'::<lambda_2>_>
        ::_vftable_;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->Functor).AllRaisedVisibilities.ArrayNum;
  pTVar3 = (TAttribute<EVisibility> *)
           (param_1->Functor).AllRaisedVisibilities.AllocatorInstance.Data;
  *(int *)((longlong)this + 0x20) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x24) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x24));
    ConstructItems<TAttribute<EVisibility>,TAttribute<EVisibility>,int>(pFVar1->Data,pTVar3,iVar2);
  }
  return this;
}

// TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertWidgetChoice'::__l5::<lambda_1>_> @ 142c36730

TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_private:_class_TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>___cdecl_UToolMenus::ConvertWidgetChoice(FNewToolMenuChoice_const_&,FToolMenuContext_const_&)const_::_5_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertWidgetChoice'::__l5::<lambda_1>_>
::
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_UToolMenus::ConvertWidgetChoice_::__l5::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_private:_class_TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>___cdecl_UToolMenus::ConvertWidgetChoice(FNewToolMenuChoice_const_&,FToolMenuContext_const_&)const_::_5_::<lambda_1>_>
          *param_1)

{
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertWidgetChoice'::`5'::<lambda_1>_>
        ::_vftable_;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
              *)((longlong)this + 0x18),&(param_1->Functor).ToCall);
  FToolMenuContext::FToolMenuContext
            ((FToolMenuContext *)((longlong)this + 0x30),&(param_1->Functor).Context);
  return this;
}

// TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertWidgetChoice'::__l9::<lambda_2>_> @ 142c367b0

TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_private:_class_TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>___cdecl_UToolMenus::ConvertWidgetChoice(FNewToolMenuChoice_const_&,FToolMenuContext_const_&)const_::_9_::<lambda_2>_>
* __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertWidgetChoice'::__l9::<lambda_2>_>
::
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_UToolMenus::ConvertWidgetChoice_::__l9::<lambda_2>_>
          (void *this,
          TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_private:_class_TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>___cdecl_UToolMenus::ConvertWidgetChoice(FNewToolMenuChoice_const_&,FToolMenuContext_const_&)const_::_9_::<lambda_2>_>
          *param_1)

{
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertWidgetChoice'::`9'::<lambda_2>_>
        ::_vftable_;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy> *)
             ((longlong)this + 0x18),&(param_1->Functor).ToCall);
  FToolMenuContext::FToolMenuContext
            ((FToolMenuContext *)((longlong)this + 0x30),&(param_1->Functor).Context);
  return this;
}

// TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateToolBarBuilderWithEntry'::__l89::<lambda_2>_> @ 142c36830

TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_private:_void___cdecl_UToolMenus::PopulateToolBarBuilderWithEntry(FToolBarBuilder_&,UToolMenu_*,FToolMenuSection_&,FToolMenuEntry_&,bool,bool)_::_89_::<lambda_2>_>
* __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateToolBarBuilderWithEntry'::__l89::<lambda_2>_>
::
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_UToolMenus::PopulateToolBarBuilderWithEntry_::__l89::<lambda_2>_>
          (void *this,
          TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_private:_void___cdecl_UToolMenus::PopulateToolBarBuilderWithEntry(FToolBarBuilder_&,UToolMenu_*,FToolMenuSection_&,FToolMenuEntry_&,bool,bool)_::_89_::<lambda_2>_>
          *param_1)

{
  UObjectBase *this_00;
  
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateToolBarBuilderWithEntry'::`89'::<lambda_2>_>
        ::_vftable_;
  *(UToolMenus **)((longlong)this + 0x18) = (param_1->Functor).__this;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  this_00 = (UObjectBase *)(param_1->Functor).StrongMenuData.Object;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    *(UObjectBase **)((longlong)this + 0x20) = this_00;
  }
  *(FName *)((longlong)this + 0x28) = (param_1->Functor).BlockName;
  return this;
}

// TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertWidgetChoice'::__l13::<lambda_3>_> @ 142c368b0

TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_private:_class_TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>___cdecl_UToolMenus::ConvertWidgetChoice(FNewToolMenuChoice_const_&,FToolMenuContext_const_&)const_::_13_::<lambda_3>_>
* __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertWidgetChoice'::__l13::<lambda_3>_>
::
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_UToolMenus::ConvertWidgetChoice_::__l13::<lambda_3>_>
          (void *this,
          TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_private:_class_TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>___cdecl_UToolMenus::ConvertWidgetChoice(FNewToolMenuChoice_const_&,FToolMenuContext_const_&)const_::_13_::<lambda_3>_>
          *param_1)

{
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertWidgetChoice'::`13'::<lambda_3>_>
        ::_vftable_;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
             ((longlong)this + 0x18),&(param_1->Functor).ToCall);
  FToolMenuContext::FToolMenuContext
            ((FToolMenuContext *)((longlong)this + 0x30),&(param_1->Functor).Context);
  return this;
}

// TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::__l11::<lambda_3>_> @ 142c36930

TBaseFunctorDelegateInstance<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,_private:_static_struct_FUIAction___cdecl_UToolMenus::ConvertUIAction(FToolDynamicUIAction_const_&,FToolMenuContext_const_&)_::_11_::<lambda_3>_>
* __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::__l11::<lambda_3>_>
::
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,_UToolMenus::ConvertUIAction_::__l11::<lambda_3>_>
          (void *this,
          TBaseFunctorDelegateInstance<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,_private:_static_struct_FUIAction___cdecl_UToolMenus::ConvertUIAction(FToolDynamicUIAction_const_&,FToolMenuContext_const_&)_::_11_::<lambda_3>_>
          *param_1)

{
  FReadAccessScope local_28;
  
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::`11'::<lambda_3>_>
        ::_vftable_;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(param_1 + 0x18),&local_28);
  *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FToolMenuContext::FToolMenuContext
            ((FToolMenuContext *)((longlong)this + 0x30),(FToolMenuContext *)(param_1 + 0x30));
  return this;
}

// TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::__l5::<lambda_1>_> @ 142c369c0

TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_private:_static_struct_FUIAction___cdecl_UToolMenus::ConvertUIAction(FToolDynamicUIAction_const_&,FToolMenuContext_const_&)_::_5_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::__l5::<lambda_1>_>
::
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_UToolMenus::ConvertUIAction_::__l5::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_private:_static_struct_FUIAction___cdecl_UToolMenus::ConvertUIAction(FToolDynamicUIAction_const_&,FToolMenuContext_const_&)_::_5_::<lambda_1>_>
          *param_1)

{
  FReadAccessScope local_28;
  
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::`5'::<lambda_1>_>
        ::_vftable_;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(param_1 + 0x18),&local_28);
  *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FToolMenuContext::FToolMenuContext
            ((FToolMenuContext *)((longlong)this + 0x30),(FToolMenuContext *)(param_1 + 0x30));
  return this;
}

// TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::__l8::<lambda_2>_> @ 142c36a50

TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,_private:_static_struct_FUIAction___cdecl_UToolMenus::ConvertUIAction(FToolDynamicUIAction_const_&,FToolMenuContext_const_&)_::_8_::<lambda_2>_>
* __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::__l8::<lambda_2>_>
::
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,_UToolMenus::ConvertUIAction_::__l8::<lambda_2>_>
          (void *this,
          TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,_private:_static_struct_FUIAction___cdecl_UToolMenus::ConvertUIAction(FToolDynamicUIAction_const_&,FToolMenuContext_const_&)_::_8_::<lambda_2>_>
          *param_1)

{
  FReadAccessScope local_28;
  
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::`8'::<lambda_2>_>
        ::_vftable_;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(param_1 + 0x18),&local_28);
  *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FToolMenuContext::FToolMenuContext
            ((FToolMenuContext *)((longlong)this + 0x30),(FToolMenuContext *)(param_1 + 0x30));
  return this;
}

// TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::__l14::<lambda_4>_> @ 142c36ae0

TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,_private:_static_struct_FUIAction___cdecl_UToolMenus::ConvertUIAction(FToolDynamicUIAction_const_&,FToolMenuContext_const_&)_::_14_::<lambda_4>_>
* __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::__l14::<lambda_4>_>
::
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,_UToolMenus::ConvertUIAction_::__l14::<lambda_4>_>
          (void *this,
          TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,_private:_static_struct_FUIAction___cdecl_UToolMenus::ConvertUIAction(FToolDynamicUIAction_const_&,FToolMenuContext_const_&)_::_14_::<lambda_4>_>
          *param_1)

{
  FReadAccessScope local_28;
  
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::`14'::<lambda_4>_>
        ::_vftable_;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(param_1 + 0x18),&local_28);
  *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FToolMenuContext::FToolMenuContext
            ((FToolMenuContext *)((longlong)this + 0x30),(FToolMenuContext *)(param_1 + 0x30));
  return this;
}

// ~TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0> @ 142c3b820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0> @ 142c3b840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>,0,0> @ 142c3b860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0> @ 142c3b880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<__UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0> @ 142c3b8a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<__UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define_::__l2::<lambda_1>::operator()_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>,0,0> @ 142c3b8c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,0,0> @ 142c3b8e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<__UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,0,0> @ 142c3b900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,0,0>
::
~TFunction_OwnedObject<__UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_5>,0,0> @ 142c3b920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_5>,0,0>
::
~TFunction_OwnedObject<__UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_5>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  return;
}

// operator() @ 142c3efe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  longlong *plVar4;
  FAutomationTestBase *this_00;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  UToolMenu *pUVar8;
  FMenuSection *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  ForAnyElementType FVar12;
  undefined1 auStackY_128 [32];
  FToolMenuAutomationTestAdapter local_e8;
  TArray<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSizedDefaultAllocator<32>_> local_d8;
  FString local_c8;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FMenu local_98;
  TSharedRef<UE::ToolMenus::FMenuSection,1> local_60;
  FMenuSection *local_50;
  TReferenceControllerBase<1> *pTStack_48;
  FMenuSection *local_40;
  TReferenceControllerBase<1> *pTStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar7 = ::FName::FName(&local_b8,"FirstSection");
  FVar3 = *pFVar7;
  local_60.SharedReferenceCount.ReferenceController = ::operator_new(0x48);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (local_60.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_60.Object = ___xmm_00000000000000000000000000000010;
    local_60.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
    pTVar11 = pTVar10;
LAB_142c3f0ca:
    if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9->_padding_ = (longlong)pFVar9;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = *(longlong **)&pFVar9->_padding_;
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
        *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    (local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_60.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_60.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    local_60.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
    local_60.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    local_60.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    local_60.SharedReferenceCount.ReferenceController[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(local_60.SharedReferenceCount.ReferenceController + 1);
    local_60.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    local_60.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&local_60.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
    *(undefined4 *)((longlong)&local_60.SharedReferenceCount.ReferenceController[3]._padding_ + 4) =
         0xffffffff;
    local_60.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    local_60.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    local_60.SharedReferenceCount.ReferenceController[4]._padding_ = 0;
    pTVar11 = local_60.SharedReferenceCount.ReferenceController;
    local_60.Object = pFVar9;
    if (pFVar9 != (FMenuSection *)0x0) goto LAB_142c3f0ca;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = ::FName::FName(&local_b0,"MiddleSection");
  FVar3 = *pFVar7;
  pTStack_48 = ::operator_new(0x48);
  if (pTStack_48 == (TReferenceControllerBase<1> *)0x0) {
    local_50 = ___xmm_00000000000000000000000000000010;
    pTStack_48 = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
    pTVar11 = pTVar10;
LAB_142c3f1cb:
    if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9->_padding_ = (longlong)pFVar9;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = *(longlong **)&pFVar9->_padding_;
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
        *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    pTStack_48->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_48->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_48->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTStack_48[1]._padding_ = 0;
    pTStack_48[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_48[1].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_48[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(pTStack_48 + 1);
    pTStack_48[2].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_48[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_48[3]._padding_ = 0;
    *(undefined4 *)((longlong)&pTStack_48[3]._padding_ + 4) = 0xffffffff;
    pTStack_48[3].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_48[3].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_48[4]._padding_ = 0;
    pTVar11 = pTStack_48;
    local_50 = pFVar9;
    if (pFVar9 != (FMenuSection *)0x0) goto LAB_142c3f1cb;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = ::FName::FName(&local_a8,"LastSection");
  FVar3 = *pFVar7;
  pTStack_38 = ::operator_new(0x48);
  if (pTStack_38 == (TReferenceControllerBase<1> *)0x0) {
    local_40 = ___xmm_00000000000000000000000000000010;
    pTStack_38 = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
  }
  else {
    pTStack_38->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_38->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_38->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTStack_38[1]._padding_ = 0;
    pTStack_38[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_38[1].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_38[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(pTStack_38 + 1);
    pTStack_38[2].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_38[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_38[3]._padding_ = 0;
    *(undefined4 *)((longlong)&pTStack_38[3]._padding_ + 4) = 0xffffffff;
    pTStack_38[3].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_38[3].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_38[4]._padding_ = 0;
    pTVar10 = pTStack_38;
    local_40 = pFVar9;
    if (pFVar9 == (FMenuSection *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_142c3f32a;
    }
  }
  if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pFVar9->_padding_;
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
      *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_142c3f32a:
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            (local_d8.AllocatorInstance.Data,&local_60,3);
  pFVar7 = ::FName::FName(&local_a0,"TestMenu");
  UE::ToolMenus::FMenu::FMenu(&local_98,*pFVar7,&local_d8);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_d8.AllocatorInstance.Data,
             local_d8.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_d8.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  pUVar8 = UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::GenerateTestMenu
                     (*(FToolMenusTestUtiltiesSpec **)this);
  this_00 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_c8,"Actual menu sections to (exactly) match the expected sections");
  local_e8.Parameters.SectionMatchParameters.bActualHasAllExpectedItems = true;
  local_e8.Parameters.SectionMatchParameters.bActualHasExpectedOrder = true;
  local_e8.Parameters.SectionMatchParameters.bExpectedHasAllActualItems = false;
  local_e8.Parameters.SectionMatchParameters.bMatchChildrenIfAnyExpected = true;
  local_e8.Parameters.EntryMatchParameters.bActualHasAllExpectedItems = true;
  local_e8.Parameters.EntryMatchParameters.bActualHasExpectedOrder = true;
  local_e8.Parameters.EntryMatchParameters.bExpectedHasAllActualItems = false;
  local_e8.Parameters.EntryMatchParameters.bMatchChildrenIfAnyExpected = true;
  local_e8.TestInstance = this_00;
  bVar6 = UE::ToolMenus::FToolMenuAutomationTestAdapter::Matches(&local_e8,&local_98,pUVar8);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar12.Data = local_c8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(this_00,(wchar_t *)FVar12.Data,bVar6);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_98.Sections.AllocatorInstance.Data,
             local_98.Sections.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_98.Sections.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(local_98.Sections.AllocatorInstance.Data);
  }
  if ((longlong *)local_98._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_98._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_98._padding_ + 8))(local_98._padding_,1);
    }
  }
  return;
}

// operator() @ 142c3f4c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  longlong *plVar4;
  FAutomationTestBase *this_00;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  UToolMenu *pUVar8;
  FMenuSection *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  ForAnyElementType FVar12;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FToolMenuAutomationTestAdapter local_b8;
  TSharedRef<UE::ToolMenus::FMenuSection,1> local_a8;
  FMenuSection *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FMenu local_88;
  FString local_50;
  
  pFVar7 = ::FName::FName(&local_res8,"MiddleSection");
  FVar3 = *pFVar7;
  local_a8.SharedReferenceCount.ReferenceController = ::operator_new(0x48);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (local_a8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_a8.Object = ___xmm_00000000000000000000000000000010;
    local_a8.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
    pTVar11 = pTVar10;
LAB_142c3f594:
    if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9->_padding_ = (longlong)pFVar9;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = *(longlong **)&pFVar9->_padding_;
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
        *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_a8.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_a8.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    local_a8.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
    local_a8.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    local_a8.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    local_a8.SharedReferenceCount.ReferenceController[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(local_a8.SharedReferenceCount.ReferenceController + 1);
    local_a8.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    local_a8.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&local_a8.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
    *(undefined4 *)((longlong)&local_a8.SharedReferenceCount.ReferenceController[3]._padding_ + 4) =
         0xffffffff;
    local_a8.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    local_a8.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    local_a8.SharedReferenceCount.ReferenceController[4]._padding_ = 0;
    pTVar11 = local_a8.SharedReferenceCount.ReferenceController;
    local_a8.Object = pFVar9;
    if (pFVar9 != (FMenuSection *)0x0) goto LAB_142c3f594;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = ::FName::FName(&local_res10,"SectionThatDoesntExist");
  FVar3 = *pFVar7;
  pTStack_90 = ::operator_new(0x48);
  if (pTStack_90 == (TReferenceControllerBase<1> *)0x0) {
    local_98 = ___xmm_00000000000000000000000000000010;
    pTStack_90 = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
  }
  else {
    pTStack_90->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_90->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_90->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTStack_90[1]._padding_ = 0;
    pTStack_90[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[1].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_90[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(pTStack_90 + 1);
    pTStack_90[2].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_90[3]._padding_ = 0;
    *(undefined4 *)((longlong)&pTStack_90[3]._padding_ + 4) = 0xffffffff;
    pTStack_90[3].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[3].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_90[4]._padding_ = 0;
    pTVar10 = pTStack_90;
    local_98 = pFVar9;
    if (pFVar9 == (FMenuSection *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_142c3f6f3;
    }
  }
  if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pFVar9->_padding_;
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
      *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_142c3f6f3:
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_c8,2,&local_bc);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            (local_c8.Data,&local_a8,2);
  pFVar7 = ::FName::FName(&local_res18,"TestMenu");
  iVar2 = local_c0;
  FVar12.Data = local_c8.Data;
  local_88._padding_ = *(longlong *)pFVar7;
  local_88._padding_ = (longlong)&___7FMenu_ToolMenus_UE__6B_;
  local_88._padding_._0_1_ = 3;
  local_88.Sections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Sections.ArrayNum = local_c0;
  local_88._padding_ = 0;
  local_88._padding_ = 0;
  if (local_c0 == 0) {
    local_88.Sections.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_c0,0,&local_88.Sections.AllocatorInstance,local_c0,
               &local_88.Sections.ArrayMax);
    ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
              (local_88.Sections.AllocatorInstance.Data,
               (TSharedRef<UE::ToolMenus::FMenuSection,1> *)FVar12.Data,iVar2);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_c8.Data,local_c0);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_c8.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  pUVar8 = UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::GenerateTestMenu
                     (*(FToolMenusTestUtiltiesSpec **)this);
  this_00 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_50,"Actual menu sections to (partially) match the expected section(s)");
  local_b8.Parameters.SectionMatchParameters.bActualHasAllExpectedItems = false;
  local_b8.Parameters.SectionMatchParameters.bActualHasExpectedOrder = true;
  local_b8.Parameters.SectionMatchParameters.bExpectedHasAllActualItems = false;
  local_b8.Parameters.SectionMatchParameters.bMatchChildrenIfAnyExpected = true;
  local_b8.Parameters.EntryMatchParameters.bActualHasAllExpectedItems = false;
  local_b8.Parameters.EntryMatchParameters.bActualHasExpectedOrder = true;
  local_b8.Parameters.EntryMatchParameters.bExpectedHasAllActualItems = false;
  local_b8.Parameters.EntryMatchParameters.bMatchChildrenIfAnyExpected = true;
  local_b8.TestInstance = this_00;
  bVar6 = UE::ToolMenus::FToolMenuAutomationTestAdapter::Matches(&local_b8,&local_88,pUVar8);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_50.Data.ArrayNum != 0) {
    FVar12.Data = local_50.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(this_00,(wchar_t *)FVar12.Data,bVar6);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_88.Sections.AllocatorInstance.Data,
             local_88.Sections.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_88.Sections.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(local_88.Sections.AllocatorInstance.Data);
  }
  if ((longlong *)local_88._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_88._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_88._padding_ + 8))(local_88._padding_,1);
    }
  }
  return;
}

// operator() @ 142c40c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::
<lambda_2>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  longlong *plVar4;
  FAutomationTestBase *this_00;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  UToolMenu *pUVar8;
  FMenuSection *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  ForAnyElementType FVar11;
  FName local_res8;
  FName local_res10;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  FToolMenuAutomationTestAdapter local_98;
  TSharedRef<UE::ToolMenus::FMenuSection,1> local_88;
  FString local_78;
  FMenu local_68;
  
  pFVar7 = ::FName::FName(&local_res8,"MiddleSection");
  FVar3 = *pFVar7;
  local_88.SharedReferenceCount.ReferenceController = ::operator_new(0x48);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (local_88.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_88.Object = ___xmm_00000000000000000000000000000010;
    local_88.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
  }
  else {
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_88.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_88.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    local_88.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
    local_88.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    local_88.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    local_88.SharedReferenceCount.ReferenceController[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(local_88.SharedReferenceCount.ReferenceController + 1);
    local_88.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    local_88.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&local_88.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
    *(undefined4 *)((longlong)&local_88.SharedReferenceCount.ReferenceController[3]._padding_ + 4) =
         0xffffffff;
    local_88.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    local_88.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    local_88.SharedReferenceCount.ReferenceController[4]._padding_ = 0;
    pTVar10 = local_88.SharedReferenceCount.ReferenceController;
    local_88.Object = pFVar9;
    if (pFVar9 == (FMenuSection *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_142c40d64;
    }
  }
  if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pFVar9->_padding_;
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
      *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_142c40d64:
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_a8,1,&local_9c);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            (local_a8.Data,&local_88,1);
  pFVar7 = ::FName::FName(&local_res10,"TestMenu");
  iVar2 = local_a0;
  FVar11.Data = local_a8.Data;
  local_68._padding_ = *(longlong *)pFVar7;
  local_68._padding_ = (longlong)&___7FMenu_ToolMenus_UE__6B_;
  local_68._padding_._0_1_ = 3;
  local_68.Sections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Sections.ArrayNum = local_a0;
  local_68._padding_ = 0;
  local_68._padding_ = 0;
  if (local_a0 == 0) {
    local_68.Sections.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_a0,0,&local_68.Sections.AllocatorInstance,local_a0,
               &local_68.Sections.ArrayMax);
    ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
              (local_68.Sections.AllocatorInstance.Data,
               (TSharedRef<UE::ToolMenus::FMenuSection,1> *)FVar11.Data,iVar2);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_a8.Data,local_a0);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_a8.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  pUVar8 = UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::GenerateTestMenu
                     (*(FToolMenusTestUtiltiesSpec **)this);
  this_00 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_78,"Actual menu sections to (partially) match the expected section(s)");
  local_98.Parameters.SectionMatchParameters.bActualHasAllExpectedItems = true;
  local_98.Parameters.SectionMatchParameters.bActualHasExpectedOrder = true;
  local_98.Parameters.SectionMatchParameters.bExpectedHasAllActualItems = false;
  local_98.Parameters.SectionMatchParameters.bMatchChildrenIfAnyExpected = true;
  local_98.Parameters.EntryMatchParameters.bActualHasAllExpectedItems = false;
  local_98.Parameters.EntryMatchParameters.bActualHasExpectedOrder = true;
  local_98.Parameters.EntryMatchParameters.bExpectedHasAllActualItems = false;
  local_98.Parameters.EntryMatchParameters.bMatchChildrenIfAnyExpected = true;
  local_98.TestInstance = this_00;
  bVar6 = UE::ToolMenus::FToolMenuAutomationTestAdapter::Matches(&local_98,&local_68,pUVar8);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar11.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(this_00,(wchar_t *)FVar11.Data,bVar6);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_68.Sections.AllocatorInstance.Data,
             local_68.Sections.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_68.Sections.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(local_68.Sections.AllocatorInstance.Data);
  }
  if ((longlong *)local_68._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_68._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_68._padding_ + 8))(local_68._padding_,1);
    }
  }
  return;
}

// operator() @ 142c40f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>::operator()'::__l2::
<lambda_2>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  FName FVar6;
  FAutomationTestBase *this_00;
  code *pcVar7;
  FNameEntryId FVar8;
  uint uVar9;
  undefined8 *puVar10;
  bool bVar11;
  FName *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  TSharedRef<UE::ToolMenus::FMenuEntry,1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  UToolMenu *pUVar19;
  ForAnyElementType FVar20;
  FMenuEntryBase *pFVar21;
  TReferenceControllerBase<1> *pTVar22;
  undefined1 auStackY_1c8 [32];
  undefined8 local_188;
  FToolMenuAutomationTestAdapter local_180;
  TArray<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSizedDefaultAllocator<32>_> local_170;
  TArray<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSizedDefaultAllocator<32>_> local_160;
  undefined8 local_150;
  undefined8 *local_148;
  FString local_140;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  TSharedRef<UE::ToolMenus::FMenuEntry,1> local_f8;
  FMenu local_e8;
  TSharedRef<UE::ToolMenus::FMenuEntryBase,1> local_a8;
  TReferenceControllerBase<1> *local_98;
  TReferenceControllerBase<1> *local_90;
  TReferenceControllerBase<1> *local_88;
  TReferenceControllerBase<1> *local_80;
  FMenuEntry *local_78;
  TReferenceControllerBase<1> *local_70;
  TSharedRef<UE::ToolMenus::FMenuSection,1> local_68;
  TSharedRef<UE::ToolMenus::FMenuSection,1> local_58;
  TSharedRef<UE::ToolMenus::FMenuSection,1> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_148 = this;
  pFVar12 = ::FName::FName(&local_130,"FirstEntry");
  FVar8.Value = (pFVar12->ComparisonIndex).Value;
  uVar9 = pFVar12->Number;
  pTVar13 = ::operator_new(0x50);
  pTVar22 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    pFVar21 = (FMenuEntryBase *)&DAT_00000010;
    pTVar13 = pTVar22;
LAB_142c41022:
    if (((pFVar21[1]._padding_ == 0) ||
        (lVar3 = *(longlong *)&pFVar21[1].Name.ComparisonIndex, lVar3 == 0)) ||
       (*(int *)(lVar3 + 8) < 1)) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar21[1]._padding_ = (longlong)pFVar21;
      if (pTVar13 != *(TReferenceControllerBase<1> **)&pFVar21[1].Name.ComparisonIndex) {
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = *(longlong **)&pFVar21[1].Name.ComparisonIndex;
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
        *(TReferenceControllerBase<1> **)&pFVar21[1].Name.ComparisonIndex = pTVar13;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    }
  }
  else {
    pTVar13->SharedReferenceCount = (atomic<int>)0x1;
    pTVar13->WeakReferenceCount = (atomic<int>)0x1;
    pTVar13->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuEntry_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTVar13[1].SharedReferenceCount = (atomic<int>)FVar8.Value;
    pTVar13[1].WeakReferenceCount = (atomic<int>)uVar9;
    pFVar21 = (FMenuEntryBase *)(pTVar13 + 1);
    *(undefined1 *)&pTVar13[2]._padding_ = 3;
    pTVar13[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[3]._padding_ = 0;
    pTVar13[1]._padding_ = (longlong)&___7FMenuEntry_ToolMenus_UE__6B_;
    pTVar13[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar13[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar13[4]._padding_ + 4) = 0xffffffff;
    pTVar13[4].SharedReferenceCount.field_0x1 = 0;
    if (pFVar21 != (FMenuEntryBase *)0x0) goto LAB_142c41022;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8.Object = pFVar21;
  local_a8.SharedReferenceCount.ReferenceController = pTVar13;
  pFVar12 = ::FName::FName(&local_128,"MiddleEntry");
  FVar8.Value = (pFVar12->ComparisonIndex).Value;
  uVar9 = pFVar12->Number;
  pTVar14 = ::operator_new(0x50);
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
    pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar14 = pTVar22;
LAB_142c41139:
    lVar3._0_4_ = pTVar15[1].SharedReferenceCount;
    lVar3._4_4_ = pTVar15[1].WeakReferenceCount;
    if (((lVar3 == 0) || (pTVar15[2]._padding_ == 0)) || (*(int *)(pTVar15[2]._padding_ + 8) < 1)) {
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(TReferenceControllerBase<1> **)&pTVar15[1].SharedReferenceCount = pTVar15;
      if (pTVar14 != (TReferenceControllerBase<1> *)pTVar15[2]._padding_) {
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = (longlong *)pTVar15[2]._padding_;
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
        pTVar15[2]._padding_ = (longlong)pTVar14;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
  }
  else {
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuEntry_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14[1].SharedReferenceCount = (atomic<int>)FVar8.Value;
    pTVar14[1].WeakReferenceCount = (atomic<int>)uVar9;
    pTVar15 = pTVar14 + 1;
    pTVar14[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar14[3]._padding_ = 0;
    *(undefined1 *)&pTVar14[2]._padding_ = 3;
    pTVar14[1]._padding_ = (longlong)&___7FMenuEntry_ToolMenus_UE__6B_;
    pTVar14[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar14[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar14[4]._padding_ + 4) = 0xffffffff;
    pTVar14[4].SharedReferenceCount.field_0x1 = 0;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) goto LAB_142c41139;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98 = pTVar15;
  local_90 = pTVar14;
  pTVar15 = ::operator_new(0x50);
  if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
    pTVar18 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar15 = pTVar22;
  }
  else {
    pTVar15->SharedReferenceCount = (atomic<int>)0x1;
    pTVar18 = pTVar15 + 1;
    pTVar15->WeakReferenceCount = (atomic<int>)0x1;
    pTVar15->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuEntry_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    local_150 = 0;
    pTVar15[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[1]._padding_ = (longlong)&___7FMenuEntry_ToolMenus_UE__6B_;
    *(undefined1 *)&pTVar15[2]._padding_ = 3;
    pTVar15[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[3]._padding_ = 0;
    pTVar15[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar15[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar15[4]._padding_ + 4) = 0xffffffff;
    pTVar15[4].SharedReferenceCount.field_0x1 = 0;
    if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      goto LAB_142c412b0;
    }
  }
  lVar4._0_4_ = pTVar18[1].SharedReferenceCount;
  lVar4._4_4_ = pTVar18[1].WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar18[2]._padding_ == 0)) || (*(int *)(pTVar18[2]._padding_ + 8) < 1)) {
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar18[1].SharedReferenceCount = pTVar18;
    if (pTVar15 != (TReferenceControllerBase<1> *)pTVar18[2]._padding_) {
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar18[2]._padding_;
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
      pTVar18[2]._padding_ = (longlong)pTVar15;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
LAB_142c412b0:
  if ((atomic<int> *)&local_188 != &pTVar18[3].SharedReferenceCount) {
    *(undefined2 *)&pTVar18[3].SharedReferenceCount = 0x105;
  }
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = pTVar18;
  local_80 = pTVar15;
  pFVar12 = ::FName::FName(&local_120,"LastEntry");
  pTVar16 = UE::ToolMenus::Entry(&local_f8,*pFVar12);
  local_78 = pTVar16->Object;
  local_70 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_160.AllocatorInstance,4,&local_160.ArrayMax);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            (local_160.AllocatorInstance.Data,&local_a8,4);
  pFVar12 = ::FName::FName(&local_118,"FirstSection");
  FVar6 = *pFVar12;
  pTVar17 = ::operator_new(0x48);
  pTVar18 = pTVar22;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    pTVar17->SharedReferenceCount = (atomic<int>)0x1;
    pTVar17->WeakReferenceCount = (atomic<int>)0x1;
    pTVar17->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    UE::ToolMenus::FMenuSection::FMenuSection((FMenuSection *)(pTVar17 + 1),FVar6,&local_160);
    pTVar18 = pTVar17;
  }
  TSharedRef<UE::ToolMenus::FMenuSection,1>::TSharedRef<UE::ToolMenus::FMenuSection,1>
            (&local_68,(FMenuSection *)(pTVar18 + 1),pTVar18);
  pFVar12 = ::FName::FName(&local_110,"MiddleSection");
  FVar6 = *pFVar12;
  pTVar17 = ::operator_new(0x48);
  pTVar18 = pTVar22;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    pTVar17->SharedReferenceCount = (atomic<int>)0x1;
    pTVar17->WeakReferenceCount = (atomic<int>)0x1;
    pTVar17->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTVar17[1]._padding_ = 0;
    pTVar17[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[2]._padding_ = (longlong)FVar6;
    pTVar17[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar17[3]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar17[3]._padding_ + 4) = 0xffffffff;
    *(undefined8 *)&pTVar17[3].SharedReferenceCount.field_0x0 = 0;
    TArray<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
              ((TArray<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSizedDefaultAllocator<32>_> *)
               &pTVar17[3].SharedReferenceCount,(TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0
               ,0);
    pTVar18 = pTVar17;
  }
  TSharedRef<UE::ToolMenus::FMenuSection,1>::TSharedRef<UE::ToolMenus::FMenuSection,1>
            (&local_58,(FMenuSection *)(pTVar18 + 1),pTVar18);
  pFVar12 = ::FName::FName(&local_108,"LastSection");
  FVar6 = *pFVar12;
  pTVar18 = ::operator_new(0x48);
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    pTVar18->SharedReferenceCount = (atomic<int>)0x1;
    pTVar18->WeakReferenceCount = (atomic<int>)0x1;
    pTVar18->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTVar18[1]._padding_ = 0;
    pTVar18[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar18[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar18[2]._padding_ = (longlong)FVar6;
    pTVar18[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar18[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar18[3]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar18[3]._padding_ + 4) = 0xffffffff;
    *(undefined8 *)&pTVar18[3].SharedReferenceCount.field_0x0 = 0;
    TArray<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
              ((TArray<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSizedDefaultAllocator<32>_> *)
               &pTVar18[3].SharedReferenceCount,(TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0
               ,0);
    pTVar22 = pTVar18;
  }
  TSharedRef<UE::ToolMenus::FMenuSection,1>::TSharedRef<UE::ToolMenus::FMenuSection,1>
            (&local_48,(FMenuSection *)(pTVar22 + 1),pTVar22);
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_170.AllocatorInstance,3,&local_170.ArrayMax);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            (local_170.AllocatorInstance.Data,&local_68,3);
  pFVar12 = ::FName::FName(&local_100,"TestMenu");
  UE::ToolMenus::FMenu::FMenu(&local_e8,*pFVar12,&local_170);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_170.AllocatorInstance.Data,
             local_170.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_170.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)local_160.AllocatorInstance.Data,
             local_160.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)local_160.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  puVar10 = local_148;
  pUVar19 = UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::GenerateTestMenu
                      ((FToolMenusTestUtiltiesSpec *)*local_148);
  this_00 = (FAutomationTestBase *)*puVar10;
  ::FString::FString(&local_140,
                     "Actual section entries to (exactly) match the expected section entries");
  local_180.Parameters.SectionMatchParameters.bActualHasAllExpectedItems = false;
  local_180.Parameters.SectionMatchParameters.bActualHasExpectedOrder = true;
  local_180.Parameters.SectionMatchParameters.bExpectedHasAllActualItems = false;
  local_180.Parameters.SectionMatchParameters.bMatchChildrenIfAnyExpected = true;
  local_180.Parameters.EntryMatchParameters.bActualHasAllExpectedItems = true;
  local_180.Parameters.EntryMatchParameters.bActualHasExpectedOrder = true;
  local_180.Parameters.EntryMatchParameters.bExpectedHasAllActualItems = false;
  local_180.Parameters.EntryMatchParameters.bMatchChildrenIfAnyExpected = true;
  local_180.TestInstance = this_00;
  bVar11 = UE::ToolMenus::FToolMenuAutomationTestAdapter::Matches(&local_180,&local_e8,pUVar19);
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_140.Data.ArrayNum != 0) {
    FVar20.Data = local_140.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(this_00,(wchar_t *)FVar20.Data,bVar11);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_e8.Sections.AllocatorInstance.Data,
             local_e8.Sections.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_e8.Sections.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(local_e8.Sections.AllocatorInstance.Data);
  }
  if ((longlong *)local_e8._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_e8._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_e8._padding_ + 8))(local_e8._padding_,1);
    }
  }
  return;
}

// operator() @ 142c42060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::
<lambda_3>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  longlong *plVar4;
  FAutomationTestBase *this_00;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  UToolMenu *pUVar8;
  FMenuSection *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  ForAnyElementType FVar12;
  undefined1 auStackY_128 [32];
  FToolMenuAutomationTestAdapter local_e8;
  TArray<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSizedDefaultAllocator<32>_> local_d8;
  FString local_c8;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FMenu local_98;
  TSharedRef<UE::ToolMenus::FMenuSection,1> local_60;
  FMenuSection *local_50;
  TReferenceControllerBase<1> *pTStack_48;
  FMenuSection *local_40;
  TReferenceControllerBase<1> *pTStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar7 = ::FName::FName(&local_b8,"FirstSection");
  FVar3 = *pFVar7;
  local_60.SharedReferenceCount.ReferenceController = ::operator_new(0x48);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (local_60.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_60.Object = ___xmm_00000000000000000000000000000010;
    local_60.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
    pTVar11 = pTVar10;
LAB_142c4214a:
    if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9->_padding_ = (longlong)pFVar9;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = *(longlong **)&pFVar9->_padding_;
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
        *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    (local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_60.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_60.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    local_60.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
    local_60.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    local_60.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    local_60.SharedReferenceCount.ReferenceController[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(local_60.SharedReferenceCount.ReferenceController + 1);
    local_60.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    local_60.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&local_60.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
    *(undefined4 *)((longlong)&local_60.SharedReferenceCount.ReferenceController[3]._padding_ + 4) =
         0xffffffff;
    local_60.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    local_60.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    local_60.SharedReferenceCount.ReferenceController[4]._padding_ = 0;
    pTVar11 = local_60.SharedReferenceCount.ReferenceController;
    local_60.Object = pFVar9;
    if (pFVar9 != (FMenuSection *)0x0) goto LAB_142c4214a;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = ::FName::FName(&local_b0,"LastSection");
  FVar3 = *pFVar7;
  pTStack_48 = ::operator_new(0x48);
  if (pTStack_48 == (TReferenceControllerBase<1> *)0x0) {
    local_50 = ___xmm_00000000000000000000000000000010;
    pTStack_48 = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
    pTVar11 = pTVar10;
LAB_142c4224b:
    if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9->_padding_ = (longlong)pFVar9;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = *(longlong **)&pFVar9->_padding_;
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
        *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    pTStack_48->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_48->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_48->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTStack_48[1]._padding_ = 0;
    pTStack_48[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_48[1].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_48[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(pTStack_48 + 1);
    pTStack_48[2].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_48[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_48[3]._padding_ = 0;
    *(undefined4 *)((longlong)&pTStack_48[3]._padding_ + 4) = 0xffffffff;
    pTStack_48[3].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_48[3].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_48[4]._padding_ = 0;
    pTVar11 = pTStack_48;
    local_50 = pFVar9;
    if (pFVar9 != (FMenuSection *)0x0) goto LAB_142c4224b;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = ::FName::FName(&local_a8,"MiddleSection");
  FVar3 = *pFVar7;
  pTStack_38 = ::operator_new(0x48);
  if (pTStack_38 == (TReferenceControllerBase<1> *)0x0) {
    local_40 = ___xmm_00000000000000000000000000000010;
    pTStack_38 = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
  }
  else {
    pTStack_38->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_38->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_38->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTStack_38[1]._padding_ = 0;
    pTStack_38[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_38[1].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_38[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(pTStack_38 + 1);
    pTStack_38[2].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_38[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_38[3]._padding_ = 0;
    *(undefined4 *)((longlong)&pTStack_38[3]._padding_ + 4) = 0xffffffff;
    pTStack_38[3].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_38[3].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_38[4]._padding_ = 0;
    pTVar10 = pTStack_38;
    local_40 = pFVar9;
    if (pFVar9 == (FMenuSection *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_142c423aa;
    }
  }
  if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pFVar9->_padding_;
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
      *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_142c423aa:
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            (local_d8.AllocatorInstance.Data,&local_60,3);
  pFVar7 = ::FName::FName(&local_a0,"TestMenu");
  UE::ToolMenus::FMenu::FMenu(&local_98,*pFVar7,&local_d8);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_d8.AllocatorInstance.Data,
             local_d8.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_d8.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  pUVar8 = UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::GenerateTestMenu
                     (*(FToolMenusTestUtiltiesSpec **)this);
  this_00 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_c8,"Menu sections shouldn\'t match wrongly ordered sections");
  local_e8.Parameters.SectionMatchParameters.bActualHasAllExpectedItems = true;
  local_e8.Parameters.SectionMatchParameters.bActualHasExpectedOrder = true;
  local_e8.Parameters.SectionMatchParameters.bExpectedHasAllActualItems = false;
  local_e8.Parameters.SectionMatchParameters.bMatchChildrenIfAnyExpected = true;
  local_e8.Parameters.EntryMatchParameters.bActualHasAllExpectedItems = false;
  local_e8.Parameters.EntryMatchParameters.bActualHasExpectedOrder = true;
  local_e8.Parameters.EntryMatchParameters.bExpectedHasAllActualItems = false;
  local_e8.Parameters.EntryMatchParameters.bMatchChildrenIfAnyExpected = true;
  local_e8.TestInstance = this_00;
  bVar6 = UE::ToolMenus::FToolMenuAutomationTestAdapter::Matches(&local_e8,&local_98,pUVar8);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar12.Data = local_c8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(this_00,(wchar_t *)FVar12.Data,bVar6);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_98.Sections.AllocatorInstance.Data,
             local_98.Sections.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_98.Sections.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(local_98.Sections.AllocatorInstance.Data);
  }
  if ((longlong *)local_98._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_98._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_98._padding_ + 8))(local_98._padding_,1);
    }
  }
  return;
}

// operator() @ 142c42850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::
<lambda_4>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  FName FVar4;
  longlong *plVar5;
  FAutomationTestBase *this_00;
  code *pcVar6;
  FNameEntryId FVar7;
  uint uVar8;
  bool bVar9;
  FName *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  UToolMenu *pUVar13;
  FMenuEntryBase *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  FMenuSection *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  ForAnyElementType FVar18;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  FToolMenuAutomationTestAdapter local_f8;
  TArray<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSizedDefaultAllocator<32>_> local_e8;
  TSharedRef<UE::ToolMenus::FMenuEntryBase,1> local_d8;
  TReferenceControllerBase<1> *local_c8;
  TReferenceControllerBase<1> *local_c0;
  TSharedRef<UE::ToolMenus::FMenuSection,1> local_b8;
  FString local_a8;
  FName local_98;
  FName local_90;
  FMenu local_88;
  
  pFVar10 = ::FName::FName(&local_res18,"MiddleEntry");
  FVar7.Value = (pFVar10->ComparisonIndex).Value;
  uVar8 = pFVar10->Number;
  pTVar11 = ::operator_new(0x50);
  pTVar17 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FMenuEntryBase *)&DAT_00000010;
    pTVar11 = pTVar17;
LAB_142c42927:
    if (((pFVar14[1]._padding_ == 0) ||
        (lVar3 = *(longlong *)&pFVar14[1].Name.ComparisonIndex, lVar3 == 0)) ||
       (*(int *)(lVar3 + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar14[1]._padding_ = (longlong)pFVar14;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&pFVar14[1].Name.ComparisonIndex) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = *(longlong **)&pFVar14[1].Name.ComparisonIndex;
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
        *(TReferenceControllerBase<1> **)&pFVar14[1].Name.ComparisonIndex = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuEntry_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTVar11[1].SharedReferenceCount = (atomic<int>)FVar7.Value;
    pTVar11[1].WeakReferenceCount = (atomic<int>)uVar8;
    pFVar14 = (FMenuEntryBase *)(pTVar11 + 1);
    *(undefined1 *)&pTVar11[2]._padding_ = 3;
    pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[3]._padding_ = 0;
    pTVar11[1]._padding_ = (longlong)&___7FMenuEntry_ToolMenus_UE__6B_;
    pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar11[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar11[4]._padding_ + 4) = 0xffffffff;
    pTVar11[4].SharedReferenceCount.field_0x1 = 0;
    if (pFVar14 != (FMenuEntryBase *)0x0) goto LAB_142c42927;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8.Object = pFVar14;
  local_d8.SharedReferenceCount.ReferenceController = pTVar11;
  pFVar10 = ::FName::FName(&local_res20,"LastEntry");
  FVar7.Value = (pFVar10->ComparisonIndex).Value;
  uVar8 = pFVar10->Number;
  pTVar12 = ::operator_new(0x50);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar12 = pTVar17;
LAB_142c42a3e:
    lVar3._0_4_ = pTVar15[1].SharedReferenceCount;
    lVar3._4_4_ = pTVar15[1].WeakReferenceCount;
    if (((lVar3 == 0) || (pTVar15[2]._padding_ == 0)) || (*(int *)(pTVar15[2]._padding_ + 8) < 1)) {
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(TReferenceControllerBase<1> **)&pTVar15[1].SharedReferenceCount = pTVar15;
      if (pTVar12 != (TReferenceControllerBase<1> *)pTVar15[2]._padding_) {
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = (longlong *)pTVar15[2]._padding_;
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
        pTVar15[2]._padding_ = (longlong)pTVar12;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
  }
  else {
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuEntry_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12[1].SharedReferenceCount = (atomic<int>)FVar7.Value;
    pTVar12[1].WeakReferenceCount = (atomic<int>)uVar8;
    pTVar15 = pTVar12 + 1;
    pTVar12[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[3]._padding_ = 0;
    *(undefined1 *)&pTVar12[2]._padding_ = 3;
    pTVar12[1]._padding_ = (longlong)&___7FMenuEntry_ToolMenus_UE__6B_;
    pTVar12[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar12[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar12[4]._padding_ + 4) = 0xffffffff;
    pTVar12[4].SharedReferenceCount.field_0x1 = 0;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) goto LAB_142c42a3e;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 2;
  local_c8 = pTVar15;
  local_c0 = pTVar12;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_108,2,&local_fc);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            (local_108.Data,&local_d8,2);
  pFVar10 = ::FName::FName(&local_98,"FirstSection");
  FVar4 = *pFVar10;
  local_b8.SharedReferenceCount.ReferenceController = ::operator_new(0x48);
  iVar2 = local_100;
  FVar18.Data = local_108.Data;
  if (local_b8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_b8.Object = ___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pFVar16 = (FMenuSection *)&DAT_00000010;
  }
  else {
    (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_b8.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    local_b8.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
    local_b8.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    local_b8.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    local_b8.SharedReferenceCount.ReferenceController[2]._padding_ = (longlong)FVar4;
    local_b8.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    local_b8.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    local_b8.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    local_b8.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&local_b8.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
    *(undefined4 *)((longlong)&local_b8.SharedReferenceCount.ReferenceController[3]._padding_ + 4) =
         0xffffffff;
    piVar1 = (int *)((longlong)&local_b8.SharedReferenceCount.ReferenceController[4]._padding_ + 4);
    *(int *)&local_b8.SharedReferenceCount.ReferenceController[4]._padding_ = local_100;
    if (local_100 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_100,0,
                 (ForAnyElementType *)
                 &local_b8.SharedReferenceCount.ReferenceController[3].SharedReferenceCount,
                 local_100,piVar1);
      ConstructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
                (*(void **)&local_b8.SharedReferenceCount.ReferenceController[3].
                            SharedReferenceCount,
                 (TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)FVar18.Data,iVar2);
    }
    pFVar16 = (FMenuSection *)(local_b8.SharedReferenceCount.ReferenceController + 1);
    pTVar17 = local_b8.SharedReferenceCount.ReferenceController;
    local_b8.Object = pFVar16;
    if (pFVar16 == (FMenuSection *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_142c42c67;
    }
  }
  if (((pFVar16->_padding_ == 0) || (*(longlong *)&pFVar16->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar16->_padding_ + 8) < 1)) {
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar16->_padding_ = (longlong)pFVar16;
    if (pTVar17 != *(TReferenceControllerBase<1> **)&pFVar16->_padding_) {
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)&pFVar16->_padding_;
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
      *(TReferenceControllerBase<1> **)&pFVar16->_padding_ = pTVar17;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
LAB_142c42c67:
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_e8.AllocatorInstance,1,&local_e8.ArrayMax);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            (local_e8.AllocatorInstance.Data,&local_b8,1);
  pFVar10 = ::FName::FName(&local_90,"TestMenu");
  UE::ToolMenus::FMenu::FMenu(&local_88,*pFVar10,&local_e8);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_e8.AllocatorInstance.Data,
             local_e8.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_e8.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)local_108.Data,local_100);
  if ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)local_108.Data !=
      (TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0) {
    FMemory::Free(local_108.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  pUVar13 = UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::GenerateTestMenu
                      (*(FToolMenusTestUtiltiesSpec **)this);
  this_00 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_a8,"Actual menu entries to (partially) match the expected entries(s)");
  local_f8.Parameters.SectionMatchParameters.bActualHasAllExpectedItems = false;
  local_f8.Parameters.SectionMatchParameters.bActualHasExpectedOrder = true;
  local_f8.Parameters.SectionMatchParameters.bExpectedHasAllActualItems = false;
  local_f8.Parameters.SectionMatchParameters.bMatchChildrenIfAnyExpected = true;
  local_f8.Parameters.EntryMatchParameters.bActualHasAllExpectedItems = false;
  local_f8.Parameters.EntryMatchParameters.bActualHasExpectedOrder = true;
  local_f8.Parameters.EntryMatchParameters.bExpectedHasAllActualItems = false;
  local_f8.Parameters.EntryMatchParameters.bMatchChildrenIfAnyExpected = true;
  local_f8.TestInstance = this_00;
  bVar9 = UE::ToolMenus::FToolMenuAutomationTestAdapter::Matches(&local_f8,&local_88,pUVar13);
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar18.Data = local_a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(this_00,(wchar_t *)FVar18.Data,bVar9);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_88.Sections.AllocatorInstance.Data,
             local_88.Sections.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_88.Sections.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(local_88.Sections.AllocatorInstance.Data);
  }
  if ((longlong *)local_88._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_88._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_88._padding_ + 8))(local_88._padding_,1);
    }
  }
  return;
}

// operator() @ 142c42f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::
<lambda_5>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  FName FVar4;
  longlong *plVar5;
  FAutomationTestBase *this_00;
  code *pcVar6;
  FNameEntryId FVar7;
  uint uVar8;
  bool bVar9;
  FName *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  UToolMenu *pUVar13;
  FMenuEntryBase *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  FMenuSection *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  ForAnyElementType FVar18;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  FToolMenuAutomationTestAdapter local_f8;
  TArray<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSizedDefaultAllocator<32>_> local_e8;
  TSharedRef<UE::ToolMenus::FMenuEntryBase,1> local_d8;
  TReferenceControllerBase<1> *local_c8;
  TReferenceControllerBase<1> *local_c0;
  TSharedRef<UE::ToolMenus::FMenuSection,1> local_b8;
  FString local_a8;
  FName local_98;
  FName local_90;
  FMenu local_88;
  
  pFVar10 = ::FName::FName(&local_res18,"LastEntry");
  FVar7.Value = (pFVar10->ComparisonIndex).Value;
  uVar8 = pFVar10->Number;
  pTVar11 = ::operator_new(0x50);
  pTVar17 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FMenuEntryBase *)&DAT_00000010;
    pTVar11 = pTVar17;
LAB_142c43047:
    if (((pFVar14[1]._padding_ == 0) ||
        (lVar3 = *(longlong *)&pFVar14[1].Name.ComparisonIndex, lVar3 == 0)) ||
       (*(int *)(lVar3 + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar14[1]._padding_ = (longlong)pFVar14;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&pFVar14[1].Name.ComparisonIndex) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = *(longlong **)&pFVar14[1].Name.ComparisonIndex;
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
        *(TReferenceControllerBase<1> **)&pFVar14[1].Name.ComparisonIndex = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuEntry_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTVar11[1].SharedReferenceCount = (atomic<int>)FVar7.Value;
    pTVar11[1].WeakReferenceCount = (atomic<int>)uVar8;
    pFVar14 = (FMenuEntryBase *)(pTVar11 + 1);
    *(undefined1 *)&pTVar11[2]._padding_ = 3;
    pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[3]._padding_ = 0;
    pTVar11[1]._padding_ = (longlong)&___7FMenuEntry_ToolMenus_UE__6B_;
    pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar11[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar11[4]._padding_ + 4) = 0xffffffff;
    pTVar11[4].SharedReferenceCount.field_0x1 = 0;
    if (pFVar14 != (FMenuEntryBase *)0x0) goto LAB_142c43047;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8.Object = pFVar14;
  local_d8.SharedReferenceCount.ReferenceController = pTVar11;
  pFVar10 = ::FName::FName(&local_res20,"MiddleEntry");
  FVar7.Value = (pFVar10->ComparisonIndex).Value;
  uVar8 = pFVar10->Number;
  pTVar12 = ::operator_new(0x50);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar12 = pTVar17;
LAB_142c4315e:
    lVar3._0_4_ = pTVar15[1].SharedReferenceCount;
    lVar3._4_4_ = pTVar15[1].WeakReferenceCount;
    if (((lVar3 == 0) || (pTVar15[2]._padding_ == 0)) || (*(int *)(pTVar15[2]._padding_ + 8) < 1)) {
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(TReferenceControllerBase<1> **)&pTVar15[1].SharedReferenceCount = pTVar15;
      if (pTVar12 != (TReferenceControllerBase<1> *)pTVar15[2]._padding_) {
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = (longlong *)pTVar15[2]._padding_;
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
        pTVar15[2]._padding_ = (longlong)pTVar12;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
  }
  else {
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuEntry_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12[1].SharedReferenceCount = (atomic<int>)FVar7.Value;
    pTVar12[1].WeakReferenceCount = (atomic<int>)uVar8;
    pTVar15 = pTVar12 + 1;
    pTVar12[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[3]._padding_ = 0;
    *(undefined1 *)&pTVar12[2]._padding_ = 3;
    pTVar12[1]._padding_ = (longlong)&___7FMenuEntry_ToolMenus_UE__6B_;
    pTVar12[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar12[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar12[4]._padding_ + 4) = 0xffffffff;
    pTVar12[4].SharedReferenceCount.field_0x1 = 0;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) goto LAB_142c4315e;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 2;
  local_c8 = pTVar15;
  local_c0 = pTVar12;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_108,2,&local_fc);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            (local_108.Data,&local_d8,2);
  pFVar10 = ::FName::FName(&local_98,"FirstSection");
  FVar4 = *pFVar10;
  local_b8.SharedReferenceCount.ReferenceController = ::operator_new(0x48);
  iVar2 = local_100;
  FVar18.Data = local_108.Data;
  if (local_b8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_b8.Object = ___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pFVar16 = (FMenuSection *)&DAT_00000010;
  }
  else {
    (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_b8.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    local_b8.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
    local_b8.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    local_b8.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    local_b8.SharedReferenceCount.ReferenceController[2]._padding_ = (longlong)FVar4;
    local_b8.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    local_b8.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    local_b8.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    local_b8.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&local_b8.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
    *(undefined4 *)((longlong)&local_b8.SharedReferenceCount.ReferenceController[3]._padding_ + 4) =
         0xffffffff;
    piVar1 = (int *)((longlong)&local_b8.SharedReferenceCount.ReferenceController[4]._padding_ + 4);
    *(int *)&local_b8.SharedReferenceCount.ReferenceController[4]._padding_ = local_100;
    if (local_100 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_100,0,
                 (ForAnyElementType *)
                 &local_b8.SharedReferenceCount.ReferenceController[3].SharedReferenceCount,
                 local_100,piVar1);
      ConstructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
                (*(void **)&local_b8.SharedReferenceCount.ReferenceController[3].
                            SharedReferenceCount,
                 (TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)FVar18.Data,iVar2);
    }
    pFVar16 = (FMenuSection *)(local_b8.SharedReferenceCount.ReferenceController + 1);
    pTVar17 = local_b8.SharedReferenceCount.ReferenceController;
    local_b8.Object = pFVar16;
    if (pFVar16 == (FMenuSection *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_142c43387;
    }
  }
  if (((pFVar16->_padding_ == 0) || (*(longlong *)&pFVar16->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar16->_padding_ + 8) < 1)) {
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar16->_padding_ = (longlong)pFVar16;
    if (pTVar17 != *(TReferenceControllerBase<1> **)&pFVar16->_padding_) {
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)&pFVar16->_padding_;
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
      *(TReferenceControllerBase<1> **)&pFVar16->_padding_ = pTVar17;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
LAB_142c43387:
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_e8.AllocatorInstance,1,&local_e8.ArrayMax);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            (local_e8.AllocatorInstance.Data,&local_b8,1);
  pFVar10 = ::FName::FName(&local_90,"TestMenu");
  UE::ToolMenus::FMenu::FMenu(&local_88,*pFVar10,&local_e8);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_e8.AllocatorInstance.Data,
             local_e8.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_e8.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)local_108.Data,local_100);
  if ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)local_108.Data !=
      (TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0) {
    FMemory::Free(local_108.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  pUVar13 = UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::GenerateTestMenu
                      (*(FToolMenusTestUtiltiesSpec **)this);
  this_00 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_a8,"Menu entries shouldn\'t match wrongly ordered entries");
  local_f8.Parameters.SectionMatchParameters.bActualHasAllExpectedItems = true;
  local_f8.Parameters.SectionMatchParameters.bActualHasExpectedOrder = true;
  local_f8.Parameters.SectionMatchParameters.bExpectedHasAllActualItems = false;
  local_f8.Parameters.SectionMatchParameters.bMatchChildrenIfAnyExpected = true;
  local_f8.Parameters.EntryMatchParameters.bActualHasAllExpectedItems = false;
  local_f8.Parameters.EntryMatchParameters.bActualHasExpectedOrder = true;
  local_f8.Parameters.EntryMatchParameters.bExpectedHasAllActualItems = false;
  local_f8.Parameters.EntryMatchParameters.bMatchChildrenIfAnyExpected = true;
  local_f8.TestInstance = this_00;
  bVar9 = UE::ToolMenus::FToolMenuAutomationTestAdapter::Matches(&local_f8,&local_88,pUVar13);
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar18.Data = local_a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(this_00,(wchar_t *)FVar18.Data,bVar9);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_88.Sections.AllocatorInstance.Data,
             local_88.Sections.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)local_88.Sections.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(local_88.Sections.AllocatorInstance.Data);
  }
  if ((longlong *)local_88._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_88._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_88._padding_ + 8))(local_88._padding_,1);
    }
  }
  return;
}

// operator() @ 142c43530

void __thiscall <lambda_5>::operator()(<lambda_5> *this)

{
  FName FVar1;
  UToolMenus *this_00;
  FName *pFVar2;
  FModuleManager *this_01;
  FName local_res10 [3];
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar2 = ::FName::FName(local_res10,"ToolMenus");
    FVar1 = *pFVar2;
    this_01 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this_01,FVar1);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  this_00 = UToolMenus::Singleton;
  if (UToolMenus::Singleton->bSuppressRefreshWidgetsRequests == false) {
    UToolMenus::Singleton->bRefreshWidgetsNextTick = true;
    UToolMenus::SetNextTickTimer(this_00);
    return;
  }
  return;
}

// `scalar_deleting_destructor' @ 142c435b0

void * __thiscall
IBaseDelegateInstance<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c435e0

void * __thiscall
IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&,FToolMenuCustomWidgetContext_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&,FToolMenuCustomWidgetContext_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43610

void * __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolMenus::Private::CombineVisibility'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  `UE::ToolMenus::Private::CombineVisibility'::__l5::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43650

void * __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`FToolMenuVisibilityChoice::ToVisibilityAttribute'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c436b0

void * __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateToolBarBuilderWithTopLevelChildren'::__l45::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  DestructItems<TAttribute<EVisibility>,int>
            (*(TAttribute<EVisibility> **)((longlong)this + 0x18),*(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43710

void * __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::CalculateToolbarVisibility'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuVisibilityChoice *pFVar1;
  
  pFVar1 = *(FToolMenuVisibilityChoice **)((longlong)this + 0x40);
  if (*(FToolMenuVisibilityChoice **)((longlong)this + 0x40) == (FToolMenuVisibilityChoice *)0x0) {
    pFVar1 = (FToolMenuVisibilityChoice *)((longlong)this + 0x18);
  }
  DestructItems<FToolMenuVisibilityChoice,int>(pFVar1,*(int *)((longlong)this + 0x48));
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43780

void * __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateToolBarBuilderWithTopLevelChildren'::__l66::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  DestructItems<TAttribute<EVisibility>,int>
            (*(TAttribute<EVisibility> **)((longlong)this + 0x18),*(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c437d0

void * __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`FToolMenuVisibilityChoice::ToVisibilityAttribute'::__l14::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43830

void * __thiscall
TBaseFunctorDelegateInstance<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenuEntryScript::CreateIconAttribute'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43870

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&,FToolMenuCustomWidgetContext_const_&),FDefaultDelegateUserPolicy,`FToolMenuEntry::InitMenuEntry'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c438b0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&,FToolMenuCustomWidgetContext_const_&),FDefaultDelegateUserPolicy,`FToolMenuEntry::InitSubMenu'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c438f0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&,FToolMenuCustomWidgetContext_const_&),FDefaultDelegateUserPolicy,`FToolMenuEntry::InitWidget'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43930

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertWidgetChoice'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x30));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c439a0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertWidgetChoice'::__l9::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x30));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43a10

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateToolBarBuilderWithEntry'::__l89::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(UObject **)((longlong)this + 0x20) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)this + 0x20));
    *(undefined8 *)((longlong)this + 0x20) = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43a60

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertWidgetChoice'::__l13::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x30));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43ad0

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenuEntryScript::CreateLabelAttribute'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43b10

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenuEntryScript::CreateToolTipAttribute'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43b50

void * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertScriptObjectToUIAction'::__l14::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43b90

void * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::__l11::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x30));
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43bf0

void * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::__l11::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x30));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43c60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x30));
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43cc0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x30));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43d30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateMenuBuilder'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43d60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateToolBarBuilder'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43d90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateMenuBarBuilder'::__l20::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43dc0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenuEntryScript::CreateShowInToolbarTopLevelAttribute'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43e00

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertScriptObjectToUIAction'::__l11::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43e40

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::__l8::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x30));
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43ea0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::__l8::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x30));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43f10

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertScriptObjectToUIAction'::__l17::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43f50

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::__l14::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x30));
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c43fb0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::__l14::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)((longlong)this + 0x30));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44020

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
           *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44070

void * __thiscall
TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
::_scalar_deleting_destructor_
          (TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
           *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c440b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
           *this,uint param_1)

{
  FToolMenuEntry::~FToolMenuEntry((FToolMenuEntry *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x7a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c440f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
           *this,uint param_1)

{
  FToolMenuEntry::~FToolMenuEntry((FToolMenuEntry *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x7b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44130

void * __thiscall
TCommonDelegateInstanceState<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44160

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&,FToolMenuCustomWidgetContext_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&,FToolMenuCustomWidgetContext_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44190

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
           *this,uint param_1)

{
  FToolMenuEntry::~FToolMenuEntry((FToolMenuEntry *)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x798);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c441d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
           *this,uint param_1)

{
  FToolMenuEntry::~FToolMenuEntry((FToolMenuEntry *)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x7a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44210

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
           *this,uint param_1)

{
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)&this->Payload);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44250

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuStringCommand,FName,FToolMenuContext>
           *this,uint param_1)

{
  void *pvVar1;
  
  FToolMenuContext::~FToolMenuContext((FToolMenuContext *)&(this->Payload).field_0x28);
  pvVar1 = *(void **)&(this->Payload).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c442a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c442e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c443a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c443e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c444a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_5>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c444e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGeneratedToolMenuWidget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FGeneratedToolMenuWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44520

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGeneratedToolMenuWidgets,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FGeneratedToolMenuWidgets,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44560

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::ToolMenus::FMenuEntry,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::ToolMenus::FMenuEntry,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c445a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::ToolMenus::FMenuSection,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::ToolMenus::FMenuSection,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c445e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FToolMenuEntryOptionsDropdownData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FToolMenuEntryOptionsDropdownData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44620

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44660

void * __thiscall UE::ToolMenus::FMenu::_scalar_deleting_destructor_(FMenu *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)(this->Sections).AllocatorInstance.Data,
             (this->Sections).ArrayNum);
  pFVar3 = (this->Sections).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c446e0

void * __thiscall FMenuBarBuilder::_scalar_deleting_destructor_(FMenuBarBuilder *this,uint param_1)

{
  *(undefined ***)this = &___7FMultiBoxBuilder__6B_;
  DestructItems<TSharedPtr<FExtender,1>,int>
            (*(TSharedPtr<FExtender,1> **)&this->field_0x28,*(int *)&this->field_0x30);
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
            (*(TSharedPtr<FUICommandList_const_,1> **)&this->field_0x18,*(int *)&this->field_0x20);
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44760

void * __thiscall
UE::ToolMenus::FMenuEntry::_scalar_deleting_destructor_(FMenuEntry *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  if ((*(int *)((longlong)&(this->Label).field0_0x0 + 0xc) != -1) &&
     (pFVar3 = (this->Label).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar3 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar3);
  }
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
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c447d0

void * __thiscall
UE::ToolMenus::FMenuEntryBase::_scalar_deleting_destructor_(FMenuEntryBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44800

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
USlateTabManagerContext::_scalar_deleting_destructor_(USlateTabManagerContext *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7USlateTabManagerContext__6B_;
  pTVar3 = (this->TabManager).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7UToolMenuContextBase__6B_;
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

// `scalar_deleting_destructor' @ 142c44890

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall UToolMenu::_scalar_deleting_destructor_(UToolMenu *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UToolMenu__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ModifyBlockWidgetAfterMake);
  pvVar1 = *(void **)&(this->ModifyBlockWidgetAfterMake).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ModifyBlockWidgetAfterMake);
  DestructItems<FToolMenuSection,int>
            ((FToolMenuSection *)(this->Sections).AllocatorInstance.Data,(this->Sections).ArrayNum);
  pFVar2 = (this->Sections).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FToolMenuContext::~FToolMenuContext(&this->Context);
  UToolMenuBase::~UToolMenuBase((UToolMenuBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44960

void * __thiscall
UToolMenuContextBase::_scalar_deleting_destructor_(UToolMenuContextBase *this,uint param_1)

{
  *(undefined ***)this = &___7UToolMenuContextBase__6B_;
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

// `scalar_deleting_destructor' @ 142c449c0

void * __thiscall
UToolMenuContextExtensions::_scalar_deleting_destructor_
          (UToolMenuContextExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UToolMenuContextExtensions__6B_;
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

// `scalar_deleting_destructor' @ 142c44a20

void * __thiscall
UToolMenuEntryExtensions::_scalar_deleting_destructor_(UToolMenuEntryExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UToolMenuEntryExtensions__6B_;
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

// `scalar_deleting_destructor' @ 142c44a80

void * __thiscall
UToolMenuEntryScript::_scalar_deleting_destructor_(UToolMenuEntryScript *this,uint param_1)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7UToolMenuEntryScript__6B_;
  pIVar1 = (this->Data).ToolTip.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->Data).Label.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c44b00

void * __thiscall
UToolMenuProfileContext::_scalar_deleting_destructor_(UToolMenuProfileContext *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UToolMenuProfileContext__6B_;
  pFVar1 = (this->ActiveProfiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UToolMenuContextBase__6B_;
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

// `scalar_deleting_destructor' @ 142c44b80

void * __thiscall
UToolMenuSectionDynamic::_scalar_deleting_destructor_(UToolMenuSectionDynamic *this,uint param_1)

{
  *(undefined ***)this = &___7UToolMenuSectionDynamic__6B_;
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

// `scalar_deleting_destructor' @ 142c44be0

void * __thiscall
UToolMenuSectionExtensions::_scalar_deleting_destructor_
          (UToolMenuSectionExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UToolMenuSectionExtensions__6B_;
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

// `scalar_deleting_destructor' @ 142c44c40

void * __thiscall
UToolMenuWidgetCollectionContext::_scalar_deleting_destructor_
          (UToolMenuWidgetCollectionContext *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UToolMenuWidgetCollectionContext__6B_;
  DestructItems<TWeakPtr<SWidget,1>,int>
            ((TWeakPtr<SWidget,1> *)(this->Widgets).AllocatorInstance.Data,(this->Widgets).ArrayNum)
  ;
  pFVar1 = (this->Widgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UToolMenuContextBase__6B_;
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

// `scalar_deleting_destructor' @ 142c44cd0

void * __thiscall UToolMenus::_scalar_deleting_destructor_(UToolMenus *this,uint param_1)

{
  ~UToolMenus(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x378);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeToolMenu @ 142c57160

void __cdecl EmptyLinkFunctionForGeneratedCodeToolMenu(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeToolMenuContext @ 142c57170

void __cdecl EmptyLinkFunctionForGeneratedCodeToolMenuContext(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeToolMenuDelegates @ 142c57180

void __cdecl EmptyLinkFunctionForGeneratedCodeToolMenuDelegates(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeToolMenuEntry @ 142c57190

void __cdecl EmptyLinkFunctionForGeneratedCodeToolMenuEntry(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeToolMenuEntryScript @ 142c571a0

void __cdecl EmptyLinkFunctionForGeneratedCodeToolMenuEntryScript(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeToolMenuMisc @ 142c571b0

void __cdecl EmptyLinkFunctionForGeneratedCodeToolMenuMisc(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeToolMenuOwner @ 142c571c0

void __cdecl EmptyLinkFunctionForGeneratedCodeToolMenuOwner(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeToolMenuSection @ 142c571d0

void __cdecl EmptyLinkFunctionForGeneratedCodeToolMenuSection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeToolMenuWidgetCollectionContext @ 142c571e0

void __cdecl EmptyLinkFunctionForGeneratedCodeToolMenuWidgetCollectionContext(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeToolMenus @ 142c571f0

void __cdecl EmptyLinkFunctionForGeneratedCodeToolMenus(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeToolMenusBlueprintLibrary @ 142c57200

void __cdecl EmptyLinkFunctionForGeneratedCodeToolMenusBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeToolMenus_init @ 142c57210

void __cdecl EmptyLinkFunctionForGeneratedCodeToolMenus_init(void)

{
  return;
}

// FToolMenuDynamicCanExecuteAction_DelegateWrapper @ 142c592e0

bool __cdecl
FToolMenuDynamicCanExecuteAction_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FToolMenuContext *param_2)

{
  bool bVar1;
  FToolMenuContext local_78;
  char local_10;
  
  local_78.bIsEditing = false;
  local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjects.ArrayNum = 0;
  local_78.ContextObjects.ArrayMax = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
  local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextCleanupFuncs.ArrayNum = 0;
  local_78.ContextCleanupFuncs.ArrayMax = 0;
  local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.CommandLists.ArrayNum = 0;
  local_78.CommandLists.ArrayMax = 0;
  local_78.CommandList.Object = (FUICommandList *)0x0;
  local_78.CommandList.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Extenders.ArrayNum = 0;
  local_78.Extenders.ArrayMax = 0;
  local_10 = '\0';
  FToolMenuContext::operator=(&local_78,param_2);
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_78);
  bVar1 = local_10 != '\0';
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
             local_78.Extenders.ArrayNum);
  if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
      (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.CommandList.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FUICommandList,1>,int>
            ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
             local_78.CommandLists.ArrayNum);
  if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
      (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data,
             local_78.ContextCleanupFuncs.ArrayNum);
  if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
      (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
             local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
             local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
  if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
      local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
      (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
  }
  if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
  }
  return bVar1;
}

// FToolMenuDynamicExecuteAction_DelegateWrapper @ 142c593f0

void __cdecl
FToolMenuDynamicExecuteAction_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FToolMenuContext *param_2)

{
  FToolMenuContext local_78;
  
  local_78.bIsEditing = false;
  local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjects.ArrayNum = 0;
  local_78.ContextObjects.ArrayMax = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
  local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextCleanupFuncs.ArrayNum = 0;
  local_78.ContextCleanupFuncs.ArrayMax = 0;
  local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.CommandLists.ArrayNum = 0;
  local_78.CommandLists.ArrayMax = 0;
  local_78.CommandList.Object = (FUICommandList *)0x0;
  local_78.CommandList.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Extenders.ArrayNum = 0;
  local_78.Extenders.ArrayMax = 0;
  FToolMenuContext::operator=(&local_78,param_2);
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_78);
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
             local_78.Extenders.ArrayNum);
  if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
      (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.CommandList.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FUICommandList,1>,int>
            ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
             local_78.CommandLists.ArrayNum);
  if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
      (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data,
             local_78.ContextCleanupFuncs.ArrayNum);
  if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
      (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
             local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
             local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
  if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
      local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
      (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
  }
  if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
  }
  return;
}

// FToolMenuDynamicGetActionCheckState_DelegateWrapper @ 142c594f0

ECheckBoxState __cdecl
FToolMenuDynamicGetActionCheckState_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FToolMenuContext *param_2)

{
  ECheckBoxState EVar1;
  FToolMenuContext local_78;
  ECheckBoxState local_10;
  
  local_78.bIsEditing = false;
  local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjects.ArrayNum = 0;
  local_78.ContextObjects.ArrayMax = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
  local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextCleanupFuncs.ArrayNum = 0;
  local_78.ContextCleanupFuncs.ArrayMax = 0;
  local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.CommandLists.ArrayNum = 0;
  local_78.CommandLists.ArrayMax = 0;
  local_78.CommandList.Object = (FUICommandList *)0x0;
  local_78.CommandList.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Extenders.ArrayNum = 0;
  local_78.Extenders.ArrayMax = 0;
  local_10 = Unchecked;
  FToolMenuContext::operator=(&local_78,param_2);
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_78);
  EVar1 = local_10;
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
             local_78.Extenders.ArrayNum);
  if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
      (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.CommandList.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FUICommandList,1>,int>
            ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
             local_78.CommandLists.ArrayNum);
  if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
      (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data,
             local_78.ContextCleanupFuncs.ArrayNum);
  if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
      (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
             local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
             local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
  if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
      local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
      (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
  }
  if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
  }
  return EVar1;
}

// FToolMenuDynamicIsActionButtonVisible_DelegateWrapper @ 142c595f0

bool __cdecl
FToolMenuDynamicIsActionButtonVisible_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FToolMenuContext *param_2)

{
  bool bVar1;
  FToolMenuContext local_78;
  char local_10;
  
  local_78.bIsEditing = false;
  local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjects.ArrayNum = 0;
  local_78.ContextObjects.ArrayMax = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
  local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextCleanupFuncs.ArrayNum = 0;
  local_78.ContextCleanupFuncs.ArrayMax = 0;
  local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.CommandLists.ArrayNum = 0;
  local_78.CommandLists.ArrayMax = 0;
  local_78.CommandList.Object = (FUICommandList *)0x0;
  local_78.CommandList.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Extenders.ArrayNum = 0;
  local_78.Extenders.ArrayMax = 0;
  local_10 = '\0';
  FToolMenuContext::operator=(&local_78,param_2);
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_78);
  bVar1 = local_10 != '\0';
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
             local_78.Extenders.ArrayNum);
  if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
      (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.CommandList.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FUICommandList,1>,int>
            ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
             local_78.CommandLists.ArrayNum);
  if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
      (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data,
             local_78.ContextCleanupFuncs.ArrayNum);
  if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
      (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
             local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
             local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
  if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
      local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
      (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
  }
  if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
  }
  return bVar1;
}

// FToolMenuDynamicIsActionChecked_DelegateWrapper @ 142c59700

bool __cdecl
FToolMenuDynamicIsActionChecked_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FToolMenuContext *param_2)

{
  bool bVar1;
  FToolMenuContext local_78;
  char local_10;
  
  local_78.bIsEditing = false;
  local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjects.ArrayNum = 0;
  local_78.ContextObjects.ArrayMax = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
  local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextCleanupFuncs.ArrayNum = 0;
  local_78.ContextCleanupFuncs.ArrayMax = 0;
  local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.CommandLists.ArrayNum = 0;
  local_78.CommandLists.ArrayMax = 0;
  local_78.CommandList.Object = (FUICommandList *)0x0;
  local_78.CommandList.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Extenders.ArrayNum = 0;
  local_78.Extenders.ArrayMax = 0;
  local_10 = '\0';
  FToolMenuContext::operator=(&local_78,param_2);
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_78);
  bVar1 = local_10 != '\0';
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
             local_78.Extenders.ArrayNum);
  if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
      (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.CommandList.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FUICommandList,1>,int>
            ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
             local_78.CommandLists.ArrayNum);
  if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
      (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data,
             local_78.ContextCleanupFuncs.ArrayNum);
  if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
      (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
             local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
             local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
  if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
      local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
      (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
  }
  if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
  }
  return bVar1;
}

// Z_Construct_UClass_USlateTabManagerContext_NoRegister @ 142c74ea0

UClass * __cdecl Z_Construct_UClass_USlateTabManagerContext_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateTabManagerContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"SlateTabManagerContext",
               &Z_Registration_Info_UClass_USlateTabManagerContext.InnerSingleton,
               USlateTabManagerContext::StaticRegisterNativesUSlateTabManagerContext,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USlateTabManagerContext>
               ,InternalVTableHelperCtorCaller<USlateTabManagerContext>,local_res8,
               UToolMenuContextBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateTabManagerContext.InnerSingleton;
}

// Z_Construct_UClass_UToolMenuContextBase_NoRegister @ 142c74f60

UClass * __cdecl Z_Construct_UClass_UToolMenuContextBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuContextBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuContextBase",
               &Z_Registration_Info_UClass_UToolMenuContextBase.InnerSingleton,
               UToolMenuContextBase::StaticRegisterNativesUToolMenuContextBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolMenuContextBase>,
               InternalVTableHelperCtorCaller<UToolMenuContextBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuContextBase.InnerSingleton;
}

// Z_Construct_UClass_UToolMenuContextExtensions_NoRegister @ 142c75010

UClass * __cdecl Z_Construct_UClass_UToolMenuContextExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuContextExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuContextExtensions",
               &Z_Registration_Info_UClass_UToolMenuContextExtensions.InnerSingleton,
               UToolMenuContextExtensions::StaticRegisterNativesUToolMenuContextExtensions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolMenuContextExtensions>,
               InternalVTableHelperCtorCaller<UToolMenuContextExtensions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuContextExtensions.InnerSingleton;
}

// Z_Construct_UClass_UToolMenuEntryExtensions_NoRegister @ 142c750c0

UClass * __cdecl Z_Construct_UClass_UToolMenuEntryExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuEntryExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuEntryExtensions",
               &Z_Registration_Info_UClass_UToolMenuEntryExtensions.InnerSingleton,
               UToolMenuEntryExtensions::StaticRegisterNativesUToolMenuEntryExtensions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolMenuEntryExtensions>,
               InternalVTableHelperCtorCaller<UToolMenuEntryExtensions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuEntryExtensions.InnerSingleton;
}

// Z_Construct_UClass_UToolMenuProfileContext_NoRegister @ 142c75170

UClass * __cdecl Z_Construct_UClass_UToolMenuProfileContext_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuProfileContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuProfileContext",
               &Z_Registration_Info_UClass_UToolMenuProfileContext.InnerSingleton,
               UToolMenuProfileContext::StaticRegisterNativesUToolMenuProfileContext,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UToolMenuProfileContext>
               ,InternalVTableHelperCtorCaller<UToolMenuProfileContext>,local_res8,
               UToolMenuContextBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuProfileContext.InnerSingleton;
}

// Z_Construct_UClass_UToolMenuSectionExtensions_NoRegister @ 142c75230

UClass * __cdecl Z_Construct_UClass_UToolMenuSectionExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuSectionExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuSectionExtensions",
               &Z_Registration_Info_UClass_UToolMenuSectionExtensions.InnerSingleton,
               UToolMenuSectionExtensions::StaticRegisterNativesUToolMenuSectionExtensions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolMenuSectionExtensions>,
               InternalVTableHelperCtorCaller<UToolMenuSectionExtensions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuSectionExtensions.InnerSingleton;
}

// Z_Construct_UClass_UToolMenuWidgetCollectionContext_NoRegister @ 142c752e0

UClass * __cdecl Z_Construct_UClass_UToolMenuWidgetCollectionContext_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuWidgetCollectionContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuWidgetCollectionContext",
               &Z_Registration_Info_UClass_UToolMenuWidgetCollectionContext.InnerSingleton,
               UToolMenuWidgetCollectionContext::
               StaticRegisterNativesUToolMenuWidgetCollectionContext,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UToolMenuWidgetCollectionContext>,
               InternalVTableHelperCtorCaller<UToolMenuWidgetCollectionContext>,local_res8,
               UToolMenuContextBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuWidgetCollectionContext.InnerSingleton;
}

// Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature @ 142c753a0

UFunction * __cdecl
Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FToolDynamicUIAction @ 142c753e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FToolDynamicUIAction(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FToolDynamicUIAction.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FToolDynamicUIAction.InnerSingleton,
               &Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FToolDynamicUIAction.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FToolDynamicUIAction.InnerSingleton;
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

// IMPLEMENT_MODULE_ToolMenus @ 142c79df0

void __cdecl IMPLEMENT_MODULE_ToolMenus(void)

{
  return;
}

// StartupCallbacks'' @ 15035e840

void __cdecl `dynamic_atexit_destructor_for_'UToolMenus::StartupCallbacks__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UToolMenus::StartupCallbacks._8_8_,UToolMenus::StartupCallbacks._16_4_);
  if (UToolMenus::StartupCallbacks._8_8_ != 0) {
    FMemory::Free((void *)UToolMenus::StartupCallbacks._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UToolMenus::StartupCallbacks);
  return;
}

// `dynamic_atexit_destructor_for_'FToolMenusTestUtiltiesSpecAutomationSpecInstance'' @ 15035e880

void __cdecl
UE::ToolMenus::Private::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FToolMenusTestUtiltiesSpecAutomationSpecInstance__(void)

{
  FAutomationSpecBase::~FAutomationSpecBase
            ((FAutomationSpecBase *)&FToolMenusTestUtiltiesSpecAutomationSpecInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogToolMenus'' @ 15035e8a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogToolMenus__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogToolMenus);
  return;
}

// `dynamic_atexit_destructor_for_'ToolMenusRefreshMenuWidget'' @ 15035e8c0

void __cdecl _dynamic_atexit_destructor_for__ToolMenusRefreshMenuWidget__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ToolMenusRefreshMenuWidget);
  return;
}

