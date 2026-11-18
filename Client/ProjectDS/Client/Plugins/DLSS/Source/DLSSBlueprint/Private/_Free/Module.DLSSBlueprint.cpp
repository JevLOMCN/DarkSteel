// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSSBlueprint
// Functions: 61

// `dynamic_initializer_for_'FDLSSTemporalUpscalerModularFeatureTestAutomationTestInstance'' @ 1413fef80

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FDLSSTemporalUpscalerModularFeatureTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FDLSSTemporalUpscalerModularFeatureTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FDLSSTemporalUpscalerModularFeatureTestAutomationTestInstance,
             &local_18,false);
  FDLSSTemporalUpscalerModularFeatureTestAutomationTestInstance._0_8_ =
       &___7FDLSSTemporalUpscalerModularFeatureTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FDLSSTemporalUpscalerModularFeatureTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'IsDLSSModeSupportedInvalidEnumValueError'' @ 1413fefe0

void __cdecl _dynamic_initializer_for__IsDLSSModeSupportedInvalidEnumValueError__(void)

{
  FName::FName(&IsDLSSModeSupportedInvalidEnumValueError,"IsDLSSModeSupportedInvalidEnumValueError")
  ;
  return;
}

// `dynamic_initializer_for_'LogDLSSBlueprint'' @ 1413ff000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDLSSBlueprint__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogDLSSBlueprint,L"LogDLSSBlueprint",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDLSSBlueprint__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantDLSSBlueprint'' @ 1413ff040

void __cdecl _dynamic_initializer_for__ModuleRegistrantDLSSBlueprint__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "DLSSBlueprint";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"DLSSBlueprint",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDLSSBlueprintModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'SetDLSSModeInvalidEnumValueError'' @ 1413ff090

void __cdecl _dynamic_initializer_for__SetDLSSModeInvalidEnumValueError__(void)

{
  FName::FName(&SetDLSSModeInvalidEnumValueError,"SetDLSSModeInvalidEnumValueError");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h__Script_DLSSBlueprint_1178440097'' @ 1413ff0b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h__Script_DLSSBlueprint_1178440097__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DLSSBlueprint",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h__Script_DLSSBlueprint_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h__Script_DLSSBlueprint_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_DLSSBlueprint'' @ 1413ff100

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_DLSSBlueprint__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xe5d8854c;
  local_res8[0].DeclarationsHash = 0x4924c76c;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_DLSSBlueprint,L"/Script/DLSSBlueprint",
             &Z_Registration_Info_UPackage__Script_DLSSBlueprint,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14de2bbe0

void * __thiscall
FDLSSTemporalUpscalerModularFeatureTest::_scalar_deleting_destructor_
          (FDLSSTemporalUpscalerModularFeatureTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UPackage__Script_DLSSBlueprint @ 14de2bc20

UPackage * __cdecl Z_Construct_UPackage__Script_DLSSBlueprint(void)

{
  if (Z_Registration_Info_UPackage__Script_DLSSBlueprint.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_DLSSBlueprint.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_DLSSBlueprint.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14de2bf50

void * __thiscall
FDLSSBlueprintModule::_scalar_deleting_destructor_(FDLSSBlueprintModule *this,uint param_1)

{
  *this = (FDLSSBlueprintModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UDLSSLibrary @ 14de2bf90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDLSSLibrary(void)

{
  if (Z_Registration_Info_UClass_UDLSSLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDLSSLibrary.OuterSingleton,
               &Z_Construct_UClass_UDLSSLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDLSSLibrary.OuterSingleton;
}

// Z_Construct_UEnum_DLSSBlueprint_UDLSSMode @ 14de2bfd0

UEnum * __cdecl Z_Construct_UEnum_DLSSBlueprint_UDLSSMode(void)

{
  if (Z_Registration_Info_UEnum_UDLSSMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_UDLSSMode.InnerSingleton,
               &Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_UDLSSMode.InnerSingleton;
}

// Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport @ 14de2c010

UEnum * __cdecl Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport(void)

{
  if (Z_Registration_Info_UEnum_UDLSSSupport.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_UDLSSSupport.InnerSingleton,
               &Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_UDLSSSupport.InnerSingleton;
}

// UDLSSSupport_StaticEnum @ 14de2c050

UEnum * __cdecl UDLSSSupport_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_UDLSSSupport.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DLSSBlueprint();
    Z_Registration_Info_UEnum_UDLSSSupport.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport,(UObject *)pUVar1,
                       L"UDLSSSupport");
  }
  return Z_Registration_Info_UEnum_UDLSSSupport.OuterSingleton;
}

// UDLSSMode_StaticEnum @ 14de2c090

UEnum * __cdecl UDLSSMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DLSSBlueprint();
    Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSMode,(UObject *)pUVar1,L"UDLSSMode");
  }
  return Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton;
}

// NewProp_bEnabled_SetBit @ 14de2c0d0

void __cdecl
Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDLSSLibrary_EnableDLAA @ 14de2c0e0

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_EnableDLAA(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 14de2c120

void __cdecl
Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDLSSLibrary_EnableDLSS @ 14de2c130

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_EnableDLSS(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 14de2c170

void __cdecl
Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR @ 14de2c180

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode @ 14de2c1c0

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion @ 14de2c200

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode @ 14de2c240

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsSupported_SetBit @ 14de2c280

void __cdecl
Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_bIsSupported_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bIsFixedScreenPercentage_SetBit @ 14de2c290

void __cdecl
Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::
NewProp_bIsFixedScreenPercentage_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation @ 14de2c2a0

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion @ 14de2c2e0

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange @ 14de2c320

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes @ 14de2c360

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de2c3a0

void __cdecl
Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled @ 14de2c3b0

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de2c3f0

void __cdecl
Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled @ 14de2c400

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de2c440

void __cdecl
Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported @ 14de2c450

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de2c490

void __cdecl
Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled @ 14de2c4a0

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de2c4e0

void __cdecl
Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported @ 14de2c4f0

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de2c530

void __cdecl
Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported @ 14de2c540

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de2c580

void __cdecl
Z_Construct_UFunction_UDLSSLibrary_IsRayTracingAvailable_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDLSSLibrary_IsRayTracingAvailable @ 14de2c590

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_IsRayTracingAvailable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDLSSLibrary_IsRayTracingAvailable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport @ 14de2c5d0

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport @ 14de2c610

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode @ 14de2c650

UFunction * __cdecl Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<UDLSSLibrary> @ 14de2cae0

void __cdecl InternalConstructor<UDLSSLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UDLSSLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDLSSLibrary> @ 14de2cb10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDLSSLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDLSSLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDLSSLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_UDLSSMode> @ 14de2cbc0

UEnum * __cdecl StaticEnum<enum_UDLSSMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DLSSBlueprint();
    Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSMode,(UObject *)pUVar1,L"UDLSSMode");
  }
  return Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton;
}

// StaticEnum<enum_UDLSSSupport> @ 14de2cc00

UEnum * __cdecl StaticEnum<enum_UDLSSSupport>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_UDLSSSupport.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DLSSBlueprint();
    Z_Registration_Info_UEnum_UDLSSSupport.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport,(UObject *)pUVar1,
                       L"UDLSSSupport");
  }
  return Z_Registration_Info_UEnum_UDLSSSupport.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14de2ccc0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de2ccf0

