// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GlobalConfigurationData
// Functions: 34

// `dynamic_initializer_for_'ModuleRegistrantGlobalConfigurationData'' @ 141443730

void __cdecl _dynamic_initializer_for__ModuleRegistrantGlobalConfigurationData__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "GlobalConfigurationData";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"GlobalConfigurationData",0x17);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GlobalConfigurationData_Source_GlobalConfigurationData_Public_GlobalConfigurationDataBlueprintLibrary_h__Script_GlobalConfigurationData_2859909611'' @ 141443780

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GlobalConfigurationData_Source_GlobalConfigurationData_Public_GlobalConfigurationDataBlueprintLibrary_h__Script_GlobalConfigurationData_2859909611__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GlobalConfigurationData",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GlobalConfigurationData_Source_GlobalConfigurationData_Public_GlobalConfigurationDataBlueprintLibrary_h__Script_GlobalConfigurationData_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_GlobalConfigurationData'' @ 1414437c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_GlobalConfigurationData__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xb1049d5f;
  local_res8[0].DeclarationsHash = 0x9f1ccea6;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_GlobalConfigurationData,L"/Script/GlobalConfigurationData"
             ,&Z_Registration_Info_UPackage__Script_GlobalConfigurationData,local_res8);
  return;
}

// Z_Construct_UPackage__Script_GlobalConfigurationData @ 14e9bac90

UPackage * __cdecl Z_Construct_UPackage__Script_GlobalConfigurationData(void)

{
  if (Z_Registration_Info_UPackage__Script_GlobalConfigurationData.OuterSingleton == (UPackage *)0x0
     ) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_GlobalConfigurationData.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_GlobalConfigurationData.OuterSingleton;
}

// Z_Construct_UClass_UGlobalConfigurationDataBlueprintLibrary @ 14e9bad90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGlobalConfigurationDataBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UGlobalConfigurationDataBlueprintLibrary.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGlobalConfigurationDataBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UGlobalConfigurationDataBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGlobalConfigurationDataBlueprintLibrary.OuterSingleton;
}

// NewProp_bValueOut_SetBit @ 14e9badd0

void __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataBool_Statics::
NewProp_bValueOut_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14e9bade0

void __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataBool_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataBool @ 14e9badf0

UFunction * __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataBool(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataBool_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDefaultValue_SetBit @ 14e9bae30

void __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataBoolWithDefault_Statics
::NewProp_bDefaultValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14e9bae40

void __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataBoolWithDefault_Statics
::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataBoolWithDefault @ 14e9bae50

UFunction * __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataBoolWithDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataBoolWithDefault_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e9bae90

void __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataFloat_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataFloat @ 14e9baea0

UFunction * __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataFloat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataFloat_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataFloatWithDefault @ 14e9baee0

UFunction * __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataFloatWithDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataFloatWithDefault_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e9baf20

void __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataInt_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataInt @ 14e9baf30

UFunction * __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataInt(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataInt_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataIntWithDefault @ 14e9baf70

UFunction * __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataIntWithDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataIntWithDefault_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e9bafb0

void __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataObject_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataObject @ 14e9bafc0

UFunction * __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataObject_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e9bb000

void __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataString_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataString @ 14e9bb010

UFunction * __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataString_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataStringWithDefault @ 14e9bb050

UFunction * __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataStringWithDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataStringWithDefault_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e9bb090

void __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataStruct_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataStruct @ 14e9bb0a0

UFunction * __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataStruct(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataStruct_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e9bb0e0

void __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataText_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataText @ 14e9bb0f0

UFunction * __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataText_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataTextWithDefault @ 14e9bb130

UFunction * __cdecl
Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataTextWithDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGlobalConfigurationDataBlueprintLibrary_GetConfigDataTextWithDefault_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<UGlobalConfigurationDataBlueprintLibrary> @ 14e9bb330

void __cdecl
InternalConstructor<UGlobalConfigurationDataBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGlobalConfigurationDataBlueprintLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UGlobalConfigurationDataBlueprintLibrary> @ 14e9bb360

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGlobalConfigurationDataBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGlobalConfigurationDataBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGlobalConfigurationDataBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14e9bb490

void * __thiscall
UGlobalConfigurationDataBlueprintLibrary::_scalar_deleting_destructor_
          (UGlobalConfigurationDataBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UGlobalConfigurationDataBlueprintLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeGlobalConfigurationDataBlueprintLibrary @ 14e9bb4f0

void __cdecl EmptyLinkFunctionForGeneratedCodeGlobalConfigurationDataBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGlobalConfigurationData_init @ 14e9bb500

void __cdecl EmptyLinkFunctionForGeneratedCodeGlobalConfigurationData_init(void)

{
  return;
}

// Z_Construct_UClass_UGlobalConfigurationDataBlueprintLibrary_NoRegister @ 14e9bb8a0

UClass * __cdecl Z_Construct_UClass_UGlobalConfigurationDataBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGlobalConfigurationDataBlueprintLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GlobalConfigurationData",L"GlobalConfigurationDataBlueprintLibrary",
               &Z_Registration_Info_UClass_UGlobalConfigurationDataBlueprintLibrary.InnerSingleton,
               UGlobalConfigurationDataBlueprintLibrary::
               StaticRegisterNativesUGlobalConfigurationDataBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UGlobalConfigurationDataBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UGlobalConfigurationDataBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGlobalConfigurationDataBlueprintLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_GlobalConfigurationData @ 14e9bc770

void __cdecl IMPLEMENT_MODULE_GlobalConfigurationData(void)

{
  return;
}

