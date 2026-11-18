// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokens
// Functions: 105

// GlobalNamespace'' @ 1413c7430

void __cdecl `dynamic_initializer_for_'UGlobalNamingTokens::GlobalNamespace__(void)

{
  ::FString::FString(&UGlobalNamingTokens::GlobalNamespace,L"g");
  atexit(`dynamic_atexit_destructor_for_'UGlobalNamingTokens::GlobalNamespace__);
  return;
}

// `dynamic_initializer_for_'LogNamingTokens'' @ 1413c7460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNamingTokens__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNamingTokens,L"LogNamingTokens",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNamingTokens__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1413c74a0

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNamingTokens'' @ 1413c74c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantNamingTokens__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NamingTokens";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NamingTokens",0xc);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNamingTokensModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_UNamingTokens_GetCurrentDateTime'' @ 1413c7510

void __cdecl _dynamic_initializer_for__NAME_UNamingTokens_GetCurrentDateTime__(void)

{
  FName::FName(&NAME_UNamingTokens_GetCurrentDateTime,L"GetCurrentDateTime");
  return;
}

// `dynamic_initializer_for_'NAME_UNamingTokens_OnPostEvaluate'' @ 1413c7530

void __cdecl _dynamic_initializer_for__NAME_UNamingTokens_OnPostEvaluate__(void)

{
  FName::FName(&NAME_UNamingTokens_OnPostEvaluate,L"OnPostEvaluate");
  return;
}

// `dynamic_initializer_for_'NAME_UNamingTokens_OnPreEvaluate'' @ 1413c7550

void __cdecl _dynamic_initializer_for__NAME_UNamingTokens_OnPreEvaluate__(void)

{
  FName::FName(&NAME_UNamingTokens_OnPreEvaluate,L"OnPreEvaluate");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_GlobalNamingTokens_h__Script_NamingTokens_3104178820'' @ 1413c7570

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_GlobalNamingTokens_h__Script_NamingTokens_3104178820__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NamingTokens",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_GlobalNamingTokens_h__Script_NamingTokens_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokenData_h__Script_NamingTokens_3973725961'' @ 1413c75b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokenData_h__Script_NamingTokens_3973725961__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NamingTokens",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokenData_h__Script_NamingTokens_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokensEngineSubsystem_h__Script_NamingTokens_1843138742'' @ 1413c75f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokensEngineSubsystem_h__Script_NamingTokens_1843138742__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NamingTokens",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokensEngineSubsystem_h__Script_NamingTokens_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokensEngineSubsystem_h__Script_NamingTokens_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokensEvaluationData_h__Script_NamingTokens_2573500468'' @ 1413c7640

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokensEvaluationData_h__Script_NamingTokens_2573500468__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NamingTokens",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokensEvaluationData_h__Script_NamingTokens_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokens_h__Script_NamingTokens_3511336693'' @ 1413c7680

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokens_h__Script_NamingTokens_3511336693__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NamingTokens",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokens_h__Script_NamingTokens_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_NamingTokens'' @ 1413c76c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_NamingTokens__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x85865248;
  local_res8[0].DeclarationsHash = 0xf0d32518;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_NamingTokens,L"/Script/NamingTokens",
             &Z_Registration_Info_UPackage__Script_NamingTokens,local_res8);
  return;
}

