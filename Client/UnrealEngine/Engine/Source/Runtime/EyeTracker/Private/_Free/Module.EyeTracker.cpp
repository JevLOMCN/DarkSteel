// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EyeTracker
// Functions: 34

// `dynamic_initializer_for_'ModuleRegistrantEyeTracker'' @ 140f964a0

void __cdecl _dynamic_initializer_for__ModuleRegistrantEyeTracker__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "EyeTracker";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"EyeTracker",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FEyeTrackerModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h__Script_EyeTracker_1619039015'' @ 140f964f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h__Script_EyeTracker_1619039015__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/EyeTracker",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h__Script_EyeTracker_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h__Script_EyeTracker_1658068104'' @ 140f96530

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h__Script_EyeTracker_1658068104__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/EyeTracker",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h__Script_EyeTracker_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h__Script_EyeTracker_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_EyeTracker'' @ 140f96580

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_EyeTracker__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xf90c139e;
  local_res8[0].DeclarationsHash = 0xeb88aac9;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_EyeTracker,L"/Script/EyeTracker",
             &Z_Registration_Info_UPackage__Script_EyeTracker,local_res8);
  return;
}

// Z_Construct_UPackage__Script_EyeTracker @ 1446f21b0

UPackage * __cdecl Z_Construct_UPackage__Script_EyeTracker(void)

{
  if (Z_Registration_Info_UPackage__Script_EyeTracker.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_EyeTracker.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_EyeTracker.OuterSingleton;
}

// Z_Construct_UClass_UEyeTrackerFunctionLibrary @ 1446f2330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEyeTrackerFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UEyeTrackerFunctionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEyeTrackerFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEyeTrackerFunctionLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FEyeTrackerGazeData @ 1446f2370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEyeTrackerGazeData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEyeTrackerGazeData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEyeTrackerGazeData.InnerSingleton,
               &Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEyeTrackerGazeData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FEyeTrackerGazeData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData @ 1446f23f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEyeTrackerStereoGazeData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEyeTrackerStereoGazeData.InnerSingleton,
               &Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEyeTrackerStereoGazeData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEyeTrackerStereoGazeData.InnerSingleton;
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

// NewProp_ReturnValue_SetBit @ 1446f2470

void __cdecl
Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData @ 1446f2480

UFunction * __cdecl Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1446f24c0

void __cdecl
Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData @ 1446f24d0

UFunction * __cdecl Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1446f2510

void __cdecl
Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected @ 1446f2520

UFunction * __cdecl Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1446f2560

void __cdecl
Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable @ 1446f2570

UFunction * __cdecl Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer @ 1446f25b0

UFunction * __cdecl Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 1446f26b0

void * __thiscall
IEyeTrackerModule::_scalar_deleting_destructor_(IEyeTrackerModule *this,uint param_1)

{
  *this = (IEyeTrackerModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446f2750

void * __thiscall
FEyeTrackerModule::_scalar_deleting_destructor_(FEyeTrackerModule *this,uint param_1)

{
  *this = (FEyeTrackerModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewProp_bIsLeftEyeBlink_SetBit @ 1446f2790

void __cdecl
Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_bIsLeftEyeBlink_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// NewProp_bIsRightEyeBlink_SetBit @ 1446f27a0

void __cdecl
Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_bIsRightEyeBlink_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4d) = 1;
  return;
}

// NewStructOps @ 1446f27b0

void * __cdecl Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEyeTrackerGazeData,&UE::CoreUObject::Private::Construct<FEyeTrackerGazeData>,&UE::CoreUObject::Private::ConstructForTests<FEyeTrackerGazeData>,&UE::CoreUObject::Private::Destruct<FEyeTrackerGazeData>,&UE::CoreUObject::Private::Copy<FEyeTrackerGazeData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1446f27f0

void * __cdecl Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEyeTrackerStereoGazeData,&UE::CoreUObject::Private::Construct<FEyeTrackerStereoGazeData>,&UE::CoreUObject::Private::ConstructForTests<FEyeTrackerStereoGazeData>,&UE::CoreUObject::Private::Destruct<FEyeTrackerStereoGazeData>,&UE::CoreUObject::Private::Copy<FEyeTrackerStereoGazeData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EEyeTrackerStatus_StaticEnum @ 1446f2830

UEnum * __cdecl EEyeTrackerStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEyeTrackerStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EyeTracker();
    Z_Registration_Info_UEnum_EEyeTrackerStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus,(UObject *)pUVar1,
                       L"EEyeTrackerStatus");
  }
  return Z_Registration_Info_UEnum_EEyeTrackerStatus.OuterSingleton;
}

// InternalConstructor<UEyeTrackerFunctionLibrary> @ 1446f2aa0

void __cdecl InternalConstructor<UEyeTrackerFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UEyeTrackerFunctionLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UEyeTrackerFunctionLibrary> @ 1446f2ad0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEyeTrackerFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEyeTrackerFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEyeTrackerFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EEyeTrackerStatus> @ 1446f2b80

UEnum * __cdecl StaticEnum<enum_EEyeTrackerStatus>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEyeTrackerStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EyeTracker();
    Z_Registration_Info_UEnum_EEyeTrackerStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus,(UObject *)pUVar1,
                       L"EEyeTrackerStatus");
  }
  return Z_Registration_Info_UEnum_EEyeTrackerStatus.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1446f2c40

void * __thiscall
UEyeTrackerFunctionLibrary::_scalar_deleting_destructor_
          (UEyeTrackerFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UEyeTrackerFunctionLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeEyeTrackerFunctionLibrary @ 1446f2ca0

void __cdecl EmptyLinkFunctionForGeneratedCodeEyeTrackerFunctionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEyeTrackerTypes @ 1446f2cb0

void __cdecl EmptyLinkFunctionForGeneratedCodeEyeTrackerTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEyeTracker_init @ 1446f2cc0

void __cdecl EmptyLinkFunctionForGeneratedCodeEyeTracker_init(void)

{
  return;
}

// Z_Construct_UClass_UEyeTrackerFunctionLibrary_NoRegister @ 1446f3080

UClass * __cdecl Z_Construct_UClass_UEyeTrackerFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEyeTrackerFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EyeTracker",L"EyeTrackerFunctionLibrary",
               &Z_Registration_Info_UClass_UEyeTrackerFunctionLibrary.InnerSingleton,
               UEyeTrackerFunctionLibrary::StaticRegisterNativesUEyeTrackerFunctionLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEyeTrackerFunctionLibrary>,
               InternalVTableHelperCtorCaller<UEyeTrackerFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEyeTrackerFunctionLibrary.InnerSingleton;
}

// Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus @ 1446f3140

UEnum * __cdecl Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus(void)

{
  if (Z_Registration_Info_UEnum_EEyeTrackerStatus.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEyeTrackerStatus.InnerSingleton,
               &Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEyeTrackerStatus.InnerSingleton;
}

// IMPLEMENT_MODULE_EyeTracker @ 1446f35c0

void __cdecl IMPLEMENT_MODULE_EyeTracker(void)

{
  return;
}

