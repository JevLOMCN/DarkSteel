// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NISBlueprint
// Functions: 38

// `dynamic_initializer_for_'CVarNISUpscalingAutomaticMipMapLODBias'' @ 1414007b0

void __cdecl _dynamic_initializer_for__CVarNISUpscalingAutomaticMipMapLODBias__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNISUpscalingAutomaticMipMapLODBias,L"r.NIS.Upscaling.AutomaticMipMapLODBias",
             local_res8,
             L"Enable automatic setting of r.MipMapLODBias based on the effective NIS screen percentage (default=1)\nNOTE: This is only applied when using the UNISLibrary::SetNISMode blueprint function."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNISUpscalingAutomaticMipMapLODBias__);
  return;
}

// `dynamic_initializer_for_'CVarNISUpscalingAutomaticMipMapLODBiasOffset'' @ 141400800

void __cdecl _dynamic_initializer_for__CVarNISUpscalingAutomaticMipMapLODBiasOffset__(void)

{
  float local_res8 [8];
  
  local_res8[0] = -0.3;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarNISUpscalingAutomaticMipMapLODBiasOffset,
             L"r.NIS.Upscaling.AutomaticMipMapLODBias.Offset",local_res8,
             L"Allows offsetting the automatic resolution dependent mip map LOD bias by this amount (default=0)\nNOTE: This is only applied when using the UNISLibrary::SetNISMode blueprint function."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNISUpscalingAutomaticMipMapLODBiasOffset__);
  return;
}

// `dynamic_initializer_for_'IsNISModeSupportedInvalidEnumValueError'' @ 141400850

void __cdecl _dynamic_initializer_for__IsNISModeSupportedInvalidEnumValueError__(void)

{
  FName::FName(&IsNISModeSupportedInvalidEnumValueError,"IsNISModeSupportedInvalidEnumValueError");
  return;
}

// `dynamic_initializer_for_'LogNISBlueprint'' @ 141400870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNISBlueprint__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNISBlueprint,L"LogNISBlueprint",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNISBlueprint__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNISBlueprint'' @ 1414008b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantNISBlueprint__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NISBlueprint";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NISBlueprint",0xc);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNISBlueprintModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'SetNISModeInvalidEnumValueError'' @ 141400900

void __cdecl _dynamic_initializer_for__SetNISModeInvalidEnumValueError__(void)

{
  FName::FName(&SetNISModeInvalidEnumValueError,"SetNISModeInvalidEnumValueError");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h__Script_NISBlueprint_927312743'' @ 141400920

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h__Script_NISBlueprint_927312743__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NISBlueprint",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h__Script_NISBlueprint_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h__Script_NISBlueprint_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_NISBlueprint'' @ 141400970

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_NISBlueprint__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x598e3ce6;
  local_res8[0].DeclarationsHash = 0x4fffa4c6;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_NISBlueprint,L"/Script/NISBlueprint",
             &Z_Registration_Info_UPackage__Script_NISBlueprint,local_res8);
  return;
}

// Z_Construct_UPackage__Script_NISBlueprint @ 14de521a0

UPackage * __cdecl Z_Construct_UPackage__Script_NISBlueprint(void)

{
  if (Z_Registration_Info_UPackage__Script_NISBlueprint.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_NISBlueprint.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_NISBlueprint.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14de522c0

void * __thiscall
FNISBlueprintModule::_scalar_deleting_destructor_(FNISBlueprintModule *this,uint param_1)

{
  *this = (FNISBlueprintModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UNISLibrary @ 14de52300

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNISLibrary(void)

{
  if (Z_Registration_Info_UClass_UNISLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNISLibrary.OuterSingleton,
               &Z_Construct_UClass_UNISLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNISLibrary.OuterSingleton;
}

// Z_Construct_UEnum_NISBlueprint_UNISMode @ 14de52340

UEnum * __cdecl Z_Construct_UEnum_NISBlueprint_UNISMode(void)

{
  if (Z_Registration_Info_UEnum_UNISMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_UNISMode.InnerSingleton,
               &Z_Construct_UEnum_NISBlueprint_UNISMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_UNISMode.InnerSingleton;
}

// UNISSupport_StaticEnum @ 14de52380

UEnum * __cdecl UNISSupport_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_UNISSupport.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NISBlueprint();
    Z_Registration_Info_UEnum_UNISSupport.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NISBlueprint_UNISSupport,(UObject *)pUVar1,L"UNISSupport");
  }
  return Z_Registration_Info_UEnum_UNISSupport.OuterSingleton;
}

// UNISMode_StaticEnum @ 14de523c0

UEnum * __cdecl UNISMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_UNISMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NISBlueprint();
    Z_Registration_Info_UEnum_UNISMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NISBlueprint_UNISMode,(UObject *)pUVar1,L"UNISMode");
  }
  return Z_Registration_Info_UEnum_UNISMode.OuterSingleton;
}

// Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode @ 14de52400

UFunction * __cdecl Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage @ 14de52440

UFunction * __cdecl Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange @ 14de52480

UFunction * __cdecl Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes @ 14de524c0

UFunction * __cdecl Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de52500

void __cdecl
Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UNISLibrary_IsNISModeSupported @ 14de52510

UFunction * __cdecl Z_Construct_UFunction_UNISLibrary_IsNISModeSupported(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de52550

void __cdecl
Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNISLibrary_IsNISSupported @ 14de52560

UFunction * __cdecl Z_Construct_UFunction_UNISLibrary_IsNISSupported(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage @ 14de525a0

UFunction * __cdecl Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNISLibrary_SetNISMode @ 14de525e0

UFunction * __cdecl Z_Construct_UFunction_UNISLibrary_SetNISMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNISLibrary_SetNISSharpness @ 14de52620

UFunction * __cdecl Z_Construct_UFunction_UNISLibrary_SetNISSharpness(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<UNISLibrary> @ 14de52660

void __cdecl InternalConstructor<UNISLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UNISLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UNISLibrary> @ 14de52690

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNISLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNISLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNISLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_UNISMode> @ 14de52740

UEnum * __cdecl StaticEnum<enum_UNISMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_UNISMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NISBlueprint();
    Z_Registration_Info_UEnum_UNISMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NISBlueprint_UNISMode,(UObject *)pUVar1,L"UNISMode");
  }
  return Z_Registration_Info_UEnum_UNISMode.OuterSingleton;
}

// StaticEnum<enum_UNISSupport> @ 14de52780

UEnum * __cdecl StaticEnum<enum_UNISSupport>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_UNISSupport.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NISBlueprint();
    Z_Registration_Info_UEnum_UNISSupport.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NISBlueprint_UNISSupport,(UObject *)pUVar1,L"UNISSupport");
  }
  return Z_Registration_Info_UEnum_UNISSupport.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14de52840

void * __thiscall UNISLibrary::_scalar_deleting_destructor_(UNISLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UNISLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeNISBlueprint_init @ 14de528a0

void __cdecl EmptyLinkFunctionForGeneratedCodeNISBlueprint_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNISLibrary @ 14de528b0

void __cdecl EmptyLinkFunctionForGeneratedCodeNISLibrary(void)

{
  return;
}

// Z_Construct_UClass_UNISLibrary_NoRegister @ 14de53490

UClass * __cdecl Z_Construct_UClass_UNISLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNISLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NISBlueprint",L"NISLibrary",
               &Z_Registration_Info_UClass_UNISLibrary.InnerSingleton,
               UNISLibrary::StaticRegisterNativesUNISLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNISLibrary>,
               InternalVTableHelperCtorCaller<UNISLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNISLibrary.InnerSingleton;
}

// Z_Construct_UEnum_NISBlueprint_UNISSupport @ 14de53550

UEnum * __cdecl Z_Construct_UEnum_NISBlueprint_UNISSupport(void)

{
  if (Z_Registration_Info_UEnum_UNISSupport.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_UNISSupport.InnerSingleton,
               &Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_UNISSupport.InnerSingleton;
}

// IMPLEMENT_MODULE_NISBlueprint @ 14de53d30

void __cdecl IMPLEMENT_MODULE_NISBlueprint(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarNISUpscalingAutomaticMipMapLODBias'' @ 15045f820

void __cdecl _dynamic_atexit_destructor_for__CVarNISUpscalingAutomaticMipMapLODBias__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNISUpscalingAutomaticMipMapLODBias);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNISUpscalingAutomaticMipMapLODBiasOffset'' @ 15045f840

void __cdecl _dynamic_atexit_destructor_for__CVarNISUpscalingAutomaticMipMapLODBiasOffset__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNISUpscalingAutomaticMipMapLODBiasOffset);
  return;
}

// `dynamic_atexit_destructor_for_'LogNISBlueprint'' @ 15045f860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNISBlueprint__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNISBlueprint);
  return;
}

