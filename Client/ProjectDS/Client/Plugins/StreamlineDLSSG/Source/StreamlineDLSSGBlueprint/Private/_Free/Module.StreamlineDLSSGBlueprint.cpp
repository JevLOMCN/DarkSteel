// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineDLSSGBlueprint
// Functions: 29

// `dynamic_initializer_for_'LogStreamlineDLSSGBlueprint'' @ 141402b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStreamlineDLSSGBlueprint__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStreamlineDLSSGBlueprint,L"LogStreamlineDLSSGBlueprint",Log,All
            );
  atexit(_dynamic_atexit_destructor_for__LogStreamlineDLSSGBlueprint__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantStreamlineDLSSGBlueprint'' @ 141402bb0

void __cdecl _dynamic_initializer_for__ModuleRegistrantStreamlineDLSSGBlueprint__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "StreamlineDLSSGBlueprint";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"StreamlineDLSSGBlueprint",0x18);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FStreamlineLibraryDLSSGBlueprintModule>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_StreamlineDLSSG_Source_StreamlineDLSSGBlueprint_Public_StreamlineLibraryDLSSG_h__Script_StreamlineDLSSGBlueprint_387770410'' @ 141402c00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_StreamlineDLSSG_Source_StreamlineDLSSGBlueprint_Public_StreamlineLibraryDLSSG_h__Script_StreamlineDLSSGBlueprint_387770410__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StreamlineDLSSGBlueprint",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_StreamlineDLSSG_Source_StreamlineDLSSGBlueprint_Public_StreamlineLibraryDLSSG_h__Script_StreamlineDLSSGBlueprint_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_StreamlineDLSSG_Source_StreamlineDLSSGBlueprint_Public_StreamlineLibraryDLSSG_h__Script_StreamlineDLSSGBlueprint_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_StreamlineDLSSGBlueprint'' @ 141402c50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_StreamlineDLSSGBlueprint__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x86fc4331;
  local_res8[0].DeclarationsHash = 0xbf7be674;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_StreamlineDLSSGBlueprint,
             L"/Script/StreamlineDLSSGBlueprint",
             &Z_Registration_Info_UPackage__Script_StreamlineDLSSGBlueprint,local_res8);
  return;
}

// Z_Construct_UPackage__Script_StreamlineDLSSGBlueprint @ 14de89e40

UPackage * __cdecl Z_Construct_UPackage__Script_StreamlineDLSSGBlueprint(void)

{
  if (Z_Registration_Info_UPackage__Script_StreamlineDLSSGBlueprint.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_StreamlineDLSSGBlueprint.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_StreamlineDLSSGBlueprint.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14de8a1d0

void * __thiscall
FStreamlineLibraryDLSSGBlueprintModule::_scalar_deleting_destructor_
          (FStreamlineLibraryDLSSGBlueprintModule *this,uint param_1)

{
  *this = (FStreamlineLibraryDLSSGBlueprintModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UStreamlineLibraryDLSSG @ 14de8a210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStreamlineLibraryDLSSG(void)

{
  if (Z_Registration_Info_UClass_UStreamlineLibraryDLSSG.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStreamlineLibraryDLSSG.OuterSingleton,
               &Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStreamlineLibraryDLSSG.OuterSingleton;
}

// Z_Construct_UEnum_StreamlineDLSSGBlueprint_EStreamlineDLSSGMode @ 14de8a250

UEnum * __cdecl Z_Construct_UEnum_StreamlineDLSSGBlueprint_EStreamlineDLSSGMode(void)

{
  if (Z_Registration_Info_UEnum_EStreamlineDLSSGMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStreamlineDLSSGMode.InnerSingleton,
               &Z_Construct_UEnum_StreamlineDLSSGBlueprint_EStreamlineDLSSGMode_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_EStreamlineDLSSGMode.InnerSingleton;
}

// EStreamlineDLSSGMode_StaticEnum @ 14de8a290

UEnum * __cdecl EStreamlineDLSSGMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamlineDLSSGMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StreamlineDLSSGBlueprint();
    Z_Registration_Info_UEnum_EStreamlineDLSSGMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StreamlineDLSSGBlueprint_EStreamlineDLSSGMode,
                       (UObject *)pUVar1,L"EStreamlineDLSSGMode");
  }
  return Z_Registration_Info_UEnum_EStreamlineDLSSGMode.OuterSingleton;
}

// Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode @ 14de8a2d0

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming @ 14de8a310

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode @ 14de8a350

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes @ 14de8a390

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de8a3d0

void __cdecl
Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported @ 14de8a3e0

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de8a420

void __cdecl
Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported @ 14de8a430

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport @ 14de8a470

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode @ 14de8a4b0

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<UStreamlineLibraryDLSSG> @ 14de8a4f0

void __cdecl InternalConstructor<UStreamlineLibraryDLSSG>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UStreamlineLibraryDLSSG__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UStreamlineLibraryDLSSG> @ 14de8a520

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStreamlineLibraryDLSSG>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStreamlineLibraryDLSSG::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UStreamlineLibraryDLSSG__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EStreamlineDLSSGMode> @ 14de8a5d0

UEnum * __cdecl StaticEnum<enum_EStreamlineDLSSGMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamlineDLSSGMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StreamlineDLSSGBlueprint();
    Z_Registration_Info_UEnum_EStreamlineDLSSGMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StreamlineDLSSGBlueprint_EStreamlineDLSSGMode,
                       (UObject *)pUVar1,L"EStreamlineDLSSGMode");
  }
  return Z_Registration_Info_UEnum_EStreamlineDLSSGMode.OuterSingleton;
}

