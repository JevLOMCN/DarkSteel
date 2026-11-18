// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 151

// GamepadGeneric'' @ 1411ccc60

void __cdecl `dynamic_initializer_for_'FCommonInputDefaults::GamepadGeneric__(void)

{
  ::FName::FName(&FCommonInputDefaults::GamepadGeneric,L"Generic");
  return;
}

// OnPlatformInputSupportOverride'' @ 1411ccc80

void __cdecl `dynamic_initializer_for_'UCommonInputSubsystem::OnPlatformInputSupportOverride__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UCommonInputSubsystem::OnPlatformInputSupportOverride__);
  return;
}

// PlatformPC'' @ 1411ccca0

void __cdecl `dynamic_initializer_for_'FCommonInputDefaults::PlatformPC__(void)

{
  ::FName::FName(&FCommonInputDefaults::PlatformPC,L"PC");
  return;
}

// `dynamic_initializer_for_'CVarDumpInputTypeChangeCallstack'' @ 1411cccc0

void __cdecl _dynamic_initializer_for__CVarDumpInputTypeChangeCallstack__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDumpInputTypeChangeCallstack,L"CommonUI.bDumpInputTypeChangeCallstack",
             &bDumpInputTypeChangeCallstack,L"Dump callstack when input type changes.",0);
  atexit(_dynamic_atexit_destructor_for__CVarDumpInputTypeChangeCallstack__);
  return;
}

// `dynamic_initializer_for_'CVarInputEnableGamepadPlatformCursor'' @ 1411ccd10

void __cdecl _dynamic_initializer_for__CVarInputEnableGamepadPlatformCursor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarInputEnableGamepadPlatformCursor,L"CommonInput.EnableGamepadPlatformCursor",
             &bEnableGamepadPlatformCursor,
             L"Should the cursor be allowed to be used during gamepad input",0);
  atexit(_dynamic_atexit_destructor_for__CVarInputEnableGamepadPlatformCursor__);
  return;
}

// `dynamic_initializer_for_'CVarInputKeysVisible'' @ 1411ccd60

void __cdecl _dynamic_initializer_for__CVarInputKeysVisible__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarInputKeysVisible,L"CommonInput.ShowKeys",&GCommonInputKeysVisible,
             L"Should we show the keys for the current input device.",0);
  atexit(_dynamic_atexit_destructor_for__CVarInputKeysVisible__);
  return;
}

// `dynamic_initializer_for_'CVarShouldMouseWheelAndGestureRefreshInputMethod'' @ 1411ccdb0

void __cdecl _dynamic_initializer_for__CVarShouldMouseWheelAndGestureRefreshInputMethod__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarShouldMouseWheelAndGestureRefreshInputMethod,
             L"CommonUI.ShouldMouseWheelAndGestureRefreshInputMethod",local_res8,
             L"Controls whether Mouse Wheel and Gesture input events should update the current input method"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShouldMouseWheelAndGestureRefreshInputMethod__);
  return;
}

// `dynamic_initializer_for_'LogCommonInput'' @ 1411cce00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCommonInput__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogCommonInput,L"LogCommonInput",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogCommonInput__);
  return;
}

// `dynamic_initializer_for_'LogUIActionDomain'' @ 1411cce40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogUIActionDomain__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogUIActionDomain,L"LogUIActionDomain",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogUIActionDomain__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantCommonInput'' @ 1411cce80

void __cdecl _dynamic_initializer_for__ModuleRegistrantCommonInput__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "CommonInput";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"CommonInput",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FCommonInputModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h__Script_CommonInput_1592950079'' @ 1411cced0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h__Script_CommonInput_1592950079__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CommonInput",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h__Script_CommonInput_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h__Script_CommonInput_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h__Script_CommonInput_93460435'' @ 1411ccf20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h__Script_CommonInput_93460435__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CommonInput",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h__Script_CommonInput_Statics
             ::ClassInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h__Script_CommonInput_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputModeTypes_h__Script_CommonInput_3235450851'' @ 1411ccf70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputModeTypes_h__Script_CommonInput_3235450851__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CommonInput",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputModeTypes_h__Script_CommonInput_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSettings_h__Script_CommonInput_2199480099'' @ 1411ccfc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSettings_h__Script_CommonInput_2199480099__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CommonInput",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSettings_h__Script_CommonInput_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h__Script_CommonInput_1491713389'' @ 1411cd000

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h__Script_CommonInput_1491713389__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CommonInput",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h__Script_CommonInput_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputTypeEnum_h__Script_CommonInput_3278504501'' @ 1411cd040

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputTypeEnum_h__Script_CommonInput_3278504501__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CommonInput",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputTypeEnum_h__Script_CommonInput_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_CommonInput'' @ 1411cd090

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_CommonInput__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x3c8028bd;
  local_res8[0].DeclarationsHash = 0x4f14e6e7;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_CommonInput,L"/Script/CommonInput",
             &Z_Registration_Info_UPackage__Script_CommonInput,local_res8);
  return;
}

// Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature @ 14a76ce40

UFunction * __cdecl
Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_CommonInput @ 14a76ce80

UPackage * __cdecl Z_Construct_UPackage__Script_CommonInput(void)

{
  if (Z_Registration_Info_UPackage__Script_CommonInput.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_CommonInput.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_CommonInput.OuterSingleton;
}

// Z_Construct_UEnum_CommonInput_ECommonInputMode @ 14a76cec0

UEnum * __cdecl Z_Construct_UEnum_CommonInput_ECommonInputMode(void)

{
  if (Z_Registration_Info_UEnum_ECommonInputMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECommonInputMode.InnerSingleton,
               &Z_Construct_UEnum_CommonInput_ECommonInputMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECommonInputMode.InnerSingleton;
}

// ECommonInputMode_StaticEnum @ 14a76cf00

UEnum * __cdecl ECommonInputMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECommonInputMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonInput();
    Z_Registration_Info_UEnum_ECommonInputMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CommonInput_ECommonInputMode,(UObject *)pUVar1,
                       L"ECommonInputMode");
  }
  return Z_Registration_Info_UEnum_ECommonInputMode.OuterSingleton;
}

// Z_Construct_UEnum_CommonInput_ECommonInputType @ 14a76d000

UEnum * __cdecl Z_Construct_UEnum_CommonInput_ECommonInputType(void)

{
  if (Z_Registration_Info_UEnum_ECommonInputType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECommonInputType.InnerSingleton,
               &Z_Construct_UEnum_CommonInput_ECommonInputType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECommonInputType.InnerSingleton;
}

// ECommonInputType_StaticEnum @ 14a76d040

UEnum * __cdecl ECommonInputType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECommonInputType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonInput();
    Z_Registration_Info_UEnum_ECommonInputType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CommonInput_ECommonInputType,(UObject *)pUVar1,
                       L"ECommonInputType");
  }
  return Z_Registration_Info_UEnum_ECommonInputType.OuterSingleton;
}

// Z_Construct_UClass_UCommonInputActionDomain_NoRegister @ 14a76d080

UClass * __cdecl Z_Construct_UClass_UCommonInputActionDomain_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputActionDomain.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputActionDomain",
               &Z_Registration_Info_UClass_UCommonInputActionDomain.InnerSingleton,
               UCommonInputActionDomain::StaticRegisterNativesUCommonInputActionDomain,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonInputActionDomain>,
               InternalVTableHelperCtorCaller<UCommonInputActionDomain>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputActionDomain.InnerSingleton;
}

// Z_Construct_UClass_UCommonInputActionDomainTable_NoRegister @ 14a76d140

UClass * __cdecl Z_Construct_UClass_UCommonInputActionDomainTable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputActionDomainTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputActionDomainTable",
               &Z_Registration_Info_UClass_UCommonInputActionDomainTable.InnerSingleton,
               UCommonInputActionDomainTable::StaticRegisterNativesUCommonInputActionDomainTable,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonInputActionDomainTable>,
               InternalVTableHelperCtorCaller<UCommonInputActionDomainTable>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputActionDomainTable.InnerSingleton;
}

// Z_Construct_UClass_UCommonInputBaseControllerData @ 14a76d440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCommonInputBaseControllerData(void)

{
  if (Z_Registration_Info_UClass_UCommonInputBaseControllerData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCommonInputBaseControllerData.OuterSingleton,
               &Z_Construct_UClass_UCommonInputBaseControllerData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCommonInputBaseControllerData.OuterSingleton;
}

// Z_Construct_UClass_UCommonInputPlatformSettings @ 14a76d480

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCommonInputPlatformSettings(void)

{
  if (Z_Registration_Info_UClass_UCommonInputPlatformSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCommonInputPlatformSettings.OuterSingleton,
               &Z_Construct_UClass_UCommonInputPlatformSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCommonInputPlatformSettings.OuterSingleton;
}

// Z_Construct_UClass_UCommonUIHoldData @ 14a76d4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCommonUIHoldData(void)

{
  if (Z_Registration_Info_UClass_UCommonUIHoldData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCommonUIHoldData.OuterSingleton,
               &Z_Construct_UClass_UCommonUIHoldData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCommonUIHoldData.OuterSingleton;
}

// Z_Construct_UClass_UCommonUIInputData @ 14a76d500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCommonUIInputData(void)

{
  if (Z_Registration_Info_UClass_UCommonUIInputData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCommonUIInputData.OuterSingleton,
               &Z_Construct_UClass_UCommonUIInputData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCommonUIInputData.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration @ 14a76d540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCommonInputKeyBrushConfiguration.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCommonInputKeyBrushConfiguration.InnerSingleton,
               &Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCommonInputKeyBrushConfiguration.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCommonInputKeyBrushConfiguration.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration @ 14a76d5c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCommonInputKeySetBrushConfiguration.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCommonInputKeySetBrushConfiguration.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FCommonInputKeySetBrushConfiguration.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCommonInputKeySetBrushConfiguration.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCommonInputPlatformBaseData @ 14a76d640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCommonInputPlatformBaseData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCommonInputPlatformBaseData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCommonInputPlatformBaseData.InnerSingleton,
               &Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCommonInputPlatformBaseData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCommonInputPlatformBaseData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInputDeviceIdentifierPair @ 14a76d6c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputDeviceIdentifierPair(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInputDeviceIdentifierPair.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInputDeviceIdentifierPair.InnerSingleton,
               &Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInputDeviceIdentifierPair.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInputDeviceIdentifierPair.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInputHoldData @ 14a76d740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputHoldData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInputHoldData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInputHoldData.InnerSingleton,
               &Z_Construct_UScriptStruct_FInputHoldData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInputHoldData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInputHoldData.InnerSingleton;
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

// NewStructOps @ 14a76d7c0

void * __cdecl
Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCommonInputKeyBrushConfiguration,&UE::CoreUObject::Private::Construct<FCommonInputKeyBrushConfiguration>,&UE::CoreUObject::Private::ConstructForTests<FCommonInputKeyBrushConfiguration>,&UE::CoreUObject::Private::Destruct<FCommonInputKeyBrushConfiguration>,&UE::CoreUObject::Private::Copy<FCommonInputKeyBrushConfiguration>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a76d800

void * __cdecl
Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCommonInputKeySetBrushConfiguration,&UE::CoreUObject::Private::Construct<FCommonInputKeySetBrushConfiguration>,&UE::CoreUObject::Private::ConstructForTests<FCommonInputKeySetBrushConfiguration>,&UE::CoreUObject::Private::Destruct<FCommonInputKeySetBrushConfiguration>,&UE::CoreUObject::Private::Copy<FCommonInputKeySetBrushConfiguration>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCommonInputActionDomain @ 14a76d840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCommonInputActionDomain(void)

{
  if (Z_Registration_Info_UClass_UCommonInputActionDomain.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCommonInputActionDomain.OuterSingleton,
               &Z_Construct_UClass_UCommonInputActionDomain_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCommonInputActionDomain.OuterSingleton;
}

// Z_Construct_UClass_UCommonInputActionDomainTable @ 14a76d880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCommonInputActionDomainTable(void)

{
  if (Z_Registration_Info_UClass_UCommonInputActionDomainTable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCommonInputActionDomainTable.OuterSingleton,
               &Z_Construct_UClass_UCommonInputActionDomainTable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCommonInputActionDomainTable.OuterSingleton;
}

// Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior @ 14a76d8c0

UEnum * __cdecl Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior(void)

{
  if (Z_Registration_Info_UEnum_ECommonInputEventFlowBehavior.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECommonInputEventFlowBehavior.InnerSingleton,
               &Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECommonInputEventFlowBehavior.InnerSingleton;
}

// ECommonInputEventFlowBehavior_StaticEnum @ 14a76d900

UEnum * __cdecl ECommonInputEventFlowBehavior_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECommonInputEventFlowBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonInput();
    Z_Registration_Info_UEnum_ECommonInputEventFlowBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior,(UObject *)pUVar1
                       ,L"ECommonInputEventFlowBehavior");
  }
  return Z_Registration_Info_UEnum_ECommonInputEventFlowBehavior.OuterSingleton;
}

// NewStructOps @ 14a76d940

void * __cdecl Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInputDeviceIdentifierPair,&UE::CoreUObject::Private::Construct<FInputDeviceIdentifierPair>,&UE::CoreUObject::Private::ConstructForTests<FInputDeviceIdentifierPair>,&UE::CoreUObject::Private::Destruct<FInputDeviceIdentifierPair>,&UE::CoreUObject::Private::Copy<FInputDeviceIdentifierPair>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUseActionDomainDesiredInputConfig_SetBit @ 14a76d980

void __cdecl
Z_Construct_UClass_UCommonInputActionDomain_Statics::
NewProp_bUseActionDomainDesiredInputConfig_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14a76dc50

void * __thiscall
FCommonInputPlatformBaseData::_scalar_deleting_destructor_
          (FCommonInputPlatformBaseData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ControllerDataClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftClassPtr<UCommonInputBaseControllerData>,int>
            ((TSoftClassPtr<UCommonInputBaseControllerData> *)
             (this->ControllerData).AllocatorInstance.Data,(this->ControllerData).ArrayNum);
  pFVar1 = (this->ControllerData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// NewStructOps @ 14a76dcb0

void * __cdecl Z_Construct_UScriptStruct_FInputHoldData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInputHoldData,&UE::CoreUObject::Private::Construct<FInputHoldData>,&UE::CoreUObject::Private::ConstructForTests<FInputHoldData>,&UE::CoreUObject::Private::Destruct<FInputHoldData>,&UE::CoreUObject::Private::Copy<FInputHoldData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHideCursorDuringViewportCapture_SetBit @ 14a76dcf0

void __cdecl
Z_Construct_UClass_UCommonInputActionDomainTable_Statics::
NewProp_bHideCursorDuringViewportCapture_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x42) = 1;
  return;
}

// Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads @ 14a76dd00

UFunction * __cdecl Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSupportsMouseAndKeyboard_SetBit @ 14a76dd40

void __cdecl
Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsMouseAndKeyboard_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return;
}

// NewProp_bSupportsTouch_SetBit @ 14a76dd50

void __cdecl
Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsTouch_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x42) = 1;
  return;
}

// NewProp_bSupportsGamepad_SetBit @ 14a76dd60

void __cdecl
Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsGamepad_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x43) = 1;
  return;
}

// NewProp_bCanChangeGamepadType_SetBit @ 14a76dd70

void __cdecl
Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bCanChangeGamepadType_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// NewProp_bSupportsMouseAndKeyboard_SetBit @ 14a76dd80

void __cdecl
Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::
NewProp_bSupportsMouseAndKeyboard_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bSupportsGamepad_SetBit @ 14a76dd90

void __cdecl
Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsGamepad_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// NewProp_bCanChangeGamepadType_SetBit @ 14a76dda0

void __cdecl
Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bCanChangeGamepadType_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bSupportsTouch_SetBit @ 14a76ddb0

void __cdecl
Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsTouch_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// NewStructOps @ 14a76ddc0

void * __cdecl Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCommonInputPlatformBaseData,&UE::CoreUObject::Private::Construct<FCommonInputPlatformBaseData>,&UE::CoreUObject::Private::ConstructForTests<FCommonInputPlatformBaseData>,&UE::CoreUObject::Private::Destruct<FCommonInputPlatformBaseData>,&UE::CoreUObject::Private::Copy<FCommonInputPlatformBaseData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCommonInputSettings @ 14a76e110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCommonInputSettings(void)

{
  if (Z_Registration_Info_UClass_UCommonInputSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCommonInputSettings.OuterSingleton,
               &Z_Construct_UClass_UCommonInputSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCommonInputSettings.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14a76e150

void __cdecl
Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled @ 14a76e160

UFunction * __cdecl Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableInputMethodThrashingProtection_SetBit @ 14a76e1a0

void __cdecl
Z_Construct_UClass_UCommonInputSettings_Statics::
NewProp_bEnableInputMethodThrashingProtection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// NewProp_bAllowOutOfFocusDeviceInput_SetBit @ 14a76e1b0

void __cdecl
Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bAllowOutOfFocusDeviceInput_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd8) = 1;
  return;
}

// NewProp_bEnableDefaultInputConfig_SetBit @ 14a76e1c0

void __cdecl
Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableDefaultInputConfig_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd9) = 1;
  return;
}