void * __thiscall UDLSSLibrary::_scalar_deleting_destructor_(UDLSSLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UDLSSLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeDLSSBlueprint_init @ 14de2cec0

void __cdecl EmptyLinkFunctionForGeneratedCodeDLSSBlueprint_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDLSSLibrary @ 14de2ced0

void __cdecl EmptyLinkFunctionForGeneratedCodeDLSSLibrary(void)

{
  return;
}

// ToEDLSSQualityMode @ 14de2eda0

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

EDLSSQualityMode __cdecl ToEDLSSQualityMode(UDLSSMode param_1)

{
  code *pcVar1;
  bool bVar2;
  EDLSSQualityMode EVar3;
  
  switch(param_1) {
  case Off:
    if ((param_1 == Off) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("InDLSSQualityMode != UDLSSMode::Off",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSSBlueprint\\Private\\DLSSLibrary.cpp"
                           ,0x89,
                           L"ToEDLSSQualityMode should not be called with an InDLSSQualityMode of UDLSSMode::Off from the higher level code"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    break;
  case DLAA:
    return DLAA;
  case UltraQuality:
    return UltraQuality;
  case Quality:
    return Quality;
  case Balanced:
    return Balanced;
  case Performance:
    return Performance;
  case UltraPerformance:
    return MinValue;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSSBlueprint\\Private\\DLSSLibrary.cpp"
                     ,0x8b,
                     L"ToEDLSSQualityMode should not be called with an out of range InDLSSQualityMode %d InDLSSQualityMode from the higher level code"
                    );
  if (!bVar2) {
    return Performance;
  }
  pcVar1 = (code *)swi(3);
  EVar3 = (*pcVar1)();
  return EVar3;
}

// ToUDLSSSupport @ 14de2ee80

UDLSSSupport __cdecl ToUDLSSSupport(EDLSSSupport param_1)

{
  code *pcVar1;
  bool bVar2;
  UDLSSSupport UVar3;
  
  switch(param_1) {
  case Supported:
    return Supported;
  case NotSupported:
    goto switchD_14de2ee9d_caseD_1;
  case NotSupportedIncompatibleHardware:
    return NotSupportedIncompatibleHardware;
  case NotSupportedDriverOutOfDate:
    return NotSupportedDriverOutOfDate;
  case NotSupportedOperatingSystemOutOfDate:
    return NotSupportedOperatingSystemOutOfDate;
  case NotSupportedIncompatibleAPICaptureToolActive:
    return NotSupportedIncompatibleAPICaptureToolActive;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSSBlueprint\\Private\\DLSSLibrary.cpp"
                       ,0x2fb,
                       L"ToUDLSSSupport should not be called with an out of range InDLSSSupport from the higher level code"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      UVar3 = (*pcVar1)();
      return UVar3;
    }
switchD_14de2ee9d_caseD_1:
    return NotSupported;
  }
}

// Z_Construct_UClass_UDLSSLibrary_NoRegister @ 14de2f070

UClass * __cdecl Z_Construct_UClass_UDLSSLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDLSSLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DLSSBlueprint",L"DLSSLibrary",
               &Z_Registration_Info_UClass_UDLSSLibrary.InnerSingleton,
               UDLSSLibrary::StaticRegisterNativesUDLSSLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDLSSLibrary>,
               InternalVTableHelperCtorCaller<UDLSSLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDLSSLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_DLSSBlueprint @ 14de30180

void __cdecl IMPLEMENT_MODULE_DLSSBlueprint(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'FDLSSTemporalUpscalerModularFeatureTestAutomationTestInstance'' @ 15045f450

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FDLSSTemporalUpscalerModularFeatureTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FDLSSTemporalUpscalerModularFeatureTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogDLSSBlueprint'' @ 15045f470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDLSSBlueprint__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDLSSBlueprint);
  return;
}

