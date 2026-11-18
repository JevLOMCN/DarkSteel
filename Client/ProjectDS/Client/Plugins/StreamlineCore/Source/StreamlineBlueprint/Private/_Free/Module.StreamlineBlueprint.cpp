// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineBlueprint
// Functions: 41

// `dynamic_initializer_for_'LogStreamlineBlueprint'' @ 141402930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStreamlineBlueprint__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStreamlineBlueprint,L"LogStreamlineBlueprint",Verbose,All);
  atexit(_dynamic_atexit_destructor_for__LogStreamlineBlueprint__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantStreamlineBlueprint'' @ 141402970

void __cdecl _dynamic_initializer_for__ModuleRegistrantStreamlineBlueprint__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "StreamlineBlueprint";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"StreamlineBlueprint",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FStreamlineBlueprintModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_StreamlineCore_Source_StreamlineBlueprint_Public_StreamlineLibrary_h__Script_StreamlineBlueprint_3113990788'' @ 1414029c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_StreamlineCore_Source_StreamlineBlueprint_Public_StreamlineLibrary_h__Script_StreamlineBlueprint_3113990788__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StreamlineBlueprint",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_StreamlineCore_Source_StreamlineBlueprint_Public_StreamlineLibrary_h__Script_StreamlineBlueprint_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_StreamlineCore_Source_StreamlineBlueprint_Public_StreamlineLibrary_h__Script_StreamlineBlueprint_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_StreamlineCore_Source_StreamlineBlueprint_Public_StreamlineLibrary_h__Script_StreamlineBlueprint_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_StreamlineBlueprint'' @ 141402a10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_StreamlineBlueprint__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xa7ba444a;
  local_res8[0].DeclarationsHash = 0x6d3897ed;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_StreamlineBlueprint,L"/Script/StreamlineBlueprint",
             &Z_Registration_Info_UPackage__Script_StreamlineBlueprint,local_res8);
  return;
}

// Z_Construct_UPackage__Script_StreamlineBlueprint @ 14de859b0

UPackage * __cdecl Z_Construct_UPackage__Script_StreamlineBlueprint(void)