// NewProp_bEnableEnhancedInputSupport_SetBit @ 14a76e1d0

void __cdecl
Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableEnhancedInputSupport_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xda) = 1;
  return;
}

// NewProp_bEnableAutomaticGamepadTypeDetection_SetBit @ 14a76e1e0

void __cdecl
Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableAutomaticGamepadTypeDetection_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xdb) = 1;
  return;
}

// Z_Construct_UClass_UCommonInputSubsystem @ 14a76e260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCommonInputSubsystem(void)

{
  if (Z_Registration_Info_UClass_UCommonInputSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCommonInputSubsystem.OuterSingleton,
               &Z_Construct_UClass_UCommonInputSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCommonInputSubsystem.OuterSingleton;
}

// Z_Construct_UFunction_UCommonInputSubsystem_BroadcastInputMethodChanged @ 14a76e300

UFunction * __cdecl Z_Construct_UFunction_UCommonInputSubsystem_BroadcastInputMethodChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCommonInputSubsystem_BroadcastInputMethodChanged_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName @ 14a76e3a0

UFunction * __cdecl Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType @ 14a76e3e0

UFunction * __cdecl Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType @ 14a76e420

UFunction * __cdecl Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a76e460

void __cdecl
Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive @ 14a76e470

UFunction * __cdecl Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a76e4b0

void __cdecl
Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput @ 14a76e4c0

UFunction * __cdecl Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType @ 14a76e500

UFunction * __cdecl Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType @ 14a76e540

UFunction * __cdecl Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a76e580

void __cdecl
Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys @ 14a76e640

UFunction * __cdecl Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bInputMethodLockedByThrashing_SetBit @ 14a76e790

void __cdecl
Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_bInputMethodLockedByThrashing_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xac) = 1;
  return;
}

// NewProp_bIsGamepadSimulatedClick_SetBit @ 14a76e7a0

void __cdecl
Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_bIsGamepadSimulatedClick_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x110) = 1;
  return;
}

// Z_Construct_UClass_UCommonUIInputData_NoRegister @ 14a76e900

UClass * __cdecl Z_Construct_UClass_UCommonUIInputData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUIInputData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonUIInputData",
               &Z_Registration_Info_UClass_UCommonUIInputData.InnerSingleton,
               UCommonUIInputData::StaticRegisterNativesUCommonUIInputData,0x80,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonUIInputData>,
               InternalVTableHelperCtorCaller<UCommonUIInputData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUIInputData.InnerSingleton;
}

// Z_Construct_UClass_UCommonUIHoldData_NoRegister @ 14a76e9b0

UClass * __cdecl Z_Construct_UClass_UCommonUIHoldData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUIHoldData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonUIHoldData",
               &Z_Registration_Info_UClass_UCommonUIHoldData.InnerSingleton,
               UCommonUIHoldData::StaticRegisterNativesUCommonUIHoldData,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonUIHoldData>,
               InternalVTableHelperCtorCaller<UCommonUIHoldData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUIHoldData.InnerSingleton;
}

// Z_Construct_UClass_UCommonInputBaseControllerData_NoRegister @ 14a76ea60

UClass * __cdecl Z_Construct_UClass_UCommonInputBaseControllerData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputBaseControllerData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputBaseControllerData",
               &Z_Registration_Info_UClass_UCommonInputBaseControllerData.InnerSingleton,
               UCommonInputBaseControllerData::StaticRegisterNativesUCommonInputBaseControllerData,
               0xe8,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonInputBaseControllerData>,
               InternalVTableHelperCtorCaller<UCommonInputBaseControllerData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputBaseControllerData.InnerSingleton;
}

// CastChecked<UCommonInputPlatformSettings,UPlatformSettings> @ 14a76ef00

UCommonInputPlatformSettings * __cdecl
CastChecked<UCommonInputPlatformSettings,UPlatformSettings>(UPlatformSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPlatformSettings *)0x0) {
    pFVar3 = GetTypeName<UCommonInputPlatformSettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UCommonInputPlatformSettings::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UCommonInputPlatformSettings *)param_1;
  }
  pFVar3 = GetTypeName<UCommonInputPlatformSettings>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPlatformSettings>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<TSoftClassPtr<UCommonInputBaseControllerData>,TSoftClassPtr<UCommonInputBaseControllerData>,int> @ 14a76efc0

