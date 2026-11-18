// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineReflexBlueprint
// Functions: 31

// `dynamic_initializer_for_'LogStreamlineReflexBlueprint'' @ 141402c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStreamlineReflexBlueprint__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStreamlineReflexBlueprint,L"LogStreamlineReflexBlueprint",Log,
             All);
  atexit(_dynamic_atexit_destructor_for__LogStreamlineReflexBlueprint__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantStreamlineReflexBlueprint'' @ 141402cd0

void __cdecl _dynamic_initializer_for__ModuleRegistrantStreamlineReflexBlueprint__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "StreamlineReflexBlueprint";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"StreamlineReflexBlueprint",0x19);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FStreamlineLibraryReflexBlueprintModule>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_StreamlineReflex_Source_StreamlineReflexBlueprint_Public_StreamlineLibraryReflex_h__Script_StreamlineReflexBlueprint_1745399187'' @ 141402d20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_StreamlineReflex_Source_StreamlineReflexBlueprint_Public_StreamlineLibraryReflex_h__Script_StreamlineReflexBlueprint_1745399187__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StreamlineReflexBlueprint",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_StreamlineReflex_Source_StreamlineReflexBlueprint_Public_StreamlineLibraryReflex_h__Script_StreamlineReflexBlueprint_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_StreamlineReflex_Source_StreamlineReflexBlueprint_Public_StreamlineLibraryReflex_h__Script_StreamlineReflexBlueprint_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_StreamlineReflexBlueprint'' @ 141402d70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_StreamlineReflexBlueprint__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x39bc6296;
  local_res8[0].DeclarationsHash = 0x26a063ec;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_StreamlineReflexBlueprint,
             L"/Script/StreamlineReflexBlueprint",
             &Z_Registration_Info_UPackage__Script_StreamlineReflexBlueprint,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14de8c380

void * __thiscall
FStreamlineLibraryReflexBlueprintModule::_scalar_deleting_destructor_
          (FStreamlineLibraryReflexBlueprintModule *this,uint param_1)

{
  *this = (FStreamlineLibraryReflexBlueprintModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UStreamlineLibraryReflex @ 14de8c3c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStreamlineLibraryReflex(void)

{
  if (Z_Registration_Info_UClass_UStreamlineLibraryReflex.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStreamlineLibraryReflex.OuterSingleton,
               &Z_Construct_UClass_UStreamlineLibraryReflex_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStreamlineLibraryReflex.OuterSingleton;
}

// Z_Construct_UEnum_StreamlineReflexBlueprint_EStreamlineReflexMode @ 14de8c400

UEnum * __cdecl Z_Construct_UEnum_StreamlineReflexBlueprint_EStreamlineReflexMode(void)

{
  if (Z_Registration_Info_UEnum_EStreamlineReflexMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStreamlineReflexMode.InnerSingleton,
               &Z_Construct_UEnum_StreamlineReflexBlueprint_EStreamlineReflexMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EStreamlineReflexMode.InnerSingleton;
}

// Z_Construct_UPackage__Script_StreamlineReflexBlueprint @ 14de8c440

UPackage * __cdecl Z_Construct_UPackage__Script_StreamlineReflexBlueprint(void)

{
  if (Z_Registration_Info_UPackage__Script_StreamlineReflexBlueprint.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_StreamlineReflexBlueprint.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_StreamlineReflexBlueprint.OuterSingleton;
}

// EStreamlineReflexMode_StaticEnum @ 14de8c480

UEnum * __cdecl EStreamlineReflexMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamlineReflexMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StreamlineReflexBlueprint();
    Z_Registration_Info_UEnum_EStreamlineReflexMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StreamlineReflexBlueprint_EStreamlineReflexMode,
                       (UObject *)pUVar1,L"EStreamlineReflexMode");
  }
  return Z_Registration_Info_UEnum_EStreamlineReflexMode.OuterSingleton;
}

// Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode @ 14de8c4c0

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs @ 14de8c500

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs @ 14de8c540

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode @ 14de8c580

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs @ 14de8c5c0

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStreamlineLibraryReflex_GetSupportedReflexModes @ 14de8c600

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryReflex_GetSupportedReflexModes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryReflex_GetSupportedReflexModes_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de8c640

void __cdecl
Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexModeSupported_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexModeSupported @ 14de8c650

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexModeSupported(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexModeSupported_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de8c690

void __cdecl
Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported @ 14de8c6a0

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport @ 14de8c6e0

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode @ 14de8c720

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<UStreamlineLibraryReflex> @ 14de8c760

void __cdecl InternalConstructor<UStreamlineLibraryReflex>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UStreamlineLibraryReflex__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UStreamlineLibraryReflex> @ 14de8c790

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStreamlineLibraryReflex>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStreamlineLibraryReflex::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UStreamlineLibraryReflex__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EStreamlineReflexMode> @ 14de8c840

UEnum * __cdecl StaticEnum<enum_EStreamlineReflexMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamlineReflexMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StreamlineReflexBlueprint();
    Z_Registration_Info_UEnum_EStreamlineReflexMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StreamlineReflexBlueprint_EStreamlineReflexMode,
                       (UObject *)pUVar1,L"EStreamlineReflexMode");
  }
  return Z_Registration_Info_UEnum_EStreamlineReflexMode.OuterSingleton;
}