{
  if (Z_Registration_Info_UPackage__Script_StreamlineBlueprint.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_StreamlineBlueprint.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_StreamlineBlueprint.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14de85c70

void * __thiscall
FStreamlineBlueprintModule::_scalar_deleting_destructor_
          (FStreamlineBlueprintModule *this,uint param_1)

{
  *this = (FStreamlineBlueprintModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UStreamlineLibrary @ 14de85cb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStreamlineLibrary(void)

{
  if (Z_Registration_Info_UClass_UStreamlineLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStreamlineLibrary.OuterSingleton,
               &Z_Construct_UClass_UStreamlineLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStreamlineLibrary.OuterSingleton;
}

// Z_Construct_UEnum_StreamlineBlueprint_EStreamlineFeature @ 14de85cf0

UEnum * __cdecl Z_Construct_UEnum_StreamlineBlueprint_EStreamlineFeature(void)

{
  if (Z_Registration_Info_UEnum_EStreamlineFeature.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStreamlineFeature.InnerSingleton,
               &Z_Construct_UEnum_StreamlineBlueprint_EStreamlineFeature_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStreamlineFeature.InnerSingleton;
}

// Z_Construct_UEnum_StreamlineBlueprint_EStreamlineFeatureRequirementsFlags @ 14de85d30

UEnum * __cdecl Z_Construct_UEnum_StreamlineBlueprint_EStreamlineFeatureRequirementsFlags(void)

{
  if (Z_Registration_Info_UEnum_EStreamlineFeatureRequirementsFlags.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStreamlineFeatureRequirementsFlags.InnerSingleton,
               &Z_Construct_UEnum_StreamlineBlueprint_EStreamlineFeatureRequirementsFlags_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EStreamlineFeatureRequirementsFlags.InnerSingleton;
}

// Z_Construct_UEnum_StreamlineBlueprint_EStreamlineFeatureSupport @ 14de85d70

UEnum * __cdecl Z_Construct_UEnum_StreamlineBlueprint_EStreamlineFeatureSupport(void)

{
  if (Z_Registration_Info_UEnum_EStreamlineFeatureSupport.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStreamlineFeatureSupport.InnerSingleton,
               &Z_Construct_UEnum_StreamlineBlueprint_EStreamlineFeatureSupport_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_EStreamlineFeatureSupport.InnerSingleton;
}

// Z_Construct_UScriptStruct_FStreamlineFeatureRequirements @ 14de85db0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStreamlineFeatureRequirements(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStreamlineFeatureRequirements.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStreamlineFeatureRequirements.InnerSingleton,
               &Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStreamlineFeatureRequirements.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStreamlineFeatureRequirements.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStreamlineVersion @ 14de85e30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStreamlineVersion(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStreamlineVersion.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStreamlineVersion.InnerSingleton,
               &Z_Construct_UScriptStruct_FStreamlineVersion_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStreamlineVersion.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStreamlineVersion.InnerSingleton;
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

// EStreamlineFeature_StaticEnum @ 14de85eb0

UEnum * __cdecl EStreamlineFeature_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamlineFeature.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StreamlineBlueprint();
    Z_Registration_Info_UEnum_EStreamlineFeature.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_EStreamlineFeature,(UObject *)pUVar1,
                       L"EStreamlineFeature");
  }
  return Z_Registration_Info_UEnum_EStreamlineFeature.OuterSingleton;
}

// EStreamlineFeatureSupport_StaticEnum @ 14de85ef0

UEnum * __cdecl EStreamlineFeatureSupport_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamlineFeatureSupport.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StreamlineBlueprint();
    Z_Registration_Info_UEnum_EStreamlineFeatureSupport.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_EStreamlineFeatureSupport,
                       (UObject *)pUVar1,L"EStreamlineFeatureSupport");
  }
  return Z_Registration_Info_UEnum_EStreamlineFeatureSupport.OuterSingleton;
}

// EStreamlineFeatureRequirementsFlags_StaticEnum @ 14de85f30

UEnum * __cdecl EStreamlineFeatureRequirementsFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamlineFeatureRequirementsFlags.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_StreamlineBlueprint();
    Z_Registration_Info_UEnum_EStreamlineFeatureRequirementsFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_EStreamlineFeatureRequirementsFlags,
                       (UObject *)pUVar1,L"EStreamlineFeatureRequirementsFlags");
  }
  return Z_Registration_Info_UEnum_EStreamlineFeatureRequirementsFlags.OuterSingleton;
}

// NewStructOps @ 14de85f70

void * __cdecl Z_Construct_UScriptStruct_FStreamlineVersion_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStreamlineVersion,&UE::CoreUObject::Private::Construct<FStreamlineVersion>,&UE::CoreUObject::Private::ConstructForTests<FStreamlineVersion>,&UE::CoreUObject::Private::Destruct<FStreamlineVersion>,&UE::CoreUObject::Private::Copy<FStreamlineVersion>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14de85fb0

void * __cdecl Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x34;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStreamlineFeatureRequirements,&UE::CoreUObject::Private::Construct<FStreamlineFeatureRequirements>,&UE::CoreUObject::Private::ConstructForTests<FStreamlineFeatureRequirements>,&UE::CoreUObject::Private::Destruct<FStreamlineFeatureRequirements>,&UE::CoreUObject::Private::Copy<FStreamlineFeatureRequirements>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_D3D11Supported_SetBit @ 14de85ff0

void __cdecl
Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::
NewProp_D3D11Supported_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_D3D12Supported_SetBit @ 14de86000

void __cdecl
Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::
NewProp_D3D12Supported_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_VulkanSupported_SetBit @ 14de86010

void __cdecl
Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::
NewProp_VulkanSupported_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewProp_VSyncOffRequired_SetBit @ 14de86020