void __cdecl
ConstructItems<TSoftClassPtr<UCommonInputBaseControllerData>,TSoftClassPtr<UCommonInputBaseControllerData>,int>
          (void *param_1,TSoftClassPtr<UCommonInputBaseControllerData> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
                ((TPersistentObjectPtr<FSoftObjectPath> *)(lVar1 + (longlong)param_2),
                 (TPersistentObjectPtr<FSoftObjectPath> *)param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSubclassOf<UCommonInputBaseControllerData>,TSubclassOf<UCommonInputBaseControllerData>,int> @ 14a76f010

void __cdecl
ConstructItems<TSubclassOf<UCommonInputBaseControllerData>,TSubclassOf<UCommonInputBaseControllerData>,int>
          (void *param_1,TSubclassOf<UCommonInputBaseControllerData> *param_2,int param_3)

{
  UClass *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = (param_2->Class).field0_0x0.DebugPtr;
      *(UClass **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FCommonInputKeyBrushConfiguration,int> @ 14a76f090

void __cdecl
DestructItems<FCommonInputKeyBrushConfiguration,int>
          (FCommonInputKeyBrushConfiguration *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateBrush *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar2 = &param_1->KeyBrush;
    pTVar1 = (pFVar2->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
    pFVar2->_padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)(pFVar2 + -1) + 0xa0));
    param_1 = (FCommonInputKeyBrushConfiguration *)(pFVar2 + 1);
  }
  return;
}

// DestructItems<FCommonInputKeySetBrushConfiguration,int> @ 14a76f0f0

void __cdecl
DestructItems<FCommonInputKeySetBrushConfiguration,int>
          (FCommonInputKeySetBrushConfiguration *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateBrush *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->KeyBrush;
    do {
      pTVar1 = (pFVar2->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
      pFVar2->_padding_ = (longlong)&___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      DestructItems<FKey,int>
                (*(FKey **)((longlong)(pFVar2 + -1) + 0xa0),*(int *)((longlong)(pFVar2 + -1) + 0xa8)
                );
      if (*(void **)((longlong)(pFVar2 + -1) + 0xa0) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -1) + 0xa0));
      }
      pFVar2 = (FSlateBrush *)((longlong)(pFVar2 + 1) + 0x10);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FInputDeviceIdentifierPair,int> @ 14a76f160

void __cdecl
DestructItems<FInputDeviceIdentifierPair,int>(FInputDeviceIdentifierPair *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->HardwareDeviceIdentifier;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 1) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftClassPtr<UCommonInputBaseControllerData>,int> @ 14a76f1a0

void __cdecl
DestructItems<TSoftClassPtr<UCommonInputBaseControllerData>,int>
          (TSoftClassPtr<UCommonInputBaseControllerData> *param_1,int param_2)

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

// GetTypeName<UCommonInputPlatformSettings> @ 14a76f660

FString * __cdecl GetTypeName<UCommonInputPlatformSettings>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UCommonInputPlatformSettings::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSiftDown<FCommonInputKeyBrushConfiguration,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FCommonInputKeyBrushConfiguration,`UCommonInputBaseControllerData::PreSave'::__l5::<lambda_1>_>_>_> @ 14a76f6a0

void __cdecl
AlgoImpl::
HeapSiftDown<FCommonInputKeyBrushConfiguration,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FCommonInputKeyBrushConfiguration,_UCommonInputBaseControllerData::PreSave_::__l5::<lambda_1>_>_>_>
          (FCommonInputKeyBrushConfiguration *param_1,int param_2,int param_3,
          FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<FCommonInputKeyBrushConfiguration,_public:_virtual_void___cdecl_UCommonInputBaseControllerData::PreSave(FObjectPreSaveContext)_::_5_::<lambda_1>_>_>
          *param_5)

{
  int iVar1;
  FName FVar2;
  FKeyDetails *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FDeprecateSlateVector2D FVar10;
  TObjectPtr<UObject>_u_0 TVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  TVector2<float>_u_0 TVar19;
  TVector2<float>_u_0 TVar20;
  undefined8 uVar21;
  FSlateSharedHandleData *pFVar22;
  TReferenceControllerBase<1> *pTVar23;
  FName FVar24;
  FKeyDetails *pFVar25;
  longlong lVar26;
  undefined8 uVar27;
  TObjectPtr<UObject>_u_0 TVar28;
  double dVar29;
  TVector2<float>_u_0 TVar30;
  FSlateSharedHandleData *pFVar31;
  FName FVar32;
  float fVar33;
  float fVar34;
  TEnumAsByte<ESlateBrushRoundingType::Type> TVar35;
  undefined6 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  TEnumAsByte<ESlateBrushRoundingType::Type> TVar41;
  bool bVar42;
  undefined6 uVar43;
  bool bVar44;
  int iVar45;
  FCommonInputKeyBrushConfiguration *pFVar46;
  FCommonInputKeyBrushConfiguration *pFVar47;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar1 = param_2 * 2;
    iVar45 = iVar1 + 1;
    if (iVar1 + 2 < param_3) {
      bVar44 = `UCommonInputBaseControllerData::PreSave'::__l5::<lambda_1>::operator()
                         (param_5->Predicate->Predicate,param_1 + (iVar1 + 2),param_1 + iVar45);
      if (bVar44) {
        iVar45 = iVar1;
      }
      iVar45 = iVar45 + 1;
    }
    pFVar47 = param_1 + iVar45;
    pFVar46 = param_1 + param_2;
    bVar44 = `UCommonInputBaseControllerData::PreSave'::__l5::<lambda_1>::operator()
                       (param_5->Predicate->Predicate,pFVar46,pFVar47);
    if (!bVar44) break;
    FVar2 = (pFVar46->Key).KeyName;
    pFVar3 = (pFVar46->Key).KeyDetails.Object;
    pTVar4 = (pFVar46->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    lVar5 = pFVar46->_padding_;
    lVar6 = (pFVar46->KeyBrush)._padding_;
    uVar7 = *(undefined8 *)&(pFVar46->KeyBrush).TintColor.SpecifiedColor.field0_0x0;
    uVar8 = *(undefined8 *)((longlong)&(pFVar46->KeyBrush).TintColor.SpecifiedColor.field0_0x0 + 8);
    uVar9 = *(undefined8 *)&(pFVar46->KeyBrush).TintColor.ColorUseRule;
    FVar10 = (pFVar46->KeyBrush).ImageSize;
    fVar37 = (pFVar46->KeyBrush).Margin.Left;
    fVar38 = (pFVar46->KeyBrush).Margin.Top;
    fVar39 = (pFVar46->KeyBrush).Margin.Right;
    fVar40 = (pFVar46->KeyBrush).Margin.Bottom;
    TVar11 = (pFVar46->KeyBrush).ResourceObject.field0_0x0;
    dVar12 = (pFVar46->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X;
    dVar13 = (pFVar46->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y;
    dVar14 = (pFVar46->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z;
    dVar15 = (pFVar46->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W;
    uVar16 = *(undefined8 *)&(pFVar46->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0;
    uVar17 = *(undefined8 *)
              ((longlong)&(pFVar46->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8);
    uVar18 = *(undefined8 *)&(pFVar46->KeyBrush).OutlineSettings.Color.ColorUseRule;
    TVar41.Value = (pFVar46->KeyBrush).OutlineSettings.RoundingType.Value;
    bVar42 = (pFVar46->KeyBrush).OutlineSettings.bUseBrushTransparency;
    uVar43 = *(undefined6 *)&(pFVar46->KeyBrush).OutlineSettings.field_0x3a;
    TVar19 = (pFVar46->KeyBrush).UVRegion.Min.field0_0x0;
    TVar20 = (pFVar46->KeyBrush).UVRegion.Max.field0_0x0;
    uVar21 = *(undefined8 *)&(pFVar46->KeyBrush).UVRegion.bIsValid;
    pFVar22 = (pFVar46->KeyBrush).ResourceHandle.Data.Object;
    pTVar23 = (pFVar46->KeyBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
    FVar24 = (pFVar46->KeyBrush).ResourceName;
    pFVar25 = (pFVar47->Key).KeyDetails.Object;
    (pFVar46->Key).KeyName = (pFVar47->Key).KeyName;
    (pFVar46->Key).KeyDetails.Object = pFVar25;
    lVar26 = pFVar47->_padding_;
    (pFVar46->Key).KeyDetails.SharedReferenceCount.ReferenceController =
         (pFVar47->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    pFVar46->_padding_ = lVar26;
    uVar27 = *(undefined8 *)&(pFVar47->KeyBrush).TintColor.SpecifiedColor.field0_0x0;
    (pFVar46->KeyBrush)._padding_ = (pFVar47->KeyBrush)._padding_;
    *(undefined8 *)&(pFVar46->KeyBrush).TintColor.SpecifiedColor.field0_0x0 = uVar27;
    uVar27 = *(undefined8 *)&(pFVar47->KeyBrush).TintColor.ColorUseRule;
    *(undefined8 *)((longlong)&(pFVar46->KeyBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
         *(undefined8 *)((longlong)&(pFVar47->KeyBrush).TintColor.SpecifiedColor.field0_0x0 + 8);
    *(undefined8 *)&(pFVar46->KeyBrush).TintColor.ColorUseRule = uVar27;
    fVar33 = (pFVar47->KeyBrush).Margin.Left;
    fVar34 = (pFVar47->KeyBrush).Margin.Top;
    (pFVar46->KeyBrush).ImageSize = (pFVar47->KeyBrush).ImageSize;
    (pFVar46->KeyBrush).Margin.Left = fVar33;
    (pFVar46->KeyBrush).Margin.Top = fVar34;
    fVar33 = (pFVar47->KeyBrush).Margin.Bottom;
    TVar28 = (pFVar47->KeyBrush).ResourceObject.field0_0x0;
    (pFVar46->KeyBrush).Margin.Right = (pFVar47->KeyBrush).Margin.Right;
    (pFVar46->KeyBrush).Margin.Bottom = fVar33;
    (pFVar46->KeyBrush).ResourceObject.field0_0x0 = TVar28;
    dVar29 = (pFVar47->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y;
    (pFVar46->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X =
         (pFVar47->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X;
    (pFVar46->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y = dVar29;
    dVar29 = (pFVar47->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W;
    (pFVar46->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z =
         (pFVar47->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z;
    (pFVar46->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W = dVar29;
    uVar27 = *(undefined8 *)
              ((longlong)&(pFVar47->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8);
    *(undefined8 *)&(pFVar46->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 =
         *(undefined8 *)&(pFVar47->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0;
    *(undefined8 *)
     ((longlong)&(pFVar46->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8) = uVar27;
    TVar35.Value = (pFVar47->KeyBrush).OutlineSettings.RoundingType.Value;
    bVar44 = (pFVar47->KeyBrush).OutlineSettings.bUseBrushTransparency;
    uVar36 = *(undefined6 *)&(pFVar47->KeyBrush).OutlineSettings.field_0x3a;
    *(undefined8 *)&(pFVar46->KeyBrush).OutlineSettings.Color.ColorUseRule =
         *(undefined8 *)&(pFVar47->KeyBrush).OutlineSettings.Color.ColorUseRule;
    (pFVar46->KeyBrush).OutlineSettings.RoundingType =
         (TEnumAsByte<ESlateBrushRoundingType::Type>)TVar35.Value;
    (pFVar46->KeyBrush).OutlineSettings.bUseBrushTransparency = bVar44;
    *(undefined6 *)&(pFVar46->KeyBrush).OutlineSettings.field_0x3a = uVar36;
    TVar30 = (pFVar47->KeyBrush).UVRegion.Max.field0_0x0;
    (pFVar46->KeyBrush).UVRegion.Min.field0_0x0 = (pFVar47->KeyBrush).UVRegion.Min.field0_0x0;
    (pFVar46->KeyBrush).UVRegion.Max.field0_0x0 = TVar30;
    pFVar31 = (pFVar47->KeyBrush).ResourceHandle.Data.Object;
    *(undefined8 *)&(pFVar46->KeyBrush).UVRegion.bIsValid =
         *(undefined8 *)&(pFVar47->KeyBrush).UVRegion.bIsValid;
    (pFVar46->KeyBrush).ResourceHandle.Data.Object = pFVar31;
    FVar32 = (pFVar47->KeyBrush).ResourceName;
    (pFVar46->KeyBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController =
         (pFVar47->KeyBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
    (pFVar46->KeyBrush).ResourceName = FVar32;
    (pFVar47->Key).KeyName = FVar2;
    (pFVar47->Key).KeyDetails.Object = pFVar3;
    (pFVar47->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar4;
    pFVar47->_padding_ = lVar5;
    (pFVar47->KeyBrush)._padding_ = lVar6;
    *(undefined8 *)&(pFVar47->KeyBrush).TintColor.SpecifiedColor.field0_0x0 = uVar7;
    *(undefined8 *)((longlong)&(pFVar47->KeyBrush).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar8;
    *(undefined8 *)&(pFVar47->KeyBrush).TintColor.ColorUseRule = uVar9;
    (pFVar47->KeyBrush).ImageSize = FVar10;
    (pFVar47->KeyBrush).Margin.Left = fVar37;
    (pFVar47->KeyBrush).Margin.Top = fVar38;
    (pFVar47->KeyBrush).Margin.Right = fVar39;
    (pFVar47->KeyBrush).Margin.Bottom = fVar40;
    (pFVar47->KeyBrush).ResourceObject.field0_0x0 = TVar11;
    (pFVar47->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X = dVar12;
    (pFVar47->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y = dVar13;
    (pFVar47->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z = dVar14;
    (pFVar47->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W = dVar15;
    *(undefined8 *)&(pFVar47->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 = uVar16;
    *(undefined8 *)
     ((longlong)&(pFVar47->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8) = uVar17;
    *(undefined8 *)&(pFVar47->KeyBrush).OutlineSettings.Color.ColorUseRule = uVar18;
    (pFVar47->KeyBrush).OutlineSettings.RoundingType =
         (TEnumAsByte<ESlateBrushRoundingType::Type>)TVar41.Value;
    (pFVar47->KeyBrush).OutlineSettings.bUseBrushTransparency = bVar42;
    *(undefined6 *)&(pFVar47->KeyBrush).OutlineSettings.field_0x3a = uVar43;
    (pFVar47->KeyBrush).UVRegion.Min.field0_0x0 = TVar19;
    (pFVar47->KeyBrush).UVRegion.Max.field0_0x0 = TVar20;
    *(undefined8 *)&(pFVar47->KeyBrush).UVRegion.bIsValid = uVar21;
    (pFVar47->KeyBrush).ResourceHandle.Data.Object = pFVar22;
    (pFVar47->KeyBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController = pTVar23;
    (pFVar47->KeyBrush).ResourceName = FVar24;
    param_2 = iVar45;
  }
  return;
}

// InternalConstructor<UCommonInputActionDomain> @ 14a76f910

void __cdecl InternalConstructor<UCommonInputActionDomain>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UCommonInputActionDomain__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined2 *)((longlong)&this[1]._padding_ + 1) = 0x101;
  }
  return;
}

// InternalConstructor<UCommonInputActionDomainTable> @ 14a76f960

void __cdecl InternalConstructor<UCommonInputActionDomainTable>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UCommonInputActionDomainTable__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
  }
  return;
}

// InternalConstructor<UCommonInputBaseControllerData> @ 14a76f9b0

void __cdecl InternalConstructor<UCommonInputBaseControllerData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UCommonInputBaseControllerData__6B_;
    *(undefined8 *)&this[1].field_0x4 = 0;
    FText::FText((FText *)&this[1].field_0x10);
    FText::FText((FText *)&this[1].field_0x20);
    FText::FText((FText *)&this[2].field_0x8);
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this[3].field_0x18,0);
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this[4].field_0x18,0);
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UCommonInputPlatformSettings> @ 14a76fa90

void __cdecl InternalConstructor<UCommonInputPlatformSettings>(FObjectInitializer *param_1)

{
  UPlatformSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UPlatformSettings *)param_1->Obj;
  if (this != (UPlatformSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UPlatformSettings::UPlatformSettings(this,pFVar1);
    *(undefined4 *)&this[1]._padding_ = 0x1000001;
    this->_padding_ = (longlong)&___7UCommonInputPlatformSettings__6B_;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ConfigPlatformName.ComparisonIndex = 0;
    this[1].ConfigPlatformName.Number = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(FName *)((longlong)&this[1]._padding_ + 4) = FCommonInputDefaults::GamepadGeneric;
  }
  return;
}

// InternalConstructor<UCommonInputSettings> @ 14a76faf0

void __cdecl InternalConstructor<UCommonInputSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  UClass *local_res8;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UCommonInputSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].CategoryName.ComparisonIndex = 0;
    this[1].CategoryName.Number = 0;
    this[1].SectionName.ComparisonIndex = 0;
    this[1].SectionName.Number = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].CategoryName.ComparisonIndex.Value = 0;
    this[2].CategoryName.Number = 0x80;
    this[2].SectionName.ComparisonIndex.Value = 0xffffffff;
    this[2].SectionName.Number = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0x4008000000000000;
    this[3].CategoryName.ComparisonIndex = 0;
    this[3].CategoryName.Number = 0x3ff00000;
    *(undefined1 *)&this[3]._padding_ = 1;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x1e;
    this[3].SectionName.ComparisonIndex.Value = 0x1000100;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[4]._padding_,0);
    this[4].CategoryName.ComparisonIndex = 0;
    this[4].CategoryName.Number = 0;
    this[4].SectionName.ComparisonIndex = 0;
    this[4].SectionName.Number = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0;
    this[5].SectionName.ComparisonIndex = 0;
    this[5].SectionName.Number = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    *(undefined1 *)&this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    local_res8 = UCommonInputPlatformSettings::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FPerPlatformSettings::Initialize
              ((FPerPlatformSettings *)&this[1].CategoryName,
               (TSubclassOf<UPlatformSettings>)&local_res8);
  }
  return;
}

// InternalConstructor<UCommonInputSubsystem> @ 14a76fc90

void __cdecl InternalConstructor<UCommonInputSubsystem>(FObjectInitializer *param_1)

{
  ULocalPlayerSubsystem *this;
  
  this = (ULocalPlayerSubsystem *)param_1->Obj;
  if (this != (ULocalPlayerSubsystem *)0x0) {
    ULocalPlayerSubsystem::ULocalPlayerSubsystem(this);
    *(undefined ***)this = &___7UCommonInputSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x14 = 0;
    this[3].field_0x1c = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x28 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 2;
    *(undefined4 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x1c = 0x80;
    *(undefined4 *)&this[4].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x24 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined4 *)&this[5].field_0x8 = 0;
    this[5].field_0x11 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UCommonUIHoldData> @ 14a76fd70

void __cdecl InternalConstructor<UCommonUIHoldData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UCommonUIHoldData__6B_;
    *(undefined8 *)(this + 1) = 0x3f400000;
    *(undefined8 *)&this[1].field_0x8 = 0x3f400000;
    *(undefined8 *)&this[1].field_0x10 = 0x3f400000;
  }
  return;
}

// InternalConstructor<UCommonUIInputData> @ 14a76fdc0

void __cdecl InternalConstructor<UCommonUIInputData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UCommonUIInputData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)(this + 2) = 0;
    FUtf8String::Reset((FUtf8String *)&this[2].field_0x10,0);
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UCommonInputActionDomain> @ 14a76fe40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCommonInputActionDomain>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCommonInputActionDomain::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UCommonInputActionDomain__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined2 *)((longlong)&this[1]._padding_ + 1) = 0x101;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCommonInputActionDomainTable> @ 14a76ff00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCommonInputActionDomainTable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCommonInputActionDomainTable::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UCommonInputActionDomainTable__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCommonInputBaseControllerData> @ 14a76ffc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCommonInputBaseControllerData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCommonInputBaseControllerData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCommonInputBaseControllerData__6B_;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    FText::FText((FText *)&pUVar1[1].field_0x10);
    FText::FText((FText *)&pUVar1[1].field_0x20);
    FText::FText((FText *)&pUVar1[2].field_0x8);
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[3].field_0x18,0);
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[4].field_0x18,0);
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCommonInputPlatformSettings> @ 14a770110

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCommonInputPlatformSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPlatformSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCommonInputPlatformSettings::GetPrivateStaticClass();
  this = (UPlatformSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPlatformSettings *)0x0) {
    UPlatformSettings::UPlatformSettings(this,param_1);
    this->_padding_ = (longlong)&___7UCommonInputPlatformSettings__6B_;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ConfigPlatformName.ComparisonIndex = 0;
    this[1].ConfigPlatformName.Number = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCommonInputSettings> @ 14a7701d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCommonInputSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCommonInputSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UCommonInputSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].CategoryName.ComparisonIndex = 0;
    this[1].CategoryName.Number = 0;
    this[1].SectionName.ComparisonIndex = 0;
    this[1].SectionName.Number = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].CategoryName.ComparisonIndex.Value = 0;
    this[2].CategoryName.Number = 0x80;
    this[2].SectionName.ComparisonIndex.Value = 0xffffffff;
    this[2].SectionName.Number = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0x4008000000000000;
    this[3].CategoryName.ComparisonIndex = 0;
    this[3].CategoryName.Number = 0x3ff00000;
    *(undefined1 *)&this[3]._padding_ = 1;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x1e;
    this[3].SectionName.ComparisonIndex.Value = 0x1000100;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[4]._padding_,0);
    this[4].CategoryName.ComparisonIndex = 0;
    this[4].CategoryName.Number = 0;
    this[4].SectionName.ComparisonIndex = 0;
    this[4].SectionName.Number = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0;
    this[5].SectionName.ComparisonIndex = 0;
    this[5].SectionName.Number = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCommonInputSubsystem> @ 14a7703a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCommonInputSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULocalPlayerSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCommonInputSubsystem::GetPrivateStaticClass();
  this = (ULocalPlayerSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ULocalPlayerSubsystem *)0x0) {
    ULocalPlayerSubsystem::ULocalPlayerSubsystem(this,param_1);
    *(undefined4 *)&this[2].field_0x28 = 0;
    *(undefined ***)this = &___7UCommonInputSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 2;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x14 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x28 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    this[3].field_0x1c = 0;
    *(undefined4 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x1c = 0x80;
    *(undefined4 *)&this[4].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x24 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined4 *)&this[5].field_0x8 = 0;
    this[5].field_0x11 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCommonUIHoldData> @ 14a770500

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCommonUIHoldData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCommonUIHoldData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCommonUIHoldData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCommonUIInputData> @ 14a7705c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCommonUIInputData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCommonUIInputData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCommonUIInputData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[2].field_0x10,0);
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FCommonInputKeyBrushConfiguration,int,FIdentityFunctor,TDereferenceWrapper<FCommonInputKeyBrushConfiguration,`UCommonInputBaseControllerData::PreSave'::__l5::<lambda_1>_>_> @ 14a7706a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<FCommonInputKeyBrushConfiguration,int,FIdentityFunctor,TDereferenceWrapper<FCommonInputKeyBrushConfiguration,_UCommonInputBaseControllerData::PreSave_::__l5::<lambda_1>_>_>
          (FCommonInputKeyBrushConfiguration *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FCommonInputKeyBrushConfiguration,_public:_virtual_void___cdecl_UCommonInputBaseControllerData::PreSave(FObjectPreSaveContext)_::_5_::<lambda_1>_>
          param_4)

