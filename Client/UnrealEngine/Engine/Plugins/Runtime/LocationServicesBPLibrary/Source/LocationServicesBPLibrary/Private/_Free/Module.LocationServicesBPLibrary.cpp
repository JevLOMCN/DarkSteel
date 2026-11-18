// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocationServicesBPLibrary
// Functions: 39

// `dynamic_initializer_for_'ModuleRegistrantLocationServicesBPLibrary'' @ 1414508a0

void __cdecl _dynamic_initializer_for__ModuleRegistrantLocationServicesBPLibrary__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "LocationServicesBPLibrary";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"LocationServicesBPLibrary",0x19);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FLocationServicesBPLibraryModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h__Script_LocationServicesBPLibrary_1347965907'' @ 1414508f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h__Script_LocationServicesBPLibrary_1347965907__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LocationServicesBPLibrary",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h__Script_LocationServicesBPLibrary_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h__Script_LocationServicesBPLibrary_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h__Script_LocationServicesBPLibrary_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h__Script_LocationServicesBPLibrary_4095683108'' @ 141450940

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h__Script_LocationServicesBPLibrary_4095683108__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LocationServicesBPLibrary",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h__Script_LocationServicesBPLibrary_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_LocationServicesBPLibrary'' @ 141450980

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_LocationServicesBPLibrary__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x811c2063;
  local_res8[0].DeclarationsHash = 0x9849c67a;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_LocationServicesBPLibrary,
             L"/Script/LocationServicesBPLibrary",
             &Z_Registration_Info_UPackage__Script_LocationServicesBPLibrary,local_res8);
  return;
}

// Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature @ 14f03a640

UFunction * __cdecl
Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_LocationServicesBPLibrary @ 14f03a680

UPackage * __cdecl Z_Construct_UPackage__Script_LocationServicesBPLibrary(void)

{
  if (Z_Registration_Info_UPackage__Script_LocationServicesBPLibrary.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_LocationServicesBPLibrary.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_LocationServicesBPLibrary.OuterSingleton;
}

// Z_Construct_UClass_ULocationServicesImpl_NoRegister @ 14f03a7c0

UClass * __cdecl Z_Construct_UClass_ULocationServicesImpl_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocationServicesImpl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LocationServicesBPLibrary",L"LocationServicesImpl",
               &Z_Registration_Info_UClass_ULocationServicesImpl.InnerSingleton,
               ULocationServicesImpl::StaticRegisterNativesULocationServicesImpl,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocationServicesImpl>,
               InternalVTableHelperCtorCaller<ULocationServicesImpl>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocationServicesImpl.InnerSingleton;
}

// Z_Construct_UClass_ULocationServicesImpl @ 14f03a920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULocationServicesImpl(void)

{
  if (Z_Registration_Info_UClass_ULocationServicesImpl.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULocationServicesImpl.OuterSingleton,
               &Z_Construct_UClass_ULocationServicesImpl_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULocationServicesImpl.OuterSingleton;
}

// Z_Construct_UClass_ULocationServices @ 14f03a960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULocationServices(void)

{
  if (Z_Registration_Info_UClass_ULocationServices.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULocationServices.OuterSingleton,
               &Z_Construct_UClass_ULocationServices_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULocationServices.OuterSingleton;
}

// Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy @ 14f03a9a0

UEnum * __cdecl Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy(void)

{
  if (Z_Registration_Info_UEnum_ELocationAccuracy.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELocationAccuracy.InnerSingleton,
               &Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELocationAccuracy.InnerSingleton;
}

// Z_Construct_UScriptStruct_FLocationServicesData @ 14f03a9e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLocationServicesData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLocationServicesData.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLocationServicesData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLocationServicesData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLocationServicesData.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FLocationServicesData.InnerSingleton;
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

// ELocationAccuracy_StaticEnum @ 14f03aa60

UEnum * __cdecl ELocationAccuracy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELocationAccuracy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LocationServicesBPLibrary();
    Z_Registration_Info_UEnum_ELocationAccuracy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy,
                       (UObject *)pUVar1,L"ELocationAccuracy");
  }
  return Z_Registration_Info_UEnum_ELocationAccuracy.OuterSingleton;
}

// NewStructOps @ 14f03aaa0

void * __cdecl Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLocationServicesData,&UE::CoreUObject::Private::Construct<FLocationServicesData>,&UE::CoreUObject::Private::ConstructForTests<FLocationServicesData>,&UE::CoreUObject::Private::Destruct<FLocationServicesData>,&UE::CoreUObject::Private::Copy<FLocationServicesData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14f03aae0