void __cdecl
Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::
NewProp_VSyncOffRequired_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_HardwareSchedulingRequired_SetBit @ 14de86030

void __cdecl
Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::
NewProp_HardwareSchedulingRequired_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements @ 14de86040

UFunction * __cdecl
Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation @ 14de86080

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de860c0

void __cdecl
Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported @ 14de860d0

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport @ 14de86110

UFunction * __cdecl Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<UStreamlineLibrary> @ 14de86150

void __cdecl InternalConstructor<UStreamlineLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UStreamlineLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UStreamlineLibrary> @ 14de86180

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStreamlineLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStreamlineLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UStreamlineLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EStreamlineFeature> @ 14de86230

UEnum * __cdecl StaticEnum<enum_EStreamlineFeature>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamlineFeature.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StreamlineBlueprint();
    Z_Registration_Info_UEnum_EStreamlineFeature.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_EStreamlineFeature,(UObject *)pUVar1,
                       L"EStreamlineFeature");
  }
  return Z_Registration_Info_UEnum_EStreamlineFeature.OuterSingleton;
}

// StaticEnum<enum_EStreamlineFeatureRequirementsFlags> @ 14de86270

UEnum * __cdecl StaticEnum<enum_EStreamlineFeatureRequirementsFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamlineFeatureRequirementsFlags.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_StreamlineBlueprint();
    Z_Registration_Info_UEnum_EStreamlineFeatureRequirementsFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_EStreamlineFeatureRequirementsFlags,
                       (UObject *)pUVar1,L"EStreamlineFeatureRequirementsFlags");
  }
  return Z_Registration_Info_UEnum_EStreamlineFeatureRequirementsFlags.OuterSingleton;
}

// StaticEnum<enum_EStreamlineFeatureSupport> @ 14de862b0

UEnum * __cdecl StaticEnum<enum_EStreamlineFeatureSupport>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamlineFeatureSupport.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StreamlineBlueprint();
    Z_Registration_Info_UEnum_EStreamlineFeatureSupport.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_EStreamlineFeatureSupport,
                       (UObject *)pUVar1,L"EStreamlineFeatureSupport");
  }
  return Z_Registration_Info_UEnum_EStreamlineFeatureSupport.OuterSingleton;
}

// ValidateEnumBitFlags<enum_EStreamlineFeatureRequirementsFlags> @ 14de862f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
ValidateEnumBitFlags<enum_EStreamlineFeatureRequirementsFlags>
          (EStreamlineFeatureRequirementsFlags param_1,char *param_2)

{
  code *pcVar1;
  UEnum *this;
  bool bVar2;
  undefined1 uVar3;
  UPackage *pUVar4;
  TTuple<FName,__int64> *pTVar5;
  FText *this_00;
  FString *pFVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  undefined1 auStack_1b8 [32];
  FScriptContainerElement *local_198;
  FString local_188;
  FText local_178;
  TTuple<FName,__int64> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  uVar10 = (ulonglong)param_1;
  if (Z_Registration_Info_UEnum_EStreamlineFeatureRequirementsFlags.OuterSingleton == (UEnum *)0x0)
  {
    pUVar4 = Z_Construct_UPackage__Script_StreamlineBlueprint();
    Z_Registration_Info_UEnum_EStreamlineFeatureRequirementsFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_EStreamlineFeatureRequirementsFlags,
                       (UObject *)pUVar4,L"EStreamlineFeatureRequirementsFlags");
  }
  this = Z_Registration_Info_UEnum_EStreamlineFeatureRequirementsFlags.OuterSingleton;
  iVar8 = ((Z_Registration_Info_UEnum_EStreamlineFeatureRequirementsFlags.OuterSingleton)->Names).
          NumValues;
  iVar9 = 0;
  uVar12 = uVar10;
  if (0 < iVar8 + -1) {
    do {
      if (((iVar9 < 0) || (iVar8 <= iVar9)) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Names.IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xb2d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pTVar5 = UEnum::FNameData::operator[](&this->Names,&local_168,iVar9);
      iVar9 = iVar9 + 1;
      uVar12 = uVar12 & ~*(ulonglong *)&pTVar5->field_0x8;
      iVar8 = (this->Names).NumValues;
    } while (iVar9 < iVar8 + -1);
  }
  if (uVar12 != 0) {
    this_00 = UEnum::GetDisplayNameTextByValue(this,&local_178,uVar10);
    pFVar6 = FText::ToString(this_00);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    local_158._padding_ = 0;
    if (param_2 == (char *)0x0) {
      local_158.Ptr = (wchar_t *)0x0;
      local_158.StringLength = 0;
    }
    else {
      sVar7 = strlen(param_2);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,param_2,(int)sVar7,Yes);
    }
    local_198 = (FScriptContainerElement *)pwVar13;
    FString::PrintfImpl(&local_188,
                        L"%s should not be called with an invalid enum bitflags (%d) \"%s\"");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_188.Data.ArrayNum != 0) {
      FVar11.Data = local_188.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar11.Data,Error,(FName)0x0);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
  }
  return uVar12 == 0;
}