{
  FSlateColor *pFVar1;
  FName *pFVar2;
  code *pcVar3;
  FKeyDetails *pFVar4;
  undefined8 uVar5;
  TObjectPtr<UObject>_u_0 TVar6;
  double dVar7;
  TVector2<float>_u_0 TVar8;
  FSlateSharedHandleData *pFVar9;
  FName FVar10;
  float fVar11;
  TEnumAsByte<ESlateBrushRoundingType::Type> TVar12;
  undefined6 uVar13;
  FNameEntryId FVar14;
  uint uVar15;
  bool bVar16;
  int iVar17;
  FCommonInputKeyBrushConfiguration *pFVar18;
  FCommonInputKeyBrushConfiguration *pFVar19;
  int iVar20;
  FCommonInputKeyBrushConfiguration **ppFVar21;
  FCommonInputKeyBrushConfiguration *pFVar22;
  FCommonInputKeyBrushConfiguration *pFVar23;
  FCommonInputKeyBrushConfiguration *pFVar24;
  longlong lVar25;
  FCommonInputKeyBrushConfiguration *pFVar26;
  float fVar27;
  undefined1 auStackY_498 [32];
  FIdentityFunctor local_468 [8];
  FIdentityFunctor local_460 [8];
  FIdentityFunctor local_458;
  TDereferenceWrapper<FCommonInputKeyBrushConfiguration,_public:_virtual_void___cdecl_UCommonInputBaseControllerData::PreSave(FObjectPreSaveContext)_::_5_::<lambda_1>_>
  local_450;
  TReversePredicate<TDereferenceWrapper<FCommonInputKeyBrushConfiguration,_public:_virtual_void___cdecl_UCommonInputBaseControllerData::PreSave(FObjectPreSaveContext)_::_5_::<lambda_1>_>_>
  local_448;
  TReversePredicate<TDereferenceWrapper<FCommonInputKeyBrushConfiguration,_public:_virtual_void___cdecl_UCommonInputBaseControllerData::PreSave(FObjectPreSaveContext)_::_5_::<lambda_1>_>_>
  local_440 [3];
  FCommonInputKeyBrushConfiguration *local_428;
  FName local_418;
  FName FStack_410;
  FName local_408;
  FName FStack_400;
  FName local_3f8;
  FName FStack_3f0;
  FName local_3e8;
  FName FStack_3e0;
  FName local_3d8;
  FName FStack_3d0;
  FName local_3c8;
  TObjectPtr<UObject>_u_0 TStack_3c0;
  FName local_3b8;
  FName FStack_3b0;
  FName local_3a8;
  FName FStack_3a0;
  FName local_398;
  FName FStack_390;
  FName local_388;
  FName FStack_380;
  TVector2<float>_u_0 local_378;
  TVector2<float>_u_0 TStack_370;
  FName local_368;
  FName FStack_360;
  FName local_358;
  FName FStack_350;
  FCommonInputKeyBrushConfiguration *local_348;
  FCommonInputKeyBrushConfiguration *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_498;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_458 = param_3;
    local_348 = param_1;
    fVar27 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar27;
    memset(local_330,0,0x2e8);
    ppFVar21 = &local_348;
    do {
      pFVar22 = ppFVar21[1];
      pFVar18 = *ppFVar21;
      local_428 = ppFVar21[2];
      iVar17 = (int)(((longlong)pFVar22 - (longlong)pFVar18) / 0xd0) + 1;
      local_450.Predicate._0_4_ = (int)local_428;
      pFVar26 = pFVar18;
      if ((int)local_428 != 0) {
LAB_14a770795:
        if (8 < iVar17) {
          pFVar23 = pFVar22 + 1;
          pFVar18 = pFVar26 + iVar17 / 2;
          local_418 = (pFVar18->Key).KeyName;
          FStack_410 = (FName)(pFVar18->Key).KeyDetails.Object;
          local_408 = (FName)(pFVar18->Key).KeyDetails.SharedReferenceCount.ReferenceController;
          FStack_400 = (FName)pFVar18->_padding_;
          local_3f8 = (FName)(pFVar18->KeyBrush)._padding_;
          FStack_3f0 = *(FName *)&(pFVar18->KeyBrush).TintColor.SpecifiedColor.field0_0x0;
          local_3e8 = *(FName *)((longlong)&(pFVar18->KeyBrush).TintColor.SpecifiedColor.field0_0x0
                                + 8);
          FStack_3e0 = *(FName *)&(pFVar18->KeyBrush).TintColor.ColorUseRule;
          local_3d8 = *(FName *)&(pFVar18->KeyBrush).ImageSize;
          FStack_3d0.ComparisonIndex.Value = (uint)(pFVar18->KeyBrush).Margin.Left;
          FStack_3d0.Number = (uint)(pFVar18->KeyBrush).Margin.Top;
          local_3c8.ComparisonIndex.Value = (uint)(pFVar18->KeyBrush).Margin.Right;
          local_3c8.Number = (uint)(pFVar18->KeyBrush).Margin.Bottom;
          TStack_3c0 = (pFVar18->KeyBrush).ResourceObject.field0_0x0;
          local_3b8 = (FName)(pFVar18->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X;
          FStack_3b0 = (FName)(pFVar18->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y;
          local_3a8 = (FName)(pFVar18->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z;
          FStack_3a0 = (FName)(pFVar18->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W;
          local_398 = *(FName *)&(pFVar18->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0
          ;
          FStack_390 = *(FName *)((longlong)
                                  &(pFVar18->KeyBrush).OutlineSettings.Color.SpecifiedColor.
                                   field0_0x0 + 8);
          local_388 = *(FName *)&(pFVar18->KeyBrush).OutlineSettings.Color.ColorUseRule;
          FStack_380.ComparisonIndex.Value._0_1_ = (pFVar18->KeyBrush).OutlineSettings.RoundingType;
          FStack_380.ComparisonIndex.Value._1_1_ =
               (pFVar18->KeyBrush).OutlineSettings.bUseBrushTransparency;
          FStack_380._2_6_ = *(undefined6 *)&(pFVar18->KeyBrush).OutlineSettings.field_0x3a;
          local_378 = (pFVar18->KeyBrush).UVRegion.Min.field0_0x0;
          TStack_370 = (pFVar18->KeyBrush).UVRegion.Max.field0_0x0;
          local_368 = *(FName *)&(pFVar18->KeyBrush).UVRegion.bIsValid;
          FStack_360 = (FName)(pFVar18->KeyBrush).ResourceHandle.Data.Object;
          local_358 = (FName)(pFVar18->KeyBrush).ResourceHandle.Data.SharedReferenceCount.
                             ReferenceController;
          FStack_350 = (pFVar18->KeyBrush).ResourceName;
          pFVar4 = (pFVar26->Key).KeyDetails.Object;
          (pFVar18->Key).KeyName = (pFVar26->Key).KeyName;
          (pFVar18->Key).KeyDetails.Object = pFVar4;
          lVar25 = pFVar26->_padding_;
          (pFVar18->Key).KeyDetails.SharedReferenceCount.ReferenceController =
               (pFVar26->Key).KeyDetails.SharedReferenceCount.ReferenceController;
          pFVar18->_padding_ = lVar25;
          uVar5 = *(undefined8 *)&(pFVar26->KeyBrush).TintColor.SpecifiedColor.field0_0x0;
          (pFVar18->KeyBrush)._padding_ = (pFVar26->KeyBrush)._padding_;
          *(undefined8 *)&(pFVar18->KeyBrush).TintColor.SpecifiedColor.field0_0x0 = uVar5;
          uVar5 = *(undefined8 *)&(pFVar26->KeyBrush).TintColor.ColorUseRule;
          *(undefined8 *)((longlong)&(pFVar18->KeyBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
               *(undefined8 *)
                ((longlong)&(pFVar26->KeyBrush).TintColor.SpecifiedColor.field0_0x0 + 8);
          *(undefined8 *)&(pFVar18->KeyBrush).TintColor.ColorUseRule = uVar5;
          fVar27 = (pFVar26->KeyBrush).Margin.Left;
          fVar11 = (pFVar26->KeyBrush).Margin.Top;
          (pFVar18->KeyBrush).ImageSize = (pFVar26->KeyBrush).ImageSize;
          (pFVar18->KeyBrush).Margin.Left = fVar27;
          (pFVar18->KeyBrush).Margin.Top = fVar11;
          fVar27 = (pFVar26->KeyBrush).Margin.Bottom;
          TVar6 = (pFVar26->KeyBrush).ResourceObject.field0_0x0;
          (pFVar18->KeyBrush).Margin.Right = (pFVar26->KeyBrush).Margin.Right;
          (pFVar18->KeyBrush).Margin.Bottom = fVar27;
          (pFVar18->KeyBrush).ResourceObject.field0_0x0 = TVar6;
          dVar7 = (pFVar26->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y;
          (pFVar18->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X =
               (pFVar26->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X;
          (pFVar18->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y = dVar7;
          dVar7 = (pFVar26->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W;
          (pFVar18->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z =
               (pFVar26->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z;
          (pFVar18->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W = dVar7;
          uVar5 = *(undefined8 *)
                   ((longlong)&(pFVar26->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 +
                   8);
          *(undefined8 *)&(pFVar18->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 =
               *(undefined8 *)&(pFVar26->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0;
          *(undefined8 *)
           ((longlong)&(pFVar18->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8) =
               uVar5;
          TVar12.Value = (pFVar26->KeyBrush).OutlineSettings.RoundingType.Value;
          bVar16 = (pFVar26->KeyBrush).OutlineSettings.bUseBrushTransparency;
          uVar13 = *(undefined6 *)&(pFVar26->KeyBrush).OutlineSettings.field_0x3a;
          *(undefined8 *)&(pFVar18->KeyBrush).OutlineSettings.Color.ColorUseRule =
               *(undefined8 *)&(pFVar26->KeyBrush).OutlineSettings.Color.ColorUseRule;
          (pFVar18->KeyBrush).OutlineSettings.RoundingType =
               (TEnumAsByte<ESlateBrushRoundingType::Type>)TVar12.Value;
          (pFVar18->KeyBrush).OutlineSettings.bUseBrushTransparency = bVar16;
          *(undefined6 *)&(pFVar18->KeyBrush).OutlineSettings.field_0x3a = uVar13;
          TVar8 = (pFVar26->KeyBrush).UVRegion.Max.field0_0x0;
          (pFVar18->KeyBrush).UVRegion.Min.field0_0x0 = (pFVar26->KeyBrush).UVRegion.Min.field0_0x0;
          (pFVar18->KeyBrush).UVRegion.Max.field0_0x0 = TVar8;
          pFVar9 = (pFVar26->KeyBrush).ResourceHandle.Data.Object;
          *(undefined8 *)&(pFVar18->KeyBrush).UVRegion.bIsValid =
               *(undefined8 *)&(pFVar26->KeyBrush).UVRegion.bIsValid;
          (pFVar18->KeyBrush).ResourceHandle.Data.Object = pFVar9;
          FVar10 = (pFVar26->KeyBrush).ResourceName;
          (pFVar18->KeyBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController =
               (pFVar26->KeyBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
          (pFVar18->KeyBrush).ResourceName = FVar10;
          (pFVar26->Key).KeyName = local_418;
          (pFVar26->Key).KeyDetails.Object = (FKeyDetails *)FStack_410;
          (pFVar26->Key).KeyDetails.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)local_408;
          pFVar26->_padding_ = (longlong)FStack_400;
          (pFVar26->KeyBrush)._padding_ = (longlong)local_3f8;
          *(FName *)&(pFVar26->KeyBrush).TintColor.SpecifiedColor.field0_0x0 = FStack_3f0;
          *(FName *)((longlong)&(pFVar26->KeyBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
               local_3e8;
          *(FName *)&(pFVar26->KeyBrush).TintColor.ColorUseRule = FStack_3e0;
          (pFVar26->KeyBrush).ImageSize = (FDeprecateSlateVector2D)local_3d8;
          (pFVar26->KeyBrush).Margin.Left = (float)FStack_3d0.ComparisonIndex.Value;
          (pFVar26->KeyBrush).Margin.Top = (float)FStack_3d0.Number;
          (pFVar26->KeyBrush).Margin.Right = (float)local_3c8.ComparisonIndex.Value;
          (pFVar26->KeyBrush).Margin.Bottom = (float)local_3c8.Number;
          (pFVar26->KeyBrush).ResourceObject.field0_0x0 = TStack_3c0;
          (pFVar26->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X = (double)local_3b8;
          (pFVar26->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y = (double)FStack_3b0;
          pFVar18 = pFVar26;
          pFVar19 = pFVar26;
          do {
            (pFVar19->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z = (double)local_3a8;
            (pFVar19->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W = (double)FStack_3a0;
            *(FName *)&(pFVar19->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 =
                 local_398;
            *(FName *)((longlong)
                       &(pFVar19->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8) =
                 FStack_390;
            *(FName *)&(pFVar19->KeyBrush).OutlineSettings.Color.ColorUseRule = local_388;
            *(FName *)&(pFVar19->KeyBrush).OutlineSettings.RoundingType = FStack_380;
            (pFVar19->KeyBrush).UVRegion.Min.field0_0x0 = local_378;
            (pFVar19->KeyBrush).UVRegion.Max.field0_0x0 = TStack_370;
            *(FName *)&(pFVar19->KeyBrush).UVRegion.bIsValid = local_368;
            (pFVar19->KeyBrush).ResourceHandle.Data.Object = (FSlateSharedHandleData *)FStack_360;
            (pFVar19->KeyBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)local_358;
            (pFVar19->KeyBrush).ResourceName = FStack_350;
            do {
              pFVar19 = pFVar18;
              pFVar18 = pFVar19 + 1;
              if (pFVar22 < pFVar18) break;
              bVar16 = `UCommonInputBaseControllerData::PreSave'::__l5::<lambda_1>::operator()
                                 (param_4.Predicate,pFVar26,pFVar18);
            } while (!bVar16);
            do {
              pFVar24 = pFVar23;
              pFVar23 = pFVar24 + -1;
              if (pFVar23 <= pFVar26) break;
              bVar16 = `UCommonInputBaseControllerData::PreSave'::__l5::<lambda_1>::operator()
                                 (param_4.Predicate,pFVar23,pFVar26);
            } while (!bVar16);
            if (pFVar23 < pFVar18) goto LAB_14a770aec;
            local_418 = (pFVar18->Key).KeyName;
            FStack_410 = (FName)pFVar19[1].Key.KeyDetails.Object;
            local_408 = (FName)pFVar19[1].Key.KeyDetails.SharedReferenceCount.ReferenceController;
            FStack_400 = (FName)pFVar19[1]._padding_;
            local_3f8 = (FName)pFVar19[1].KeyBrush._padding_;
            FStack_3f0 = *(FName *)&pFVar19[1].KeyBrush.TintColor.SpecifiedColor.field0_0x0;
            local_3e8 = *(FName *)((longlong)
                                   &pFVar19[1].KeyBrush.TintColor.SpecifiedColor.field0_0x0 + 8);
            FStack_3e0 = *(FName *)&pFVar19[1].KeyBrush.TintColor.ColorUseRule;
            local_3d8 = *(FName *)&pFVar19[1].KeyBrush.ImageSize;
            FStack_3d0.ComparisonIndex.Value = (uint)pFVar19[1].KeyBrush.Margin.Left;
            FStack_3d0.Number = (uint)pFVar19[1].KeyBrush.Margin.Top;
            local_3c8.ComparisonIndex.Value = (uint)pFVar19[1].KeyBrush.Margin.Right;
            local_3c8.Number = (uint)pFVar19[1].KeyBrush.Margin.Bottom;
            TStack_3c0 = pFVar19[1].KeyBrush.ResourceObject.field0_0x0;
            local_3b8 = (FName)pFVar19[1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.X;
            FStack_3b0 = (FName)pFVar19[1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.Y;
            local_3a8 = (FName)pFVar19[1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.Z;
            FStack_3a0 = (FName)pFVar19[1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.W;
            local_398 = *(FName *)&pFVar19[1].KeyBrush.OutlineSettings.Color.SpecifiedColor.
                                   field0_0x0;
            FStack_390 = *(FName *)((longlong)
                                    &pFVar19[1].KeyBrush.OutlineSettings.Color.SpecifiedColor.
                                     field0_0x0 + 8);
            local_388 = *(FName *)&pFVar19[1].KeyBrush.OutlineSettings.Color.ColorUseRule;
            FStack_380.ComparisonIndex.Value._0_1_ =
                 pFVar19[1].KeyBrush.OutlineSettings.RoundingType;
            FStack_380.ComparisonIndex.Value._1_1_ =
                 pFVar19[1].KeyBrush.OutlineSettings.bUseBrushTransparency;
            FStack_380._2_6_ = *(undefined6 *)&pFVar19[1].KeyBrush.OutlineSettings.field_0x3a;
            local_378 = pFVar19[1].KeyBrush.UVRegion.Min.field0_0x0;
            TStack_370 = pFVar19[1].KeyBrush.UVRegion.Max.field0_0x0;
            local_368 = *(FName *)&pFVar19[1].KeyBrush.UVRegion.bIsValid;
            FStack_360 = (FName)pFVar19[1].KeyBrush.ResourceHandle.Data.Object;
            local_358 = (FName)pFVar19[1].KeyBrush.ResourceHandle.Data.SharedReferenceCount.
                               ReferenceController;
            FStack_350 = pFVar19[1].KeyBrush.ResourceName;
            pFVar4 = pFVar24[-1].Key.KeyDetails.Object;
            (pFVar18->Key).KeyName = (pFVar23->Key).KeyName;
            pFVar19[1].Key.KeyDetails.Object = pFVar4;
            lVar25 = pFVar24[-1]._padding_;
            pFVar19[1].Key.KeyDetails.SharedReferenceCount.ReferenceController =
                 pFVar24[-1].Key.KeyDetails.SharedReferenceCount.ReferenceController;
            pFVar19[1]._padding_ = lVar25;
            uVar5 = *(undefined8 *)&pFVar24[-1].KeyBrush.TintColor.SpecifiedColor.field0_0x0;
            pFVar19[1].KeyBrush._padding_ = pFVar24[-1].KeyBrush._padding_;
            *(undefined8 *)&pFVar19[1].KeyBrush.TintColor.SpecifiedColor.field0_0x0 = uVar5;
            uVar5 = *(undefined8 *)&pFVar24[-1].KeyBrush.TintColor.ColorUseRule;
            *(undefined8 *)((longlong)&pFVar19[1].KeyBrush.TintColor.SpecifiedColor.field0_0x0 + 8)
                 = *(undefined8 *)
                    ((longlong)&pFVar24[-1].KeyBrush.TintColor.SpecifiedColor.field0_0x0 + 8);
            *(undefined8 *)&pFVar19[1].KeyBrush.TintColor.ColorUseRule = uVar5;
            fVar27 = pFVar24[-1].KeyBrush.Margin.Left;
            fVar11 = pFVar24[-1].KeyBrush.Margin.Top;
            pFVar19[1].KeyBrush.ImageSize = pFVar24[-1].KeyBrush.ImageSize;
            pFVar19[1].KeyBrush.Margin.Left = fVar27;
            pFVar19[1].KeyBrush.Margin.Top = fVar11;
            fVar27 = pFVar24[-1].KeyBrush.Margin.Bottom;
            TVar6 = pFVar24[-1].KeyBrush.ResourceObject.field0_0x0;
            pFVar19[1].KeyBrush.Margin.Right = pFVar24[-1].KeyBrush.Margin.Right;
            pFVar19[1].KeyBrush.Margin.Bottom = fVar27;
            pFVar19[1].KeyBrush.ResourceObject.field0_0x0 = TVar6;
            dVar7 = pFVar24[-1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.Y;
            pFVar19[1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.X =
                 pFVar24[-1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.X;
            pFVar19[1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.Y = dVar7;
            dVar7 = pFVar24[-1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.W;
            pFVar19[1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.Z =
                 pFVar24[-1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.Z;
            pFVar19[1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.W = dVar7;
            uVar5 = *(undefined8 *)
                     ((longlong)
                      &pFVar24[-1].KeyBrush.OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8);
            *(undefined8 *)&pFVar19[1].KeyBrush.OutlineSettings.Color.SpecifiedColor.field0_0x0 =
                 *(undefined8 *)
                  &pFVar24[-1].KeyBrush.OutlineSettings.Color.SpecifiedColor.field0_0x0;
            *(undefined8 *)
             ((longlong)&pFVar19[1].KeyBrush.OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8) =
                 uVar5;
            TVar12.Value = pFVar24[-1].KeyBrush.OutlineSettings.RoundingType.Value;
            bVar16 = pFVar24[-1].KeyBrush.OutlineSettings.bUseBrushTransparency;
            uVar13 = *(undefined6 *)&pFVar24[-1].KeyBrush.OutlineSettings.field_0x3a;
            *(undefined8 *)&pFVar19[1].KeyBrush.OutlineSettings.Color.ColorUseRule =
                 *(undefined8 *)&pFVar24[-1].KeyBrush.OutlineSettings.Color.ColorUseRule;
            pFVar19[1].KeyBrush.OutlineSettings.RoundingType =
                 (TEnumAsByte<ESlateBrushRoundingType::Type>)TVar12.Value;
            pFVar19[1].KeyBrush.OutlineSettings.bUseBrushTransparency = bVar16;
            *(undefined6 *)&pFVar19[1].KeyBrush.OutlineSettings.field_0x3a = uVar13;
            TVar8 = pFVar24[-1].KeyBrush.UVRegion.Max.field0_0x0;
            pFVar19[1].KeyBrush.UVRegion.Min.field0_0x0 =
                 pFVar24[-1].KeyBrush.UVRegion.Min.field0_0x0;
            pFVar19[1].KeyBrush.UVRegion.Max.field0_0x0 = TVar8;
            pFVar9 = pFVar24[-1].KeyBrush.ResourceHandle.Data.Object;
            *(undefined8 *)&pFVar19[1].KeyBrush.UVRegion.bIsValid =
                 *(undefined8 *)&pFVar24[-1].KeyBrush.UVRegion.bIsValid;
            pFVar19[1].KeyBrush.ResourceHandle.Data.Object = pFVar9;
            FVar10 = pFVar24[-1].KeyBrush.ResourceName;
            pFVar19[1].KeyBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController =
                 pFVar24[-1].KeyBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController;
            pFVar19[1].KeyBrush.ResourceName = FVar10;
            pFVar19 = pFVar24 + -1;
            (pFVar23->Key).KeyName = local_418;
            pFVar24[-1].Key.KeyDetails.Object = (FKeyDetails *)FStack_410;
            pFVar24[-1].Key.KeyDetails.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)local_408;
            pFVar24[-1]._padding_ = (longlong)FStack_400;
            pFVar24[-1].KeyBrush._padding_ = (longlong)local_3f8;
            *(FName *)&pFVar24[-1].KeyBrush.TintColor.SpecifiedColor.field0_0x0 = FStack_3f0;
            *(FName *)((longlong)&pFVar24[-1].KeyBrush.TintColor.SpecifiedColor.field0_0x0 + 8) =
                 local_3e8;
            *(FName *)&pFVar24[-1].KeyBrush.TintColor.ColorUseRule = FStack_3e0;
            pFVar24[-1].KeyBrush.ImageSize = (FDeprecateSlateVector2D)local_3d8;
            pFVar24[-1].KeyBrush.Margin.Left = (float)FStack_3d0.ComparisonIndex.Value;
            pFVar24[-1].KeyBrush.Margin.Top = (float)FStack_3d0.Number;
            pFVar24[-1].KeyBrush.Margin.Right = (float)local_3c8.ComparisonIndex.Value;
            pFVar24[-1].KeyBrush.Margin.Bottom = (float)local_3c8.Number;
            pFVar24[-1].KeyBrush.ResourceObject.field0_0x0 = TStack_3c0;
            pFVar24[-1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.X = (double)local_3b8;
            pFVar24[-1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.Y = (double)FStack_3b0;
          } while( true );
        }
        for (; pFVar23 = pFVar26, pFVar18 = pFVar26, pFVar26 < pFVar22;
            pFVar22 = (FCommonInputKeyBrushConfiguration *)((longlong)pFVar22 + 0xffffffffffffff30))
        {
          while (pFVar19 = pFVar23, pFVar18 = pFVar18 + 1, pFVar18 <= pFVar22) {
            bVar16 = `UCommonInputBaseControllerData::PreSave'::__l5::<lambda_1>::operator()
                               (param_4.Predicate,pFVar19,pFVar18);
            pFVar23 = pFVar18;
            if (!bVar16) {
              pFVar23 = pFVar19;
            }
          }
          local_418 = (pFVar19->Key).KeyName;
          FStack_410 = (FName)(pFVar19->Key).KeyDetails.Object;
          local_408 = (FName)(pFVar19->Key).KeyDetails.SharedReferenceCount.ReferenceController;
          FStack_400 = (FName)pFVar19->_padding_;
          local_3f8 = (FName)(pFVar19->KeyBrush)._padding_;
          FStack_3f0 = *(FName *)&(pFVar19->KeyBrush).TintColor.SpecifiedColor.field0_0x0;
          pFVar1 = &(pFVar19->KeyBrush).OutlineSettings.Color;
          local_3e8 = *(FName *)((longlong)&(pFVar19->KeyBrush).TintColor.SpecifiedColor.field0_0x0
                                + 8);
          FStack_3e0 = *(FName *)&(pFVar19->KeyBrush).TintColor.ColorUseRule;
          local_3d8 = *(FName *)&(pFVar19->KeyBrush).ImageSize;
          FStack_3d0.ComparisonIndex.Value = (uint)(pFVar19->KeyBrush).Margin.Left;
          FStack_3d0.Number = (uint)(pFVar19->KeyBrush).Margin.Top;
          local_3c8.ComparisonIndex.Value = (uint)(pFVar19->KeyBrush).Margin.Right;
          local_3c8.Number = (uint)(pFVar19->KeyBrush).Margin.Bottom;
          TStack_3c0 = (pFVar19->KeyBrush).ResourceObject.field0_0x0;
          local_3b8 = (FName)(pFVar19->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X;
          FStack_3b0 = (FName)(pFVar19->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y;
          local_3a8 = (FName)(pFVar19->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z;
          FStack_3a0 = (FName)(pFVar19->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W;
          local_398 = *(FName *)&(pFVar1->SpecifiedColor).field0_0x0;
          FStack_390 = *(FName *)((longlong)
                                  &(pFVar19->KeyBrush).OutlineSettings.Color.SpecifiedColor.
                                   field0_0x0 + 8);
          local_388 = *(FName *)&(pFVar19->KeyBrush).OutlineSettings.Color.ColorUseRule;
          FStack_380 = *(FName *)&(pFVar19->KeyBrush).OutlineSettings.RoundingType;
          local_378 = (pFVar19->KeyBrush).UVRegion.Min.field0_0x0;
          TStack_370 = (pFVar19->KeyBrush).UVRegion.Max.field0_0x0;
          local_368 = *(FName *)&(pFVar19->KeyBrush).UVRegion.bIsValid;
          FStack_360 = (FName)(pFVar19->KeyBrush).ResourceHandle.Data.Object;
          local_358 = (FName)(pFVar19->KeyBrush).ResourceHandle.Data.SharedReferenceCount.
                             ReferenceController;
          FStack_350 = (pFVar19->KeyBrush).ResourceName;
          pFVar4 = *(FKeyDetails **)&((FKey *)((longlong)pFVar22 + 8))->KeyName;
          (pFVar19->Key).KeyName = *(FName *)pFVar22;
          (pFVar19->Key).KeyDetails.Object = pFVar4;
          lVar25 = *(longlong *)((longlong)pFVar22 + 0x18);
          (pFVar19->Key).KeyDetails.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)&((FKey *)((longlong)pFVar22 + 0x10))->KeyName;
          pFVar19->_padding_ = lVar25;
          uVar5 = ((FSlateBrush *)((longlong)pFVar22 + 0x28))->_padding_;
          (pFVar19->KeyBrush)._padding_ = ((FSlateBrush *)((longlong)pFVar22 + 0x20))->_padding_;
          *(undefined8 *)&(pFVar19->KeyBrush).TintColor.SpecifiedColor.field0_0x0 = uVar5;
          uVar5 = ((FSlateBrush *)((longlong)pFVar22 + 0x38))->_padding_;
          *(longlong *)((longlong)&(pFVar19->KeyBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
               ((FSlateBrush *)((longlong)pFVar22 + 0x30))->_padding_;
          *(undefined8 *)&(pFVar19->KeyBrush).TintColor.ColorUseRule = uVar5;
          uVar5 = ((FSlateBrush *)((longlong)pFVar22 + 0x48))->_padding_;
          (pFVar19->KeyBrush).ImageSize =
               (FDeprecateSlateVector2D)((FSlateBrush *)((longlong)pFVar22 + 0x40))->_padding_;
          (pFVar19->KeyBrush).Margin.Left = (float)(int)uVar5;
          (pFVar19->KeyBrush).Margin.Top = (float)(int)((ulonglong)uVar5 >> 0x20);
          uVar5 = ((FSlateBrush *)((longlong)pFVar22 + 0x50))->_padding_;
          TVar6 = (TObjectPtr<UObject>_u_0)((FSlateBrush *)((longlong)pFVar22 + 0x58))->_padding_;
          (pFVar19->KeyBrush).Margin.Right = (float)(int)uVar5;
          (pFVar19->KeyBrush).Margin.Bottom = (float)(int)((ulonglong)uVar5 >> 0x20);
          (pFVar19->KeyBrush).ResourceObject.field0_0x0 = TVar6;
          dVar7 = (double)((FSlateBrush *)((longlong)pFVar22 + 0x68))->_padding_;
          (pFVar19->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X =
               (double)((FSlateBrush *)((longlong)pFVar22 + 0x60))->_padding_;
          (pFVar19->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y = dVar7;
          dVar7 = (double)((FSlateBrush *)((longlong)pFVar22 + 0x78))->_padding_;
          (pFVar19->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z =
               (double)((FSlateBrush *)((longlong)pFVar22 + 0x70))->_padding_;
          (pFVar19->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W = dVar7;
          uVar5 = ((FSlateBrush *)((longlong)pFVar22 + 0x88))->_padding_;
          *(longlong *)&(pFVar1->SpecifiedColor).field0_0x0 =
               ((FSlateBrush *)((longlong)pFVar22 + 0x80))->_padding_;
          *(undefined8 *)
           ((longlong)&(pFVar19->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8) =
               uVar5;
          uVar5 = ((FSlateBrush *)((longlong)pFVar22 + 0x98))->_padding_;
          *(longlong *)&(pFVar19->KeyBrush).OutlineSettings.Color.ColorUseRule =
               ((FSlateBrush *)((longlong)pFVar22 + 0x90))->_padding_;
          (pFVar19->KeyBrush).OutlineSettings.RoundingType =
               (TEnumAsByte<ESlateBrushRoundingType::Type>)(char)uVar5;
          (pFVar19->KeyBrush).OutlineSettings.bUseBrushTransparency =
               (bool)(char)((ulonglong)uVar5 >> 8);
          *(int6 *)&(pFVar19->KeyBrush).OutlineSettings.field_0x3a =
               (int6)((ulonglong)uVar5 >> 0x10);
          TVar8 = (TVector2<float>_u_0)((FSlateBrush *)((longlong)pFVar22 + 0xa8))->_padding_;
          (pFVar19->KeyBrush).UVRegion.Min.field0_0x0 =
               (TVector2<float>_u_0)((FSlateBrush *)((longlong)pFVar22 + 0xa0))->_padding_;
          (pFVar19->KeyBrush).UVRegion.Max.field0_0x0 = TVar8;
          pFVar9 = (FSlateSharedHandleData *)((FSlateBrush *)((longlong)pFVar22 + 0xb8))->_padding_;
          *(longlong *)&(pFVar19->KeyBrush).UVRegion.bIsValid =
               ((FSlateBrush *)((longlong)pFVar22 + 0xb0))->_padding_;
          (pFVar19->KeyBrush).ResourceHandle.Data.Object = pFVar9;
          FVar10 = (FName)((FSlateBrush *)((longlong)pFVar22 + 200))->_padding_;
          (pFVar19->KeyBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)((FSlateBrush *)((longlong)pFVar22 + 0xc0))->_padding_
          ;
          (pFVar19->KeyBrush).ResourceName = FVar10;
          *(FName *)pFVar22 = local_418;
          ((FKey *)((longlong)pFVar22 + 8))->KeyName = FStack_410;
          ((FKey *)((longlong)pFVar22 + 0x10))->KeyName = local_408;
          *(FName *)((longlong)pFVar22 + 0x18) = FStack_400;
          ((FSlateBrush *)((longlong)pFVar22 + 0x20))->_padding_ = (longlong)local_3f8;
          ((FSlateBrush *)((longlong)pFVar22 + 0x28))->_padding_ = (longlong)FStack_3f0;
          ((FSlateBrush *)((longlong)pFVar22 + 0x30))->_padding_ = (longlong)local_3e8;
          ((FSlateBrush *)((longlong)pFVar22 + 0x38))->_padding_ = (longlong)FStack_3e0;
          ((FSlateBrush *)((longlong)pFVar22 + 0x40))->_padding_ = (longlong)local_3d8;
          ((FSlateBrush *)((longlong)pFVar22 + 0x48))->_padding_ = (longlong)FStack_3d0;
          ((FSlateBrush *)((longlong)pFVar22 + 0x50))->_padding_ = (longlong)local_3c8;
          ((FSlateBrush *)((longlong)pFVar22 + 0x58))->_padding_ = (longlong)TStack_3c0;
          ((FSlateBrush *)((longlong)pFVar22 + 0x60))->_padding_ = (longlong)local_3b8;
          ((FSlateBrush *)((longlong)pFVar22 + 0x68))->_padding_ = (longlong)FStack_3b0;
          ((FSlateBrush *)((longlong)pFVar22 + 0x70))->_padding_ = (longlong)local_3a8;
          ((FSlateBrush *)((longlong)pFVar22 + 0x78))->_padding_ = (longlong)FStack_3a0;
          ((FSlateBrush *)((longlong)pFVar22 + 0x80))->_padding_ = (longlong)local_398;
          ((FSlateBrush *)((longlong)pFVar22 + 0x88))->_padding_ = (longlong)FStack_390;
          ((FSlateBrush *)((longlong)pFVar22 + 0x90))->_padding_ = (longlong)local_388;
          ((FSlateBrush *)((longlong)pFVar22 + 0x98))->_padding_ = (longlong)FStack_380;
          ((FSlateBrush *)((longlong)pFVar22 + 0xa0))->_padding_ = (longlong)local_378;
          ((FSlateBrush *)((longlong)pFVar22 + 0xa8))->_padding_ = (longlong)TStack_370;
          ((FSlateBrush *)((longlong)pFVar22 + 0xb0))->_padding_ = (longlong)local_368;
          ((FSlateBrush *)((longlong)pFVar22 + 0xb8))->_padding_ = (longlong)FStack_360;
          ((FSlateBrush *)((longlong)pFVar22 + 0xc0))->_padding_ = (longlong)local_358;
          ((FSlateBrush *)((longlong)pFVar22 + 200))->_padding_ = (longlong)FStack_350;
          param_3 = local_458;
        }
        goto LAB_14a771220;
      }
LAB_14a770d69:
      local_460[0] = param_3;
      local_450.Predicate = param_4.Predicate;
      if (iVar17 < 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Num >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                            ,0xb9,L"Algo::HeapSortInternal called with negative count");
        if (bVar16) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_14a770fba:
        local_440[0].Predicate = &local_450;
        local_448.Predicate = &local_450;
        local_468[0] = param_3;
        if ((iVar17 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Num >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                                ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar16))
        {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar20 = (iVar17 + -2) / 2;
        HeapSiftDown<FCommonInputKeyBrushConfiguration,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FCommonInputKeyBrushConfiguration,_UCommonInputBaseControllerData::PreSave_::__l5::<lambda_1>_>_>_>
                  (pFVar18,iVar20,iVar17,local_468,&local_448);
        while (iVar20 != 0) {
          iVar20 = iVar20 + -1;
          HeapSiftDown<FCommonInputKeyBrushConfiguration,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FCommonInputKeyBrushConfiguration,_UCommonInputBaseControllerData::PreSave_::__l5::<lambda_1>_>_>_>
                    (pFVar18,iVar20,iVar17,local_468,&local_448);
        }
        iVar17 = iVar17 + -1;
        if (0 < iVar17) {
          lVar25 = (longlong)iVar17 * 0xd0;
          do {
            local_418 = (pFVar18->Key).KeyName;
            FStack_410 = (FName)(pFVar18->Key).KeyDetails.Object;
            pFVar2 = (FName *)((longlong)&(pFVar18->Key).KeyName.ComparisonIndex.Value + lVar25);
            local_408 = (FName)(pFVar18->Key).KeyDetails.SharedReferenceCount.ReferenceController;
            FStack_400 = (FName)pFVar18->_padding_;
            local_3f8 = (FName)(pFVar18->KeyBrush)._padding_;
            FStack_3f0 = *(FName *)&(pFVar18->KeyBrush).TintColor.SpecifiedColor.field0_0x0;
            local_3e8 = *(FName *)((longlong)
                                   &(pFVar18->KeyBrush).TintColor.SpecifiedColor.field0_0x0 + 8);
            FStack_3e0 = *(FName *)&(pFVar18->KeyBrush).TintColor.ColorUseRule;
            local_3d8 = *(FName *)&(pFVar18->KeyBrush).ImageSize;
            FStack_3d0.ComparisonIndex.Value = (uint)(pFVar18->KeyBrush).Margin.Left;
            FStack_3d0.Number = (uint)(pFVar18->KeyBrush).Margin.Top;
            local_3c8.ComparisonIndex.Value = (uint)(pFVar18->KeyBrush).Margin.Right;
            local_3c8.Number = (uint)(pFVar18->KeyBrush).Margin.Bottom;
            TStack_3c0 = (pFVar18->KeyBrush).ResourceObject.field0_0x0;
            local_3b8 = (FName)(pFVar18->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X;
            FStack_3b0 = (FName)(pFVar18->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y;
            local_3a8 = (FName)(pFVar18->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z;
            FStack_3a0 = (FName)(pFVar18->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W;
            local_398 = *(FName *)&(pFVar18->KeyBrush).OutlineSettings.Color.SpecifiedColor.
                                   field0_0x0;
            FStack_390 = *(FName *)((longlong)
                                    &(pFVar18->KeyBrush).OutlineSettings.Color.SpecifiedColor.
                                     field0_0x0 + 8);
            local_388 = *(FName *)&(pFVar18->KeyBrush).OutlineSettings.Color.ColorUseRule;
            FStack_380 = *(FName *)&(pFVar18->KeyBrush).OutlineSettings.RoundingType;
            local_378 = (pFVar18->KeyBrush).UVRegion.Min.field0_0x0;
            TStack_370 = (pFVar18->KeyBrush).UVRegion.Max.field0_0x0;
            local_368 = *(FName *)&(pFVar18->KeyBrush).UVRegion.bIsValid;
            FStack_360 = (FName)(pFVar18->KeyBrush).ResourceHandle.Data.Object;
            local_358 = (FName)(pFVar18->KeyBrush).ResourceHandle.Data.SharedReferenceCount.
                               ReferenceController;
            FStack_350 = (pFVar18->KeyBrush).ResourceName;
            FVar10 = pFVar2[1];
            (pFVar18->Key).KeyName = *pFVar2;
            (pFVar18->Key).KeyDetails.Object = (FKeyDetails *)FVar10;
            FVar10 = pFVar2[3];
            (pFVar18->Key).KeyDetails.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar2[2];
            pFVar18->_padding_ = (longlong)FVar10;
            FVar10 = pFVar2[5];
            (pFVar18->KeyBrush)._padding_ = (longlong)pFVar2[4];
            *(FName *)&(pFVar18->KeyBrush).TintColor.SpecifiedColor.field0_0x0 = FVar10;
            FVar10 = pFVar2[7];
            *(FName *)((longlong)&(pFVar18->KeyBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
                 pFVar2[6];
            *(FName *)&(pFVar18->KeyBrush).TintColor.ColorUseRule = FVar10;
            FVar14.Value = pFVar2[9].ComparisonIndex.Value;
            uVar15 = pFVar2[9].Number;
            (pFVar18->KeyBrush).ImageSize = (FDeprecateSlateVector2D)pFVar2[8];
            (pFVar18->KeyBrush).Margin.Left = (float)FVar14.Value;
            (pFVar18->KeyBrush).Margin.Top = (float)uVar15;
            uVar15 = pFVar2[10].Number;
            TVar6 = *(TObjectPtr<UObject>_u_0 *)(pFVar2 + 0xb);
            (pFVar18->KeyBrush).Margin.Right = (float)pFVar2[10].ComparisonIndex.Value;
            (pFVar18->KeyBrush).Margin.Bottom = (float)uVar15;
            (pFVar18->KeyBrush).ResourceObject.field0_0x0 = TVar6;
            FVar10 = pFVar2[0xd];
            (pFVar18->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X = (double)pFVar2[0xc];
            (pFVar18->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y = (double)FVar10;
            FVar10 = pFVar2[0xf];
            (pFVar18->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z = (double)pFVar2[0xe];
            (pFVar18->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W = (double)FVar10;
            FVar10 = pFVar2[0x11];
            *(FName *)&(pFVar18->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 =
                 pFVar2[0x10];
            *(FName *)((longlong)
                       &(pFVar18->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8) =
                 FVar10;
            FVar10 = pFVar2[0x13];
            *(FName *)&(pFVar18->KeyBrush).OutlineSettings.Color.ColorUseRule = pFVar2[0x12];
            *(FName *)&(pFVar18->KeyBrush).OutlineSettings.RoundingType = FVar10;
            TVar8 = *(TVector2<float>_u_0 *)(pFVar2 + 0x15);
            (pFVar18->KeyBrush).UVRegion.Min.field0_0x0 = *(TVector2<float>_u_0 *)(pFVar2 + 0x14);
            (pFVar18->KeyBrush).UVRegion.Max.field0_0x0 = TVar8;
            FVar10 = pFVar2[0x17];
            *(FName *)&(pFVar18->KeyBrush).UVRegion.bIsValid = pFVar2[0x16];
            (pFVar18->KeyBrush).ResourceHandle.Data.Object = (FSlateSharedHandleData *)FVar10;
            FVar10 = pFVar2[0x19];
            (pFVar18->KeyBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar2[0x18];
            (pFVar18->KeyBrush).ResourceName = FVar10;
            *pFVar2 = local_418;
            pFVar2[1] = FStack_410;
            pFVar2[2] = local_408;
            pFVar2[3] = FStack_400;
            pFVar2[4] = local_3f8;
            pFVar2[5] = FStack_3f0;
            pFVar2[6] = local_3e8;
            pFVar2[7] = FStack_3e0;
            pFVar2[8] = local_3d8;
            pFVar2[9] = FStack_3d0;
            pFVar2[10] = local_3c8;
            *(TObjectPtr<UObject>_u_0 *)(pFVar2 + 0xb) = TStack_3c0;
            pFVar2[0xc] = local_3b8;
            pFVar2[0xd] = FStack_3b0;
            pFVar2[0xe] = local_3a8;
            pFVar2[0xf] = FStack_3a0;
            pFVar2[0x10] = local_398;
            pFVar2[0x11] = FStack_390;
            pFVar2[0x12] = local_388;
            pFVar2[0x13] = FStack_380;
            *(TVector2<float>_u_0 *)(pFVar2 + 0x14) = local_378;
            *(TVector2<float>_u_0 *)(pFVar2 + 0x15) = TStack_370;
            pFVar2[0x16] = local_368;
            pFVar2[0x17] = FStack_360;
            pFVar2[0x18] = local_358;
            pFVar2[0x19] = FStack_350;
            HeapSiftDown<FCommonInputKeyBrushConfiguration,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FCommonInputKeyBrushConfiguration,_UCommonInputBaseControllerData::PreSave_::__l5::<lambda_1>_>_>_>
                      (pFVar18,0,iVar17,local_460,local_440);
            iVar17 = iVar17 + -1;
            lVar25 = lVar25 + -0xd0;
          } while (0 < iVar17);
        }
      }
      else if (iVar17 != 0) goto LAB_14a770fba;
LAB_14a771220:
      ppFVar21 = ppFVar21 + -3;
    } while (&local_348 <= ppFVar21);
  }
  return;
LAB_14a770aec:
  local_418 = (pFVar26->Key).KeyName;
  FStack_410 = (FName)(pFVar26->Key).KeyDetails.Object;
  local_408 = (FName)(pFVar26->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FStack_400 = (FName)pFVar26->_padding_;
  local_3f8 = (FName)(pFVar26->KeyBrush)._padding_;
  FStack_3f0 = *(FName *)&(pFVar26->KeyBrush).TintColor.SpecifiedColor.field0_0x0;
  local_3e8 = *(FName *)((longlong)&(pFVar26->KeyBrush).TintColor.SpecifiedColor.field0_0x0 + 8);
  FStack_3e0 = *(FName *)&(pFVar26->KeyBrush).TintColor.ColorUseRule;
  local_3d8 = *(FName *)&(pFVar26->KeyBrush).ImageSize;
  FStack_3d0.ComparisonIndex.Value = (uint)(pFVar26->KeyBrush).Margin.Left;
  FStack_3d0.Number = (uint)(pFVar26->KeyBrush).Margin.Top;
  local_3c8.ComparisonIndex.Value = (uint)(pFVar26->KeyBrush).Margin.Right;
  local_3c8.Number = (uint)(pFVar26->KeyBrush).Margin.Bottom;
  TStack_3c0 = (pFVar26->KeyBrush).ResourceObject.field0_0x0;
  local_3b8 = (FName)(pFVar26->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X;
  FStack_3b0 = (FName)(pFVar26->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y;
  local_3a8 = (FName)(pFVar26->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z;
  FStack_3a0 = (FName)(pFVar26->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W;
  local_398 = *(FName *)&(pFVar26->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0;
  FStack_390 = *(FName *)((longlong)
                          &(pFVar26->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8);
  local_388 = *(FName *)&(pFVar26->KeyBrush).OutlineSettings.Color.ColorUseRule;
  FStack_380 = *(FName *)&(pFVar26->KeyBrush).OutlineSettings.RoundingType;
  local_378 = (pFVar26->KeyBrush).UVRegion.Min.field0_0x0;
  TStack_370 = (pFVar26->KeyBrush).UVRegion.Max.field0_0x0;
  local_368 = *(FName *)&(pFVar26->KeyBrush).UVRegion.bIsValid;
  FStack_360 = (FName)(pFVar26->KeyBrush).ResourceHandle.Data.Object;
  local_358 = (FName)(pFVar26->KeyBrush).ResourceHandle.Data.SharedReferenceCount.
                     ReferenceController;
  FStack_350 = (pFVar26->KeyBrush).ResourceName;
  pFVar4 = pFVar24[-1].Key.KeyDetails.Object;
  (pFVar26->Key).KeyName = (pFVar23->Key).KeyName;
  (pFVar26->Key).KeyDetails.Object = pFVar4;
  lVar25 = pFVar24[-1]._padding_;
  (pFVar26->Key).KeyDetails.SharedReferenceCount.ReferenceController =
       pFVar24[-1].Key.KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar26->_padding_ = lVar25;
  uVar5 = *(undefined8 *)&pFVar24[-1].KeyBrush.TintColor.SpecifiedColor.field0_0x0;
  (pFVar26->KeyBrush)._padding_ = pFVar24[-1].KeyBrush._padding_;
  *(undefined8 *)&(pFVar26->KeyBrush).TintColor.SpecifiedColor.field0_0x0 = uVar5;
  uVar5 = *(undefined8 *)&pFVar24[-1].KeyBrush.TintColor.ColorUseRule;
  *(undefined8 *)((longlong)&(pFVar26->KeyBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
       *(undefined8 *)((longlong)&pFVar24[-1].KeyBrush.TintColor.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pFVar26->KeyBrush).TintColor.ColorUseRule = uVar5;
  fVar27 = pFVar24[-1].KeyBrush.Margin.Left;
  fVar11 = pFVar24[-1].KeyBrush.Margin.Top;
  (pFVar26->KeyBrush).ImageSize = pFVar24[-1].KeyBrush.ImageSize;
  (pFVar26->KeyBrush).Margin.Left = fVar27;
  (pFVar26->KeyBrush).Margin.Top = fVar11;
  fVar27 = pFVar24[-1].KeyBrush.Margin.Bottom;
  TVar6 = pFVar24[-1].KeyBrush.ResourceObject.field0_0x0;
  (pFVar26->KeyBrush).Margin.Right = pFVar24[-1].KeyBrush.Margin.Right;
  (pFVar26->KeyBrush).Margin.Bottom = fVar27;
  (pFVar26->KeyBrush).ResourceObject.field0_0x0 = TVar6;
  dVar7 = pFVar24[-1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.Y;
  (pFVar26->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X =
       pFVar24[-1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.X;
  (pFVar26->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y = dVar7;
  dVar7 = pFVar24[-1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.W;
  (pFVar26->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z =
       pFVar24[-1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.Z;
  (pFVar26->KeyBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W = dVar7;
  uVar5 = *(undefined8 *)
           ((longlong)&pFVar24[-1].KeyBrush.OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pFVar26->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&pFVar24[-1].KeyBrush.OutlineSettings.Color.SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(pFVar26->KeyBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8) = uVar5;
  TVar12.Value = pFVar24[-1].KeyBrush.OutlineSettings.RoundingType.Value;
  bVar16 = pFVar24[-1].KeyBrush.OutlineSettings.bUseBrushTransparency;
  uVar13 = *(undefined6 *)&pFVar24[-1].KeyBrush.OutlineSettings.field_0x3a;
  *(undefined8 *)&(pFVar26->KeyBrush).OutlineSettings.Color.ColorUseRule =
       *(undefined8 *)&pFVar24[-1].KeyBrush.OutlineSettings.Color.ColorUseRule;
  (pFVar26->KeyBrush).OutlineSettings.RoundingType =
       (TEnumAsByte<ESlateBrushRoundingType::Type>)TVar12.Value;
  (pFVar26->KeyBrush).OutlineSettings.bUseBrushTransparency = bVar16;
  *(undefined6 *)&(pFVar26->KeyBrush).OutlineSettings.field_0x3a = uVar13;
  TVar8 = pFVar24[-1].KeyBrush.UVRegion.Max.field0_0x0;
  (pFVar26->KeyBrush).UVRegion.Min.field0_0x0 = pFVar24[-1].KeyBrush.UVRegion.Min.field0_0x0;
  (pFVar26->KeyBrush).UVRegion.Max.field0_0x0 = TVar8;
  pFVar9 = pFVar24[-1].KeyBrush.ResourceHandle.Data.Object;
  *(undefined8 *)&(pFVar26->KeyBrush).UVRegion.bIsValid =
       *(undefined8 *)&pFVar24[-1].KeyBrush.UVRegion.bIsValid;
  (pFVar26->KeyBrush).ResourceHandle.Data.Object = pFVar9;
  FVar10 = pFVar24[-1].KeyBrush.ResourceName;
  (pFVar26->KeyBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController =
       pFVar24[-1].KeyBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (pFVar26->KeyBrush).ResourceName = FVar10;
  (pFVar23->Key).KeyName = local_418;
  pFVar24[-1].Key.KeyDetails.Object = (FKeyDetails *)FStack_410;
  pFVar24[-1].Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_408;
  pFVar24[-1]._padding_ = (longlong)FStack_400;
  pFVar24[-1].KeyBrush._padding_ = (longlong)local_3f8;
  *(FName *)&pFVar24[-1].KeyBrush.TintColor.SpecifiedColor.field0_0x0 = FStack_3f0;
  *(FName *)((longlong)&pFVar24[-1].KeyBrush.TintColor.SpecifiedColor.field0_0x0 + 8) = local_3e8;
  *(FName *)&pFVar24[-1].KeyBrush.TintColor.ColorUseRule = FStack_3e0;
  pFVar24[-1].KeyBrush.ImageSize = (FDeprecateSlateVector2D)local_3d8;
  pFVar24[-1].KeyBrush.Margin.Left = (float)FStack_3d0.ComparisonIndex.Value;
  pFVar24[-1].KeyBrush.Margin.Top = (float)FStack_3d0.Number;
  pFVar24[-1].KeyBrush.Margin.Right = (float)local_3c8.ComparisonIndex.Value;
  pFVar24[-1].KeyBrush.Margin.Bottom = (float)local_3c8.Number;
  pFVar24[-1].KeyBrush.ResourceObject.field0_0x0 = TStack_3c0;
  pFVar24[-1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.X = (double)local_3b8;
  pFVar24[-1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.Y = (double)FStack_3b0;
  pFVar24[-1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.Z = (double)local_3a8;
  pFVar24[-1].KeyBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.W = (double)FStack_3a0;
  *(FName *)&pFVar24[-1].KeyBrush.OutlineSettings.Color.SpecifiedColor.field0_0x0 = local_398;
  *(FName *)((longlong)&pFVar24[-1].KeyBrush.OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8) =
       FStack_390;
  *(FName *)&pFVar24[-1].KeyBrush.OutlineSettings.Color.ColorUseRule = local_388;
  *(FName *)&pFVar24[-1].KeyBrush.OutlineSettings.RoundingType = FStack_380;
  pFVar24[-1].KeyBrush.UVRegion.Min.field0_0x0 = local_378;
  pFVar24[-1].KeyBrush.UVRegion.Max.field0_0x0 = TStack_370;
  *(FName *)&pFVar24[-1].KeyBrush.UVRegion.bIsValid = local_368;
  pFVar24[-1].KeyBrush.ResourceHandle.Data.Object = (FSlateSharedHandleData *)FStack_360;
  pFVar24[-1].KeyBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_358;
  pFVar24[-1].KeyBrush.ResourceName = FStack_350;
  iVar20 = (int)local_450.Predicate + -1;
  local_450.Predicate._0_4_ = iVar20;
  if (((longlong)pFVar23 + (-0xd0 - (longlong)pFVar26)) / 0xd0 <
      ((longlong)pFVar22 - (longlong)pFVar18) / 0xd0) {
    if (pFVar18 < pFVar22) {
      *ppFVar21 = pFVar18;
      ppFVar21[1] = pFVar22;
      *(int *)(ppFVar21 + 2) = iVar20;
      ppFVar21 = ppFVar21 + 3;
    }
    if (pFVar23 <= pFVar26 + 1) goto LAB_14a771220;
    pFVar22 = pFVar24 + -2;
    pFVar18 = pFVar26;
  }
  else {
    if (pFVar26 + 1 < pFVar23) {
      *ppFVar21 = pFVar26;
      ppFVar21[1] = pFVar24 + -2;
      *(int *)(ppFVar21 + 2) = iVar20;
      ppFVar21 = ppFVar21 + 3;
    }
    if (pFVar22 <= pFVar18) goto LAB_14a771220;
  }
  iVar17 = (int)(((longlong)pFVar22 - (longlong)pFVar18) / 0xd0) + 1;
  pFVar26 = pFVar18;
  if (iVar20 == 0) goto LAB_14a770d69;
  goto LAB_14a770795;
}

// NewObject<UCommonInputSettings> @ 14a771290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCommonInputSettings * __cdecl
NewObject<UCommonInputSettings>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UCommonInputSettings *pUVar2;
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
  pUVar1 = UCommonInputSettings::StaticClass();
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
  pUVar2 = (UCommonInputSettings *)
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

// RemoveAllSwap<`UCommonInputPlatformSettings::RemoveControllerDataEntry'::__l2::<lambda_2>_> @ 14a771390

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TSubclassOf<UCommonInputBaseControllerData>,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_UCommonInputPlatformSettings::RemoveControllerDataEntry_::__l2::<lambda_2>_>
          (TArray<TSubclassOf<UCommonInputBaseControllerData>,TSizedDefaultAllocator<32>_> *this,
          <lambda_2> *param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar6 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  iVar9 = iVar6;
  if (0 < iVar6) {
    do {
      uVar7 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < iVar9) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      bVar4 = `UCommonInputPlatformSettings::RemoveControllerDataEntry'::__l2::<lambda_2>::
              operator()(param_1,(TSubclassOf<UCommonInputBaseControllerData> *)
                                 ((this->AllocatorInstance).Data + (longlong)(int)uVar8 * 8));
      if (bVar4) {
        bVar3 = true;
        uVar5 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar9 = this->ArrayNum + ~uVar8;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar8 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar9) * 8,
                  (longlong)iVar9 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      else {
        uVar8 = uVar8 + 1;
      }
      iVar9 = this->ArrayNum;
    } while ((int)uVar8 < iVar9);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar9,&this->ArrayMax);
    }
  }
  return iVar6 - this->ArrayNum;
}

// StaticEnum<enum_ECommonInputEventFlowBehavior> @ 14a7716b0

UEnum * __cdecl StaticEnum<enum_ECommonInputEventFlowBehavior>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECommonInputEventFlowBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonInput();
    Z_Registration_Info_UEnum_ECommonInputEventFlowBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior,(UObject *)pUVar1
                       ,L"ECommonInputEventFlowBehavior");
  }
  return Z_Registration_Info_UEnum_ECommonInputEventFlowBehavior.OuterSingleton;
}

// StaticEnum<enum_ECommonInputMode> @ 14a7716f0

UEnum * __cdecl StaticEnum<enum_ECommonInputMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECommonInputMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonInput();
    Z_Registration_Info_UEnum_ECommonInputMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CommonInput_ECommonInputMode,(UObject *)pUVar1,
                       L"ECommonInputMode");
  }
  return Z_Registration_Info_UEnum_ECommonInputMode.OuterSingleton;
}

// StaticEnum<enum_ECommonInputType> @ 14a771730

UEnum * __cdecl StaticEnum<enum_ECommonInputType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECommonInputType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonInput();
    Z_Registration_Info_UEnum_ECommonInputType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CommonInput_ECommonInputType,(UObject *)pUVar1,
                       L"ECommonInputType");
  }
  return Z_Registration_Info_UEnum_ECommonInputType.OuterSingleton;
}

// operator() @ 14a772e50

bool __thiscall
`CommonUIUtils::TryGetInputBrushFromKeySets'::__l2::<lambda_1>::operator()
          (void *this,FCommonInputKeySetBrushConfiguration *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  undefined1 local_res10 [8];
  
  iVar3 = (param_1->Keys).ArrayNum;
  if (1 < iVar3) {
    plVar5 = *(longlong **)this;
    iVar4 = (int)plVar5[1];
    if (iVar4 == iVar3) {
      plVar7 = (longlong *)*plVar5;
      plVar1 = plVar7 + (longlong)iVar4 * 3;
      while( true ) {
        if ((int)plVar5[1] != iVar4) {
          `TCheckedPointerIterator<FKey_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (plVar7 == plVar1) {
          return true;
        }
        pFVar6 = (param_1->Keys).AllocatorInstance.Data;
        pFVar2 = pFVar6 + (longlong)(param_1->Keys).ArrayNum * 0x18;
        if (pFVar6 == pFVar2) break;
        while (*(longlong *)pFVar6 != *plVar7) {
          pFVar6 = pFVar6 + 0x18;
          if (pFVar6 == pFVar2) {
            return false;
          }
        }
        plVar7 = plVar7 + 3;
      }
    }
  }
  return false;
}

// `scalar_deleting_destructor' @ 14a773080

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonInputSubsystem,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UCommonInputSubsystem,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a7730b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonInputSubsystem,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UCommonInputSubsystem,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a7730e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCommonInputPreprocessor,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FCommonInputPreprocessor,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a773120

void * __thiscall
FCommonInputModule::_scalar_deleting_destructor_(FCommonInputModule *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a773160

void * __thiscall
FCommonInputPreprocessor::_scalar_deleting_destructor_(FCommonInputPreprocessor *this,uint param_1)

{
  ~FCommonInputPreprocessor(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a7731a0

void * __thiscall
ICommonInputModule::_scalar_deleting_destructor_(ICommonInputModule *this,uint param_1)

{
  *this = (ICommonInputModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a7731e0

void * __thiscall
UCommonInputActionDomain::_scalar_deleting_destructor_(UCommonInputActionDomain *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCommonInputActionDomain__6B_;
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

// `scalar_deleting_destructor' @ 14a773240

void * __thiscall
UCommonInputActionDomainTable::_scalar_deleting_destructor_
          (UCommonInputActionDomainTable *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCommonInputActionDomainTable__6B_;
  pFVar1 = (this->ActionDomains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a7732b0

void * __thiscall
UCommonInputBaseControllerData::_scalar_deleting_destructor_
          (UCommonInputBaseControllerData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&___7UCommonInputBaseControllerData__6B_;
  DestructItems<FCommonInputKeySetBrushConfiguration,int>
            ((FCommonInputKeySetBrushConfiguration *)
             (this->InputBrushKeySets).AllocatorInstance.Data,(this->InputBrushKeySets).ArrayNum);
  pFVar1 = (this->InputBrushKeySets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCommonInputKeyBrushConfiguration,int>
            ((FCommonInputKeyBrushConfiguration *)(this->InputBrushDataMap).AllocatorInstance.Data,
             (this->InputBrushDataMap).ArrayNum);
  pFVar1 = (this->InputBrushDataMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->ControllerButtonMaskTexture).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->ControllerTexture).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FInputDeviceIdentifierPair,int>
            ((FInputDeviceIdentifierPair *)(this->GamepadHardwareIdMapping).AllocatorInstance.Data,
             (this->GamepadHardwareIdMapping).ArrayNum);
  pFVar1 = (this->GamepadHardwareIdMapping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->GamepadPlatformName).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->GamepadCategory).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->GamepadDisplayName).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a7733c0

void * __thiscall
UCommonInputPlatformSettings::_scalar_deleting_destructor_
          (UCommonInputPlatformSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCommonInputPlatformSettings__6B_;
  pFVar1 = (this->ControllerDataClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftClassPtr<UCommonInputBaseControllerData>,int>
            ((TSoftClassPtr<UCommonInputBaseControllerData> *)
             (this->ControllerData).AllocatorInstance.Data,(this->ControllerData).ArrayNum);
  pFVar1 = (this->ControllerData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPlatformSettings::~UPlatformSettings((UPlatformSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a773450

void * __thiscall
UCommonInputSettings::_scalar_deleting_destructor_(UCommonInputSettings *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UCommonInputSettings__6B_;
  *(undefined4 *)&(this->PlatformNameUpgrades).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PlatformNameUpgrades).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PlatformNameUpgrades);
  pvVar1 = *(void **)&(this->ActionDomainTable).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->CommonInputPlatformData_DEPRECATED).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CommonInputPlatformData_DEPRECATED).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputPlatformBaseData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputPlatformBaseData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputPlatformBaseData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CommonInputPlatformData_DEPRECATED);
  pFVar2 = (this->PlatformInput).Settings.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->InputData).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a773540

void * __thiscall
UCommonInputSubsystem::_scalar_deleting_destructor_(UCommonInputSubsystem *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->_padding_ = (longlong)&___7UCommonInputSubsystem__6B_;
  *(undefined4 *)&(this->CurrentInputLocks).field_0x48 = 0;
  pvVar3 = *(void **)&(this->CurrentInputLocks).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,enum_ECommonInputType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,enum_ECommonInputType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->CurrentInputLocks);
  pvVar3 = *(void **)&(this->OnInputMethodChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputMethodChanged);
  pTVar4 = (this->TickHandle).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CommonInputPreprocessor).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInputMethodChangedNative).field_0x8,
             *(int *)&(this->OnInputMethodChangedNative).field_0x10);
  pvVar3 = *(void **)&(this->OnInputMethodChangedNative).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputMethodChangedNative);
  ULocalPlayerSubsystem::~ULocalPlayerSubsystem((ULocalPlayerSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a773640

void * __thiscall
UCommonUIHoldData::_scalar_deleting_destructor_(UCommonUIHoldData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCommonUIHoldData__6B_;
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

// `scalar_deleting_destructor' @ 14a7736a0

void * __thiscall
UCommonUIInputData::_scalar_deleting_destructor_(UCommonUIInputData *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UCommonUIInputData__6B_;
  pvVar1 = *(void **)&(this->DefaultHoldData).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
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

// EmptyLinkFunctionForGeneratedCodeCommonInputActionDomain @ 14a7748f0

void __cdecl EmptyLinkFunctionForGeneratedCodeCommonInputActionDomain(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCommonInputBaseTypes @ 14a774900

void __cdecl EmptyLinkFunctionForGeneratedCodeCommonInputBaseTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCommonInputModeTypes @ 14a774910

void __cdecl EmptyLinkFunctionForGeneratedCodeCommonInputModeTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCommonInputSettings @ 14a774920

void __cdecl EmptyLinkFunctionForGeneratedCodeCommonInputSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCommonInputSubsystem @ 14a774930

void __cdecl EmptyLinkFunctionForGeneratedCodeCommonInputSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCommonInputTypeEnum @ 14a774940

void __cdecl EmptyLinkFunctionForGeneratedCodeCommonInputTypeEnum(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCommonInput_init @ 14a774950

void __cdecl EmptyLinkFunctionForGeneratedCodeCommonInput_init(void)

{
  return;
}

// FInputMethodChangedDelegate_DelegateWrapper @ 14a774bc0

void __cdecl
FInputMethodChangedDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,ECommonInputType param_2)

{
  ECommonInputType local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// TryGetInputBrushFromDataMap @ 14a779940

bool __cdecl
CommonUIUtils::TryGetInputBrushFromDataMap
          (FSlateBrush *param_1,FKey *param_2,
          TArray<FCommonInputKeyBrushConfiguration,TSizedDefaultAllocator<32>_> *param_3)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar1 = (FName *)(param_3->AllocatorInstance).Data;
  pFVar2 = pFVar1 + (longlong)param_3->ArrayNum * 0x1a;
  if (pFVar1 != pFVar2) {
    do {
      if (*pFVar1 == param_2->KeyName) {
        FSlateBrush::operator=(param_1,(FSlateBrush *)(pFVar1 + 4));
        return true;
      }
      pFVar1 = pFVar1 + 0x1a;
    } while (pFVar1 != pFVar2);
  }
  return false;
}

// TryGetInputBrushFromKeySets @ 14a779990

bool __cdecl
CommonUIUtils::TryGetInputBrushFromKeySets
          (FSlateBrush *param_1,TArray<FKey,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FCommonInputKeySetBrushConfiguration,TSizedDefaultAllocator<32>_> *param_3)

{
  bool bVar1;
  FCommonInputKeySetBrushConfiguration *pFVar2;
  FCommonInputKeySetBrushConfiguration *pFVar3;
  TArray<FKey,TSizedDefaultAllocator<32>_> *local_res10;
  
  pFVar2 = (FCommonInputKeySetBrushConfiguration *)(param_3->AllocatorInstance).Data;
  pFVar3 = pFVar2 + param_3->ArrayNum;
  local_res10 = param_2;
  while( true ) {
    if (pFVar2 == pFVar3) {
      return false;
    }
    bVar1 = `CommonUIUtils::TryGetInputBrushFromKeySets'::__l2::<lambda_1>::operator()
                      (&local_res10,pFVar2);
    if (bVar1) break;
    pFVar2 = pFVar2 + 1;
  }
  if (pFVar2 == (FCommonInputKeySetBrushConfiguration *)0x0) {
    return false;
  }
  FSlateBrush::operator=(param_1,&pFVar2->KeyBrush);
  return true;
}

// Z_Construct_UClass_UCommonInputPlatformSettings_NoRegister @ 14a779da0

UClass * __cdecl Z_Construct_UClass_UCommonInputPlatformSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputPlatformSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputPlatformSettings",
               &Z_Registration_Info_UClass_UCommonInputPlatformSettings.InnerSingleton,
               UCommonInputPlatformSettings::StaticRegisterNativesUCommonInputPlatformSettings,0x70,
               8,CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UCommonInputPlatformSettings>,
               InternalVTableHelperCtorCaller<UCommonInputPlatformSettings>,local_res8,
               UPlatformSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputPlatformSettings.InnerSingleton;
}

// Z_Construct_UClass_UCommonInputSettings_NoRegister @ 14a779e60

UClass * __cdecl Z_Construct_UClass_UCommonInputSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputSettings",
               &Z_Registration_Info_UClass_UCommonInputSettings.InnerSingleton,
               UCommonInputSettings::StaticRegisterNativesUCommonInputSettings,0x170,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UCommonInputSettings>,
               InternalVTableHelperCtorCaller<UCommonInputSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputSettings.InnerSingleton;
}

// Z_Construct_UClass_UCommonInputSubsystem_NoRegister @ 14a779f20

UClass * __cdecl Z_Construct_UClass_UCommonInputSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputSubsystem",
               &Z_Registration_Info_UClass_UCommonInputSubsystem.InnerSingleton,
               UCommonInputSubsystem::StaticRegisterNativesUCommonInputSubsystem,0x118,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UCommonInputSubsystem>,
               InternalVTableHelperCtorCaller<UCommonInputSubsystem>,local_res8,
               ULocalPlayerSubsystem::StaticClass,ULocalPlayer::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputSubsystem.InnerSingleton;
}

// IMPLEMENT_MODULE_CommonInput @ 14a77a470

void __cdecl IMPLEMENT_MODULE_CommonInput(void)

{
  return;
}

// OnPlatformInputSupportOverride'' @ 150420a50

void __cdecl
`dynamic_atexit_destructor_for_'UCommonInputSubsystem::OnPlatformInputSupportOverride__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UCommonInputSubsystem::OnPlatformInputSupportOverride._8_8_,
             UCommonInputSubsystem::OnPlatformInputSupportOverride._16_4_);
  if (UCommonInputSubsystem::OnPlatformInputSupportOverride._8_8_ != 0) {
    FMemory::Free((void *)UCommonInputSubsystem::OnPlatformInputSupportOverride._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UCommonInputSubsystem::OnPlatformInputSupportOverride)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarDumpInputTypeChangeCallstack'' @ 150420a90

void __cdecl _dynamic_atexit_destructor_for__CVarDumpInputTypeChangeCallstack__(void)

{
  CVarDumpInputTypeChangeCallstack._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDumpInputTypeChangeCallstack);
  return;
}

// `dynamic_atexit_destructor_for_'CVarInputEnableGamepadPlatformCursor'' @ 150420ab0

void __cdecl _dynamic_atexit_destructor_for__CVarInputEnableGamepadPlatformCursor__(void)

{
  CVarInputEnableGamepadPlatformCursor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarInputEnableGamepadPlatformCursor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarInputKeysVisible'' @ 150420ad0

void __cdecl _dynamic_atexit_destructor_for__CVarInputKeysVisible__(void)

{
  CVarInputKeysVisible._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarInputKeysVisible);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShouldMouseWheelAndGestureRefreshInputMethod'' @ 150420af0

void __cdecl
_dynamic_atexit_destructor_for__CVarShouldMouseWheelAndGestureRefreshInputMethod__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShouldMouseWheelAndGestureRefreshInputMethod);
  return;
}

// `dynamic_atexit_destructor_for_'LogCommonInput'' @ 150420b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCommonInput__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCommonInput);
  return;
}

// `dynamic_atexit_destructor_for_'LogUIActionDomain'' @ 150420b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogUIActionDomain__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogUIActionDomain);
  return;
}

// `dynamic_atexit_destructor_for_'PhysicalMobileKeys'' @ 150420b50

void __cdecl
`UCommonInputSubsystem::IsMobileGamepadKey'::__l2::
_dynamic_atexit_destructor_for__PhysicalMobileKeys__(void)

{
  DestructItems<FKey,int>
            ((FKey *)PhysicalMobileKeys.AllocatorInstance.Data,PhysicalMobileKeys.ArrayNum);
  if (PhysicalMobileKeys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(PhysicalMobileKeys.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'RegisteredGamepads'' @ 150420b90

void __cdecl
`UCommonInputBaseControllerData::GetRegisteredGamepads'::__l2::
_dynamic_atexit_destructor_for__RegisteredGamepads__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RegisteredGamepads.AllocatorInstance.Data;
  if (RegisteredGamepads.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RegisteredGamepads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'RegisteredPlatforms'' @ 150420bb0

void __cdecl
`FCommonInputPlatformBaseData::GetRegisteredPlatforms'::__l2::
_dynamic_atexit_destructor_for__RegisteredPlatforms__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RegisteredPlatforms.AllocatorInstance.Data;
  if (RegisteredPlatforms.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RegisteredPlatforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

