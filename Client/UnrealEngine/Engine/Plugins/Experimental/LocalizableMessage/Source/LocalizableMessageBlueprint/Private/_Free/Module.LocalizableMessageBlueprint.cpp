// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizableMessageBlueprint
// Functions: 18

// `dynamic_initializer_for_'ModuleRegistrantLocalizableMessageBlueprint'' @ 1414439c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantLocalizableMessageBlueprint__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "LocalizableMessageBlueprint";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"LocalizableMessageBlueprint",0x1b);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessageBlueprint_Public_LocalizableMessageLibrary_h__Script_LocalizableMessageBlueprint_414593487'' @ 141443a10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessageBlueprint_Public_LocalizableMessageLibrary_h__Script_LocalizableMessageBlueprint_414593487__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LocalizableMessageBlueprint",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessageBlueprint_Public_LocalizableMessageLibrary_h__Script_LocalizableMessageBlueprint_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_LocalizableMessageBlueprint'' @ 141443a50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_LocalizableMessageBlueprint__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x3b9096f3;
  local_res8[0].DeclarationsHash = 0xa23b3aad;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_LocalizableMessageBlueprint,
             L"/Script/LocalizableMessageBlueprint",
             &Z_Registration_Info_UPackage__Script_LocalizableMessageBlueprint,local_res8);
  return;
}

// Z_Construct_UPackage__Script_LocalizableMessageBlueprint @ 14e9c10e0

UPackage * __cdecl Z_Construct_UPackage__Script_LocalizableMessageBlueprint(void)

{
  if (Z_Registration_Info_UPackage__Script_LocalizableMessageBlueprint.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_LocalizableMessageBlueprint.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_LocalizableMessageBlueprint.OuterSingleton;
}

// Z_Construct_UClass_ULocalizableMessageLibrary @ 14e9c11e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULocalizableMessageLibrary(void)

{
  if (Z_Registration_Info_UClass_ULocalizableMessageLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULocalizableMessageLibrary.OuterSingleton,
               &Z_Construct_UClass_ULocalizableMessageLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULocalizableMessageLibrary.OuterSingleton;
}

// Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText @ 14e9c1220

UFunction * __cdecl
Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e9c1260

void __cdecl
Z_Construct_UFunction_ULocalizableMessageLibrary_EqualEqual_LocalizableMessage_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// Z_Construct_UFunction_ULocalizableMessageLibrary_EqualEqual_LocalizableMessage @ 14e9c1270

UFunction * __cdecl
Z_Construct_UFunction_ULocalizableMessageLibrary_EqualEqual_LocalizableMessage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULocalizableMessageLibrary_EqualEqual_LocalizableMessage_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e9c12b0

void __cdecl
Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage @ 14e9c12c0

UFunction * __cdecl
Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage @ 14e9c1300

UFunction * __cdecl Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<ULocalizableMessageLibrary> @ 14e9c1340

void __cdecl InternalConstructor<ULocalizableMessageLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7ULocalizableMessageLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<ULocalizableMessageLibrary> @ 14e9c1370

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULocalizableMessageLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULocalizableMessageLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULocalizableMessageLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14e9c14a0

void * __thiscall
ULocalizableMessageLibrary::_scalar_deleting_destructor_
          (ULocalizableMessageLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7ULocalizableMessageLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeLocalizableMessageBlueprint_init @ 14e9c15e0

void __cdecl EmptyLinkFunctionForGeneratedCodeLocalizableMessageBlueprint_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLocalizableMessageLibrary @ 14e9c15f0

void __cdecl EmptyLinkFunctionForGeneratedCodeLocalizableMessageLibrary(void)

{
  return;
}

// Z_Construct_UClass_ULocalizableMessageLibrary_NoRegister @ 14e9c17c0

UClass * __cdecl Z_Construct_UClass_ULocalizableMessageLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalizableMessageLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LocalizableMessageBlueprint",L"LocalizableMessageLibrary",
               &Z_Registration_Info_UClass_ULocalizableMessageLibrary.InnerSingleton,
               ULocalizableMessageLibrary::StaticRegisterNativesULocalizableMessageLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalizableMessageLibrary>,
               InternalVTableHelperCtorCaller<ULocalizableMessageLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalizableMessageLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_LocalizableMessageBlueprint @ 14e9c1d20

void __cdecl IMPLEMENT_MODULE_LocalizableMessageBlueprint(void)

{
  return;
}