// ValidateEnumValue<enum_EStreamlineDLSSGMode> @ 14de8a610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
ValidateEnumValue<enum_EStreamlineDLSSGMode>(EStreamlineDLSSGMode param_1,char *param_2)

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
  if (Z_Registration_Info_UEnum_EStreamlineDLSSGMode.OuterSingleton == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_StreamlineDLSSGBlueprint();
    Z_Registration_Info_UEnum_EStreamlineDLSSGMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StreamlineDLSSGBlueprint_EStreamlineDLSSGMode,
                       (UObject *)pUVar4,L"EStreamlineDLSSGMode");
  }
  this = Z_Registration_Info_UEnum_EStreamlineDLSSGMode.OuterSingleton;
  bVar2 = UEnum::IsValidEnumValue
                    (Z_Registration_Info_UEnum_EStreamlineDLSSGMode.OuterSingleton,uVar11);
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

// `scalar_deleting_destructor' @ 14de8a8d0

void * __thiscall
UStreamlineLibraryDLSSG::_scalar_deleting_destructor_(UStreamlineLibraryDLSSG *this,uint param_1)

{
  *(undefined ***)this = &___7UStreamlineLibraryDLSSG__6B_;
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

// EmptyLinkFunctionForGeneratedCodeStreamlineDLSSGBlueprint_init @ 14de8a930

void __cdecl EmptyLinkFunctionForGeneratedCodeStreamlineDLSSGBlueprint_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStreamlineLibraryDLSSG @ 14de8a940

void __cdecl EmptyLinkFunctionForGeneratedCodeStreamlineLibraryDLSSG(void)

{
  return;
}

// Z_Construct_UClass_UStreamlineLibraryDLSSG_NoRegister @ 14de8ba10

UClass * __cdecl Z_Construct_UClass_UStreamlineLibraryDLSSG_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamlineLibraryDLSSG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StreamlineDLSSGBlueprint",L"StreamlineLibraryDLSSG",
               &Z_Registration_Info_UClass_UStreamlineLibraryDLSSG.InnerSingleton,
               UStreamlineLibraryDLSSG::StaticRegisterNativesUStreamlineLibraryDLSSG,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UStreamlineLibraryDLSSG>
               ,InternalVTableHelperCtorCaller<UStreamlineLibraryDLSSG>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamlineLibraryDLSSG.InnerSingleton;
}

// IMPLEMENT_MODULE_StreamlineDLSSGBlueprint @ 14de8c160

void __cdecl IMPLEMENT_MODULE_StreamlineDLSSGBlueprint(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogStreamlineDLSSGBlueprint'' @ 150460530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStreamlineDLSSGBlueprint__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStreamlineDLSSGBlueprint);
  return;
}