// Z_Construct_UFunction_UNamingTokensEngineSubsystem_GetMultipleNamingTokens @ 14d0d0a20

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEngineSubsystem_GetMultipleNamingTokens(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEngineSubsystem_GetMultipleNamingTokens_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNamingTokensEngineSubsystem_GetNamingTokens @ 14d0d0a60

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEngineSubsystem_GetNamingTokens(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEngineSubsystem_GetNamingTokens_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNamingTokensEngineSubsystem_GetNamingTokensNative @ 14d0d0aa0

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEngineSubsystem_GetNamingTokensNative(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEngineSubsystem_GetNamingTokensNative_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d0d0ae0

void __cdecl
Z_Construct_UFunction_UNamingTokensEngineSubsystem_IsGlobalNamespaceRegistered_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UNamingTokensEngineSubsystem_IsGlobalNamespaceRegistered @ 14d0d0af0

UFunction * __cdecl
Z_Construct_UFunction_UNamingTokensEngineSubsystem_IsGlobalNamespaceRegistered(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEngineSubsystem_IsGlobalNamespaceRegistered_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNamingTokensEngineSubsystem_RegisterGlobalNamespace @ 14d0d0b30

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEngineSubsystem_RegisterGlobalNamespace(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEngineSubsystem_RegisterGlobalNamespace_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNamingTokensEngineSubsystem_UnregisterGlobalNamespace @ 14d0d0b70

UFunction * __cdecl
Z_Construct_UFunction_UNamingTokensEngineSubsystem_UnregisterGlobalNamespace(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEngineSubsystem_UnregisterGlobalNamespace_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_NamingTokens @ 14d0d0d00

UPackage * __cdecl Z_Construct_UPackage__Script_NamingTokens(void)

{
  if (Z_Registration_Info_UPackage__Script_NamingTokens.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_NamingTokens.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_NamingTokens.OuterSingleton;
}

// Z_Construct_UClass_UNamingTokens_NoRegister @ 14d0d0fd0

UClass * __cdecl Z_Construct_UClass_UNamingTokens_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNamingTokens.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NamingTokens",L"NamingTokens",
               &Z_Registration_Info_UClass_UNamingTokens.InnerSingleton,
               UNamingTokens::StaticRegisterNativesUNamingTokens,0x118,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNamingTokens>,InternalVTableHelperCtorCaller<UNamingTokens>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNamingTokens.InnerSingleton;
}

// NewStructOps @ 14d0d1470

void * __cdecl Z_Construct_UScriptStruct_FNamingTokensEvaluationData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNamingTokensEvaluationData,&UE::CoreUObject::Private::Construct<FNamingTokensEvaluationData>,&UE::CoreUObject::Private::ConstructForTests<FNamingTokensEvaluationData>,&UE::CoreUObject::Private::Destruct<FNamingTokensEvaluationData>,&UE::CoreUObject::Private::Copy<FNamingTokensEvaluationData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d0d1580

void * __thiscall
INamingTokensModule::_scalar_deleting_destructor_(INamingTokensModule *this,uint param_1)

{
  *this = (INamingTokensModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d17e0

void * __thiscall
FNamingTokensModule::_scalar_deleting_destructor_(FNamingTokensModule *this,uint param_1)

{
  *this = (FNamingTokensModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UGlobalNamingTokens @ 14d0d1a70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGlobalNamingTokens(void)

{
  if (Z_Registration_Info_UClass_UGlobalNamingTokens.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGlobalNamingTokens.OuterSingleton,
               &Z_Construct_UClass_UGlobalNamingTokens_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGlobalNamingTokens.OuterSingleton;
}

// Z_Construct_UClass_UNamingTokens @ 14d0d1ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNamingTokens(void)

{
  if (Z_Registration_Info_UClass_UNamingTokens.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNamingTokens.OuterSingleton,
               &Z_Construct_UClass_UNamingTokens_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNamingTokens.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNamingTokenData @ 14d0d1af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNamingTokenData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNamingTokenData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNamingTokenData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNamingTokenData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNamingTokenData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNamingTokenData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNamingTokenResultData @ 14d0d1b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNamingTokenResultData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNamingTokenResultData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNamingTokenResultData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNamingTokenResultData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNamingTokenResultData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNamingTokenResultData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNamingTokenValueData @ 14d0d1bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNamingTokenValueData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNamingTokenValueData.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNamingTokenValueData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNamingTokenValueData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNamingTokenValueData.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FNamingTokenValueData.InnerSingleton;
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

// NewProp_bWasEvaluated_SetBit @ 14d0d1c70

void __cdecl
Z_Construct_UScriptStruct_FNamingTokenValueData_Statics::NewProp_bWasEvaluated_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewStructOps @ 14d0d1c80

void * __cdecl Z_Construct_UScriptStruct_FNamingTokenValueData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNamingTokenValueData,&UE::CoreUObject::Private::Construct<FNamingTokenValueData>,&UE::CoreUObject::Private::ConstructForTests<FNamingTokenValueData>,&UE::CoreUObject::Private::Destruct<FNamingTokenValueData>,&UE::CoreUObject::Private::Copy<FNamingTokenValueData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d0d1cc0

void * __cdecl Z_Construct_UScriptStruct_FNamingTokenResultData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNamingTokenResultData,&UE::CoreUObject::Private::Construct<FNamingTokenResultData>,&UE::CoreUObject::Private::ConstructForTests<FNamingTokenResultData>,&UE::CoreUObject::Private::Destruct<FNamingTokenResultData>,&UE::CoreUObject::Private::Copy<FNamingTokenResultData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d0d1d00

void * __cdecl Z_Construct_UScriptStruct_FNamingTokenData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNamingTokenData,&UE::CoreUObject::Private::Construct<FNamingTokenData>,&UE::CoreUObject::Private::ConstructForTests<FNamingTokenData>,&UE::CoreUObject::Private::Destruct<FNamingTokenData>,&UE::CoreUObject::Private::Copy<FNamingTokenData>,&UE::CoreUObject::Private::GetStructTypeHash<FNamingTokenData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FNamingTokensEvaluationData @ 14d0d1d40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNamingTokensEvaluationData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNamingTokensEvaluationData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNamingTokensEvaluationData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNamingTokensEvaluationData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNamingTokensEvaluationData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNamingTokensEvaluationData.InnerSingleton;
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

// Z_Construct_UFunction_UNamingTokens_GetCurrentDateTime @ 14d0d1dc0

UFunction * __cdecl Z_Construct_UFunction_UNamingTokens_GetCurrentDateTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokens_GetCurrentDateTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNamingTokensEngineSubsystem @ 14d0d1e00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNamingTokensEngineSubsystem(void)

{
  if (Z_Registration_Info_UClass_UNamingTokensEngineSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNamingTokensEngineSubsystem.OuterSingleton,
               &Z_Construct_UClass_UNamingTokensEngineSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNamingTokensEngineSubsystem.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNamingTokenFilterArgs @ 14d0d1e40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNamingTokenFilterArgs(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNamingTokenFilterArgs.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNamingTokenFilterArgs.InnerSingleton,
               &Z_Construct_UScriptStruct_FNamingTokenFilterArgs_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNamingTokenFilterArgs.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNamingTokenFilterArgs.InnerSingleton;
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

// NewProp_bIncludeGlobal_SetBit @ 14d0d1ec0

void __cdecl
Z_Construct_UScriptStruct_FNamingTokenFilterArgs_Statics::NewProp_bIncludeGlobal_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bForceCaseSensitive_SetBit @ 14d0d1ed0

void __cdecl
Z_Construct_UScriptStruct_FNamingTokenFilterArgs_Statics::NewProp_bForceCaseSensitive_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bNativeOnly_SetBit @ 14d0d1ee0

void __cdecl
Z_Construct_UScriptStruct_FNamingTokenFilterArgs_Statics::NewProp_bNativeOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewStructOps @ 14d0d1ef0

void * __cdecl Z_Construct_UScriptStruct_FNamingTokenFilterArgs_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNamingTokenFilterArgs,&UE::CoreUObject::Private::Construct<FNamingTokenFilterArgs>,&UE::CoreUObject::Private::ConstructForTests<FNamingTokenFilterArgs>,&UE::CoreUObject::Private::Destruct<FNamingTokenFilterArgs>,&UE::CoreUObject::Private::Copy<FNamingTokenFilterArgs>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UNamingTokens_OnPostEvaluate @ 14d0d1f30

UFunction * __cdecl Z_Construct_UFunction_UNamingTokens_OnPostEvaluate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokens_OnPostEvaluate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNamingTokens_OnPreEvaluate @ 14d0d1f70

UFunction * __cdecl Z_Construct_UFunction_UNamingTokens_OnPreEvaluate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokens_OnPreEvaluate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNamingTokensEngineSubsystem_ClearCachedNamingTokens @ 14d0d1fb0

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEngineSubsystem_ClearCachedNamingTokens(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEngineSubsystem_ClearCachedNamingTokens_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNamingTokens_ProcessTokenTemplateFunction @ 14d0d1ff0

UFunction * __cdecl Z_Construct_UFunction_UNamingTokens_ProcessTokenTemplateFunction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokens_ProcessTokenTemplateFunction_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNamingTokensEngineSubsystem_EvaluateTokenList @ 14d0d2030

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEngineSubsystem_EvaluateTokenList(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEngineSubsystem_EvaluateTokenList_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNamingTokensEngineSubsystem_EvaluateTokenString @ 14d0d2070

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEngineSubsystem_EvaluateTokenString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEngineSubsystem_EvaluateTokenString_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNamingTokensEngineSubsystem_EvaluateTokenText @ 14d0d20b0

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEngineSubsystem_EvaluateTokenText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEngineSubsystem_EvaluateTokenText_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNamingTokensEngineSubsystem_GetAllNamespaces @ 14d0d20f0

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEngineSubsystem_GetAllNamespaces(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEngineSubsystem_GetAllNamespaces_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNamingTokensEngineSubsystem_GetGlobalNamespaces @ 14d0d2130

UFunction * __cdecl Z_Construct_UFunction_UNamingTokensEngineSubsystem_GetGlobalNamespaces(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNamingTokensEngineSubsystem_GetGlobalNamespaces_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// ConstructItems<FNamingTokenData,FNamingTokenData,int> @ 14d0d2490

void __cdecl
ConstructItems<FNamingTokenData,FNamingTokenData,int>
          (void *param_1,FNamingTokenData *param_2,int param_3)

{
  ITextData *pIVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  if (param_3 != 0) {
    plVar3 = (longlong *)((longlong)param_1 + 0x10);
    puVar4 = &(param_2->DisplayName).Flags;
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x18 - (longlong)param_2) + (longlong)puVar4),
                       (FString *)(puVar4 + -6));
      *plVar3 = 0;
      pIVar1 = (((FText *)(puVar4 + -2))->TextData).Reference;
      *plVar3 = (longlong)pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
      }
      *(uint *)(plVar3 + 1) = *puVar4;
      plVar3[2] = 0;
      plVar2 = *(longlong **)(puVar4 + 2);
      plVar3[2] = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,local_res20);
      }
      *(uint *)(plVar3 + 3) = puVar4[4];
      plVar3[4] = *(longlong *)(puVar4 + 6);
      *(undefined8 *)(plVar3 + 5) = 0;
      plVar3[6] = 0;
      *(undefined4 *)(plVar3 + 7) = 0;
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(plVar3 + 5),
                 (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar4 + 8));
      plVar3 = plVar3 + 10;
      puVar4 = puVar4 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNamingTokenValueData,FNamingTokenValueData,int> @ 14d0d2570

void __cdecl
ConstructItems<FNamingTokenValueData,FNamingTokenValueData,int>
          (void *param_1,FNamingTokenValueData *param_2,int param_3)

{
  bool *pbVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  longlong *plVar4;
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    plVar4 = (longlong *)((longlong)param_1 + 0x20);
    pFVar3 = &param_2->TokenValue;
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x20 - (longlong)param_2) + (longlong)pFVar3),
                       (FString *)(pFVar3 + -2));
      FString::FString((FString *)(plVar4 + -2),(FString *)(pFVar3 + -1));
      *plVar4 = 0;
      pIVar2 = (pFVar3->TextData).Reference;
      *plVar4 = (longlong)pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
      }
      *(uint *)(plVar4 + 1) = pFVar3->Flags;
      pbVar1 = (bool *)(pFVar3 + 1);
      pFVar3 = (FText *)((longlong)(pFVar3 + 3) + 8);
      *(bool *)(plVar4 + 2) = *pbVar1;
      plVar4 = plVar4 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FNamingTokenData,int> @ 14d0d2660

void __cdecl DestructItems<FNamingTokenData,int>(FNamingTokenData *param_1,int param_2)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  FText *pFVar3;
  
  if (param_2 != 0) {
    pFVar3 = &param_1->Description;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)((FName *)(pFVar3 + 1) + 1));
      pIVar1 = (pFVar3->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pIVar1 = pFVar3[-1].TextData.Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pFVar2 = (((FNamingTokenData *)(pFVar3 + -2))->TokenKey).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar3 = pFVar3 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNamingTokenValueData,int> @ 14d0d26d0

void __cdecl DestructItems<FNamingTokenValueData,int>(FNamingTokenValueData *param_1,int param_2)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  
  if (param_2 != 0) {
    pFVar3 = &param_1->TokenNamespace;
    do {
      pIVar1 = (((FText *)(pFVar3 + 1))->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (((FNamingTokenValueData *)(pFVar3 + -1))->TokenKey).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar3 = (FString *)((longlong)(pFVar3 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindByPredicate<`UNamingTokens::EvaluateTokenText'::__l46::<lambda_3>_> @ 14d0d3410

FNamingTokenData * __thiscall
TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UNamingTokens::EvaluateTokenText_::__l46::<lambda_3>_>
          (TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> *this,<lambda_3> param_1)

{
  int iVar1;
  int iVar2;
  FNamingTokenData *pFVar3;
  FNamingTokenData *pFVar4;
  bool bVar5;
  
  pFVar4 = (FNamingTokenData *)(this->AllocatorInstance).Data;
  pFVar3 = pFVar4 + this->ArrayNum;
  while( true ) {
    if (pFVar4 == pFVar3) {
      return (FNamingTokenData *)0x0;
    }
    iVar2 = ((param_1.NamingTokenKeyData)->TokenKey).Data.ArrayNum;
    iVar1 = (pFVar4->TokenKey).Data.ArrayNum;
    if (iVar2 == iVar1) {
      if (iVar2 < 2) {
        return pFVar4;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)
                         ((param_1.NamingTokenKeyData)->TokenKey).Data.AllocatorInstance.Data,
                         (wchar_t *)(pFVar4->TokenKey).Data.AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
    }
    else {
      bVar5 = iVar2 + iVar1 == 1;
    }
    if (bVar5) break;
    pFVar4 = pFVar4 + 1;
  }
  return pFVar4;
}

// InternalConstructor<UGlobalNamingTokens> @ 14d0d38a0

void __cdecl InternalConstructor<UGlobalNamingTokens>(FObjectInitializer *param_1)

{
  UNamingTokens *this;
  int iVar1;
  
  this = (UNamingTokens *)param_1->Obj;
  if (this != (UNamingTokens *)0x0) {
    UNamingTokens::UNamingTokens(this);
    this->_padding_ = (longlong)&___7UGlobalNamingTokens__6B_;
    iVar1 = UGlobalNamingTokens::GlobalNamespace.Data.ArrayNum + -1;
    if (UGlobalNamingTokens::GlobalNamespace.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    FString::AssignRange
              (&this->Namespace,
               (wchar_t *)UGlobalNamingTokens::GlobalNamespace.Data.AllocatorInstance.Data,iVar1);
    return;
  }
  return;
}

// InternalConstructor<UNamingTokens> @ 14d0d3900

void __cdecl InternalConstructor<UNamingTokens>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  *(undefined ***)this = &___7UNamingTokens__6B_;
  *(undefined8 *)&this[1].field_0x18 = 2;
  *(undefined8 *)(this + 1) = 0;
  *(undefined8 *)&this[1].field_0x8 = 0;
  *(undefined8 *)&this[1].field_0x10 = 0;
  *(undefined8 *)&this[1].field_0x20 = 0;
  *(undefined8 *)(this + 2) = 0;
  *(undefined8 *)&this[2].field_0x8 = 0;
  *(undefined8 *)&this[2].field_0x18 = 0;
  *(undefined8 *)&this[2].field_0x20 = 0;
  *(undefined8 *)(this + 3) = 0;
  *(undefined8 *)&this[3].field_0x8 = 0;
  *(undefined8 *)&this[3].field_0x20 = 0;
  *(undefined8 *)&this[2].field_0x10 = 2;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)&this[4].field_0x4 = 0x80;
  *(undefined4 *)&this[4].field_0x8 = 0xffffffff;
  *(undefined4 *)&this[4].field_0xc = 0;
  *(undefined8 *)&this[4].field_0x18 = 0;
  *(undefined4 *)&this[4].field_0x20 = 0;
  *(undefined8 *)(this + 5) = 0;
  *(undefined8 *)&this[5].field_0x8 = 0;
  *(undefined8 *)&this[5].field_0x10 = 0;
  *(undefined8 *)&this[5].field_0x18 = 0;
  *(undefined8 *)&this[5].field_0x20 = 0;
  *(undefined1 *)(this + 6) = 0;
  *(undefined8 *)&this[6].field_0x8 = 0;
  *(undefined8 *)&this[6].field_0x10 = 0;
  FText::FText((FText *)&this[6].field_0x18);
  return;
}

// InternalConstructor<UNamingTokensEngineSubsystem> @ 14d0d3920

void __cdecl InternalConstructor<UNamingTokensEngineSubsystem>(FObjectInitializer *param_1)

{
  UEngineSubsystem *this;
  
  this = (UEngineSubsystem *)param_1->Obj;
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this);
    *(undefined ***)this = &___7UNamingTokensEngineSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)&this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x80;
    *(undefined4 *)(this + 2) = 0xffffffff;
    *(undefined4 *)&this[2].field_0x4 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[2].field_0x20,4000);
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined4 *)&this[4].field_0x10 = 0;
    *(undefined4 *)&this[4].field_0x14 = 0x80;
    *(undefined4 *)&this[4].field_0x1c = 0;
    *(undefined4 *)&this[4].field_0x18 = 0xffffffff;
    *(undefined8 *)&this[4].field_0x28 = 0;
    *(undefined4 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x28 = 0;
    *(undefined4 *)(this + 6) = 0;
    *(undefined4 *)&this[6].field_0x4 = 0x80;
    *(undefined4 *)&this[6].field_0xc = 0;
    *(undefined4 *)&this[6].field_0x8 = 0xffffffff;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined4 *)&this[6].field_0x20 = 0;
    this[6].field_0x28 = 1;
  }
  return;
}

// InternalVTableHelperCtorCaller<UGlobalNamingTokens> @ 14d0d3a20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGlobalNamingTokens>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNamingTokens *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGlobalNamingTokens::GetPrivateStaticClass();
  this = (UNamingTokens *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNamingTokens *)0x0) {
    UNamingTokens::UNamingTokens(this,param_1);
    this->_padding_ = (longlong)&___7UGlobalNamingTokens__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNamingTokens> @ 14d0d3ad0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNamingTokens>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNamingTokens *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNamingTokens::GetPrivateStaticClass();
  pUVar3 = (UNamingTokens *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNamingTokens *)0x0) {
    pUVar3 = UNamingTokens::UNamingTokens(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNamingTokensEngineSubsystem> @ 14d0d3b70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNamingTokensEngineSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNamingTokensEngineSubsystem::GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    *(undefined ***)this = &___7UNamingTokensEngineSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)&this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x80;
    *(undefined4 *)(this + 2) = 0xffffffff;
    *(undefined4 *)&this[2].field_0x4 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[2].field_0x20,4000);
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined4 *)&this[4].field_0x10 = 0;
    *(undefined4 *)&this[4].field_0x14 = 0x80;
    *(undefined4 *)&this[4].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x1c = 0;
    *(undefined8 *)&this[4].field_0x28 = 0;
    *(undefined4 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x28 = 0;
    *(undefined4 *)(this + 6) = 0;
    *(undefined4 *)&this[6].field_0x4 = 0x80;
    *(undefined4 *)&this[6].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[6].field_0xc = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined4 *)&this[6].field_0x20 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewObject<UNamingTokens> @ 14d0d3ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNamingTokens * __cdecl
NewObject<UNamingTokens>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UNamingTokens *pUVar2;
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
  pUVar1 = UNamingTokens::StaticClass();
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
  pUVar2 = (UNamingTokens *)
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

// `scalar_deleting_destructor' @ 14d0d6ce0

void * __thiscall
IBaseDelegateInstance<UNamingTokens_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<UNamingTokens_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d6d10

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_10>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d6d40

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_11>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d6d70

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_12>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d6da0

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_13>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d6dd0

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_14>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d6e00

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_15>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d6e30

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_16>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d6e60

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_17>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d6e90

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_18>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d6ec0

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_19>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d6ef0

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d6f20

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d6f50

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d6f80

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d6fb0

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d6fe0

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_6>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d7010

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_7>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d7040

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_8>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d7070

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_9>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d70a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNamingTokensModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FNamingTokensModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d70d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UNamingTokensEngineSubsystem_const_,UNamingTokens_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,UNamingTokensEngineSubsystem_const_,UNamingTokens_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d7100

void * __thiscall
TCommonDelegateInstanceState<UNamingTokens_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<UNamingTokens_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d7130

void * __thiscall
UGlobalNamingTokens::_scalar_deleting_destructor_(UGlobalNamingTokens *this,uint param_1)

{
  *(undefined ***)this = &___7UGlobalNamingTokens__6B_;
  UNamingTokens::~UNamingTokens((UNamingTokens *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d7190

void * __thiscall UNamingTokens::_scalar_deleting_destructor_(UNamingTokens *this,uint param_1)

{
  ~UNamingTokens(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0d71f0

void * __thiscall
UNamingTokensEngineSubsystem::_scalar_deleting_destructor_
          (UNamingTokensEngineSubsystem *this,uint param_1)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7UNamingTokensEngineSubsystem__6B_;
  *(undefined4 *)&(this->FilterNamespaceDelegates).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FilterNamespaceDelegates).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FilterNamespaceDelegates);
  (this->GlobalNamespaces).HashSize = 0;
  FVar2 = (this->GlobalNamespaces).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->GlobalNamespaces).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CachedNamingTokensMutex);
  *(undefined4 *)&(this->CachedNamingTokens).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedNamingTokens).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UNamingTokens>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UNamingTokens>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UNamingTokens>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedNamingTokens);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeGlobalNamingTokens @ 14d0d9b00

void __cdecl EmptyLinkFunctionForGeneratedCodeGlobalNamingTokens(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNamingTokenData @ 14d0d9b10

void __cdecl EmptyLinkFunctionForGeneratedCodeNamingTokenData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNamingTokens @ 14d0d9b20

void __cdecl EmptyLinkFunctionForGeneratedCodeNamingTokens(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNamingTokensEngineSubsystem @ 14d0d9b30

void __cdecl EmptyLinkFunctionForGeneratedCodeNamingTokensEngineSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNamingTokensEvaluationData @ 14d0d9b40

void __cdecl EmptyLinkFunctionForGeneratedCodeNamingTokensEvaluationData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNamingTokens_init @ 14d0d9b50

void __cdecl EmptyLinkFunctionForGeneratedCodeNamingTokens_init(void)

{
  return;
}

// Z_Construct_UClass_UGlobalNamingTokens_NoRegister @ 14d0e70a0

UClass * __cdecl Z_Construct_UClass_UGlobalNamingTokens_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGlobalNamingTokens.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NamingTokens",L"GlobalNamingTokens",
               &Z_Registration_Info_UClass_UGlobalNamingTokens.InnerSingleton,
               UGlobalNamingTokens::StaticRegisterNativesUGlobalNamingTokens,0x118,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UGlobalNamingTokens>,
               InternalVTableHelperCtorCaller<UGlobalNamingTokens>,local_res8,
               UNamingTokens::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGlobalNamingTokens.InnerSingleton;
}

// Z_Construct_UClass_UNamingTokensEngineSubsystem_NoRegister @ 14d0e7160

UClass * __cdecl Z_Construct_UClass_UNamingTokensEngineSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNamingTokensEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NamingTokens",L"NamingTokensEngineSubsystem",
               &Z_Registration_Info_UClass_UNamingTokensEngineSubsystem.InnerSingleton,
               UNamingTokensEngineSubsystem::StaticRegisterNativesUNamingTokensEngineSubsystem,0x150
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNamingTokensEngineSubsystem>,
               InternalVTableHelperCtorCaller<UNamingTokensEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNamingTokensEngineSubsystem.InnerSingleton;
}

// IMPLEMENT_MODULE_NamingTokens @ 14d0e8090

void __cdecl IMPLEMENT_MODULE_NamingTokens(void)

{
  return;
}

// GlobalNamespace'' @ 1504559a0

void __cdecl `dynamic_atexit_destructor_for_'UGlobalNamingTokens::GlobalNamespace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UGlobalNamingTokens::GlobalNamespace.Data.AllocatorInstance.Data;
  if (UGlobalNamingTokens::GlobalNamespace.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UGlobalNamingTokens::GlobalNamespace.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'Delimiter'' @ 1504559c0

void __cdecl
`UE::NamingTokens::Utils::GetNamespaceDelimiter'::__l2::_dynamic_atexit_destructor_for__Delimiter__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Delimiter.Data.AllocatorInstance.Data;
  if (Delimiter.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Delimiter.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogNamingTokens'' @ 1504559e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNamingTokens__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNamingTokens);
  return;
}

// `dynamic_atexit_destructor_for_'Pattern'' @ 150455a00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
`UE::NamingTokens::Utils::GetTokenKeysFromString'::__l2::_dynamic_atexit_destructor_for__Pattern__
          (void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (Pattern.Implementation.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'Pattern'' @ 150455a20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
`UE::NamingTokens::Utils::IsTokenInString'::__l2::_dynamic_atexit_destructor_for__Pattern__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (Pattern.Implementation.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'PatternString'' @ 150455a40

void __cdecl
`UE::NamingTokens::Utils::GetTokenKeysFromString'::__l2::
_dynamic_atexit_destructor_for__PatternString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PatternString.Data.AllocatorInstance.Data;
  if (PatternString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PatternString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PatternString'' @ 150455a60

void __cdecl
`UE::NamingTokens::Utils::IsTokenInString'::__l2::_dynamic_atexit_destructor_for__PatternString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PatternString.Data.AllocatorInstance.Data;
  if (PatternString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PatternString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