// ValidateEnumValue<enum_EStreamlineFeature> @ 14de864e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl ValidateEnumValue<enum_EStreamlineFeature>(EStreamlineFeature param_1,char *param_2)

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
  if (Z_Registration_Info_UEnum_EStreamlineFeature.OuterSingleton == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_StreamlineBlueprint();
    Z_Registration_Info_UEnum_EStreamlineFeature.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_EStreamlineFeature,(UObject *)pUVar4,
                       L"EStreamlineFeature");
  }
  this = Z_Registration_Info_UEnum_EStreamlineFeature.OuterSingleton;
  bVar2 = UEnum::IsValidEnumValue
                    (Z_Registration_Info_UEnum_EStreamlineFeature.OuterSingleton,uVar11);
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

// `scalar_deleting_destructor' @ 14de867d0

void * __thiscall
UStreamlineLibrary::_scalar_deleting_destructor_(UStreamlineLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UStreamlineLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeStreamlineBlueprint_init @ 14de868c0

void __cdecl EmptyLinkFunctionForGeneratedCodeStreamlineBlueprint_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStreamlineLibrary @ 14de868d0

void __cdecl EmptyLinkFunctionForGeneratedCodeStreamlineLibrary(void)

{
  return;
}

// ToUStreamlineFeatureSupport @ 14de86d60

EStreamlineFeatureSupport __cdecl ToUStreamlineFeatureSupport(EStreamlineFeatureSupport param_1)

{
  switch(param_1) {
  case Supported:
    return Supported;
  default:
    return NotSupported;
  case NotSupportedIncompatibleHardware:
    return NotSupportedIncompatibleHardware;
  case NotSupportedHardwareSchedulingDisabled:
    return NotSupportedHardewareSchedulingDisabled;
  case NotSupportedOperatingSystemOutOfDate:
    return NotSupportedOperatingSystemOutOfDate;
  case NotSupportedDriverOutOfDate:
    return NotSupportedDriverOutOfDate;
  case NotSupportedIncompatibleRHI:
    return NotSupportedByRHI;
  }
}

// Z_Construct_UClass_UStreamlineLibrary_NoRegister @ 14de86e00

UClass * __cdecl Z_Construct_UClass_UStreamlineLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamlineLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StreamlineBlueprint",L"StreamlineLibrary",
               &Z_Registration_Info_UClass_UStreamlineLibrary.InnerSingleton,
               UStreamlineLibrary::StaticRegisterNativesUStreamlineLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UStreamlineLibrary>,
               InternalVTableHelperCtorCaller<UStreamlineLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamlineLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_StreamlineBlueprint @ 14de873d0

void __cdecl IMPLEMENT_MODULE_StreamlineBlueprint(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogStreamlineBlueprint'' @ 1504604f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStreamlineBlueprint__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStreamlineBlueprint);
  return;
}