void __cdecl
Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled @ 14f03aaf0

UFunction * __cdecl Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULocationServices_GetLastKnownLocation @ 14f03ab30

UFunction * __cdecl Z_Construct_UFunction_ULocationServices_GetLastKnownLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl @ 14f03ab70

UFunction * __cdecl Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f03abb0

void __cdecl
Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_ULocationServices_InitLocationServices @ 14f03abc0

UFunction * __cdecl Z_Construct_UFunction_ULocationServices_InitLocationServices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f03ac00

void __cdecl
Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable @ 14f03ac10

UFunction * __cdecl Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f03ac50

void __cdecl
Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ULocationServices_StartLocationServices @ 14f03ac60

UFunction * __cdecl Z_Construct_UFunction_ULocationServices_StartLocationServices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f03aca0

void __cdecl
Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ULocationServices_StopLocationServices @ 14f03acb0

UFunction * __cdecl Z_Construct_UFunction_ULocationServices_StopLocationServices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14f03ad10

void * __thiscall
FLocationServicesBPLibraryModule::_scalar_deleting_destructor_
          (FLocationServicesBPLibraryModule *this,uint param_1)

{
  *this = (FLocationServicesBPLibraryModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// InternalConstructor<ULocationServices> @ 14f03ade0

void __cdecl InternalConstructor<ULocationServices>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7ULocationServices__6B_;
  }
  return;
}

// InternalConstructor<ULocationServicesImpl> @ 14f03ae10

void __cdecl InternalConstructor<ULocationServicesImpl>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULocationServicesImpl__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<ULocationServices> @ 14f03ae50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULocationServices>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULocationServices::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULocationServices__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULocationServicesImpl> @ 14f03af00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULocationServicesImpl>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULocationServicesImpl::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULocationServicesImpl__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_ELocationAccuracy> @ 14f03afc0

UEnum * __cdecl StaticEnum<enum_ELocationAccuracy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELocationAccuracy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LocationServicesBPLibrary();
    Z_Registration_Info_UEnum_ELocationAccuracy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy,
                       (UObject *)pUVar1,L"ELocationAccuracy");
  }
  return Z_Registration_Info_UEnum_ELocationAccuracy.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14f03b150

void * __thiscall
ULocationServices::_scalar_deleting_destructor_(ULocationServices *this,uint param_1)

{
  *(undefined ***)this = &___7ULocationServices__6B_;
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

// `scalar_deleting_destructor' @ 14f03b1b0

void * __thiscall
ULocationServicesImpl::_scalar_deleting_destructor_(ULocationServicesImpl *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULocationServicesImpl__6B_;
  pvVar1 = *(void **)&(this->OnLocationChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLocationChanged);
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

// EmptyLinkFunctionForGeneratedCodeLocationServicesBPLibrary @ 14f03b280

void __cdecl EmptyLinkFunctionForGeneratedCodeLocationServicesBPLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLocationServicesBPLibrary_init @ 14f03b290

void __cdecl EmptyLinkFunctionForGeneratedCodeLocationServicesBPLibrary_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLocationServicesImpl @ 14f03b2a0

void __cdecl EmptyLinkFunctionForGeneratedCodeLocationServicesImpl(void)

{
  return;
}

// FLocationServicesData_OnLocationChanged_DelegateWrapper @ 14f03b2b0

void __cdecl
FLocationServicesData_OnLocationChanged_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          FLocationServicesData *param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28._0_4_ = param_2->Timestamp;
  local_28._4_4_ = param_2->Longitude;
  uStack_20._0_4_ = param_2->Latitude;
  uStack_20._4_4_ = param_2->HorizontalAccuracy;
  local_18._0_4_ = param_2->VerticalAccuracy;
  local_18._4_4_ = param_2->Altitude;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  return;
}

// Z_Construct_UClass_ULocationServices_NoRegister @ 14f03b680

UClass * __cdecl Z_Construct_UClass_ULocationServices_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocationServices.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LocationServicesBPLibrary",L"LocationServices",
               &Z_Registration_Info_UClass_ULocationServices.InnerSingleton,
               ULocationServices::StaticRegisterNativesULocationServices,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULocationServices>,
               InternalVTableHelperCtorCaller<ULocationServices>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocationServices.InnerSingleton;
}

// IMPLEMENT_MODULE_LocationServicesBPLibrary @ 14f03baa0

void __cdecl IMPLEMENT_MODULE_LocationServicesBPLibrary(void)

{
  return;
}

