// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ActorLayerUtilities
// Functions: 17

// `dynamic_initializer_for_'ModuleRegistrantActorLayerUtilities'' @ 1413fc5c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantActorLayerUtilities__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ActorLayerUtilities";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ActorLayerUtilities",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h__Script_ActorLayerUtilities_300299955'' @ 1413fc610

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h__Script_ActorLayerUtilities_300299955__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ActorLayerUtilities",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h__Script_ActorLayerUtilities_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h__Script_ActorLayerUtilities_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ActorLayerUtilities'' @ 1413fc660

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ActorLayerUtilities__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xa926ef9f;
  local_res8[0].DeclarationsHash = 0xde77b5f8;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ActorLayerUtilities,L"/Script/ActorLayerUtilities",
             &Z_Registration_Info_UPackage__Script_ActorLayerUtilities,local_res8);
  return;
}

// Z_Construct_UPackage__Script_ActorLayerUtilities @ 14ddb86a0

UPackage * __cdecl Z_Construct_UPackage__Script_ActorLayerUtilities(void)

{
  if (Z_Registration_Info_UPackage__Script_ActorLayerUtilities.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ActorLayerUtilities.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ActorLayerUtilities.OuterSingleton;
}

// Z_Construct_UClass_ULayersBlueprintLibrary @ 14ddb87e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULayersBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_ULayersBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULayersBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_ULayersBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULayersBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FActorLayer @ 14ddb8820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActorLayer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActorLayer.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActorLayer.InnerSingleton,
               &Z_Construct_UScriptStruct_FActorLayer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActorLayer.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FActorLayer.InnerSingleton;
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

// NewStructOps @ 14ddb88a0

void * __cdecl Z_Construct_UScriptStruct_FActorLayer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActorLayer,&UE::CoreUObject::Private::Construct<FActorLayer>,&UE::CoreUObject::Private::ConstructForTests<FActorLayer>,&UE::CoreUObject::Private::Destruct<FActorLayer>,&UE::CoreUObject::Private::Copy<FActorLayer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer @ 14ddb88e0

UFunction * __cdecl Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors @ 14ddb8920

UFunction * __cdecl Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer @ 14ddb8960

UFunction * __cdecl Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<ULayersBlueprintLibrary> @ 14ddb8a00

void __cdecl InternalConstructor<ULayersBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7ULayersBlueprintLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<ULayersBlueprintLibrary> @ 14ddb8a30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULayersBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULayersBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULayersBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14ddb8b60

void * __thiscall
ULayersBlueprintLibrary::_scalar_deleting_destructor_(ULayersBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7ULayersBlueprintLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeActorLayerUtilities @ 14ddb8be0

void __cdecl EmptyLinkFunctionForGeneratedCodeActorLayerUtilities(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeActorLayerUtilities_init @ 14ddb8bf0

void __cdecl EmptyLinkFunctionForGeneratedCodeActorLayerUtilities_init(void)

{
  return;
}

// Z_Construct_UClass_ULayersBlueprintLibrary_NoRegister @ 14ddb9160

UClass * __cdecl Z_Construct_UClass_ULayersBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULayersBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ActorLayerUtilities",L"LayersBlueprintLibrary",
               &Z_Registration_Info_UClass_ULayersBlueprintLibrary.InnerSingleton,
               ULayersBlueprintLibrary::StaticRegisterNativesULayersBlueprintLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULayersBlueprintLibrary>
               ,InternalVTableHelperCtorCaller<ULayersBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULayersBlueprintLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_ActorLayerUtilities @ 14ddb9660

void __cdecl IMPLEMENT_MODULE_ActorLayerUtilities(void)

{
  return;
}