// ValidateEnumValue<enum_EStreamlineReflexMode> @ 14de8c880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
ValidateEnumValue<enum_EStreamlineReflexMode>(EStreamlineReflexMode param_1,char *param_2)

{
  code *pcVar1;
  UEnum *this;
  bool bVar2;
  undefined1 uVar3;
  UPackage *pUVar4;
  ulonglong uVar5;
  FText *this_00;
  FString *pFVar6;
  size_t sVar7;
  FFrame *pFVar8;
  FFrame *pFVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  undefined1 auStack_1c8 [32];
  FScriptContainerElement *local_1a8;
  FString local_198;
  undefined1 local_188 [8];
  FText local_180;
  FBlueprintExceptionInfo local_170;
  FText local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  uVar11 = (ulonglong)param_1;
  if (Z_Registration_Info_UEnum_EStreamlineReflexMode.OuterSingleton == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_StreamlineReflexBlueprint();
    Z_Registration_Info_UEnum_EStreamlineReflexMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StreamlineReflexBlueprint_EStreamlineReflexMode,
                       (UObject *)pUVar4,L"EStreamlineReflexMode");
  }
  this = Z_Registration_Info_UEnum_EStreamlineReflexMode.OuterSingleton;
  bVar2 = UEnum::IsValidEnumValue
                    (Z_Registration_Info_UEnum_EStreamlineReflexMode.OuterSingleton,uVar11);
  if ((bVar2) && (uVar5 = UEnum::GetMaxEnumValue(this), uVar5 != uVar11)) {
    return true;
  }
  this_00 = UEnum::GetDisplayNameTextByValue(this,&local_158,uVar11);
  pFVar6 = FText::ToString(this_00);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  local_148._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar7 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,param_2,(int)sVar7,Yes);
  }
  local_1a8 = (FScriptContainerElement *)pwVar10;
  FString::PrintfImpl(&local_198,L"%s should not be called with an invalid enum value (%d) \"%s\"");
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  if (local_158.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_198.Data.ArrayNum != 0) {
    FVar12.Data = local_198.Data.AllocatorInstance.Data;
  }
  FFrame::KismetExecutionMessage((wchar_t *)FVar12.Data,Error,(FName)0x0);
  FText::FromString(&local_180,&local_198);
  local_170.EventType = Breakpoint;
  local_170.Description.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_180.TextData.Reference;
  if (local_180.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_180.TextData.Reference + 8))
              (local_180.TextData.Reference,local_188);
  }
  local_170.Description.field0_0x0.TypedValue.Flags = local_180.Flags;
  if ((local_170.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pFVar8 = FFrame::GetThreadLocalTopStackFrame();
  pFVar9 = FFrame::GetThreadLocalTopStackFrame();
  FBlueprintCoreDelegates::ThrowScriptException(pFVar9->Object,pFVar8,&local_170);
  if (local_170.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_170.Description.field0_0x0.TypedValue.TextData.Reference + 0x10
                ))();
  }
  if (local_180.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  return false;
}

// `scalar_deleting_destructor' @ 14de8cb40

void * __thiscall
UStreamlineLibraryReflex::_scalar_deleting_destructor_(UStreamlineLibraryReflex *this,uint param_1)

{
  *(undefined ***)this = &___7UStreamlineLibraryReflex__6B_;
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

// EmptyLinkFunctionForGeneratedCodeStreamlineLibraryReflex @ 14de8cba0

void __cdecl EmptyLinkFunctionForGeneratedCodeStreamlineLibraryReflex(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStreamlineReflexBlueprint_init @ 14de8cbb0

void __cdecl EmptyLinkFunctionForGeneratedCodeStreamlineReflexBlueprint_init(void)

{
  return;
}

// Z_Construct_UClass_UStreamlineLibraryReflex_NoRegister @ 14de8da80

UClass * __cdecl Z_Construct_UClass_UStreamlineLibraryReflex_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamlineLibraryReflex.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StreamlineReflexBlueprint",L"StreamlineLibraryReflex",
               &Z_Registration_Info_UClass_UStreamlineLibraryReflex.InnerSingleton,
               UStreamlineLibraryReflex::StaticRegisterNativesUStreamlineLibraryReflex,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UStreamlineLibraryReflex>,
               InternalVTableHelperCtorCaller<UStreamlineLibraryReflex>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamlineLibraryReflex.InnerSingleton;
}

// IMPLEMENT_MODULE_StreamlineReflexBlueprint @ 14de8e460

void __cdecl IMPLEMENT_MODULE_StreamlineReflexBlueprint(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogStreamlineReflexBlueprint'' @ 150460550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStreamlineReflexBlueprint__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStreamlineReflexBlueprint);
  return;
}

