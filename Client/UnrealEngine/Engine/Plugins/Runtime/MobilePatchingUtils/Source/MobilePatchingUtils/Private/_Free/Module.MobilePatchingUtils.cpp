// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MobilePatchingUtils
// Functions: 76

// `dynamic_initializer_for_'ErrorNamespace'' @ 1414509c0

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 1414509f0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'LogMobilePatchingUtils'' @ 141450a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMobilePatchingUtils__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMobilePatchingUtils,L"LogMobilePatchingUtils",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMobilePatchingUtils__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMobilePatchingUtils'' @ 141450a50

void __cdecl _dynamic_initializer_for__ModuleRegistrantMobilePatchingUtils__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MobilePatchingUtils";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MobilePatchingUtils",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FMobilePatchingUtilsModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 141450aa0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 141450ac0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h__Script_MobilePatchingUtils_1370158835'' @ 141450ae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h__Script_MobilePatchingUtils_1370158835__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MobilePatchingUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h__Script_MobilePatchingUtils_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MobilePatchingUtils'' @ 141450b20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MobilePatchingUtils__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xae827488;
  local_res8[0].DeclarationsHash = 0x8ca73065;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MobilePatchingUtils,L"/Script/MobilePatchingUtils",
             &Z_Registration_Info_UPackage__Script_MobilePatchingUtils,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14f03bad0

void * __thiscall
FMobilePatchingUtilsModule::_scalar_deleting_destructor_
          (FMobilePatchingUtilsModule *this,uint param_1)

{
  *this = (FMobilePatchingUtilsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature @ 14f03bb10

UFunction * __cdecl
Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallSucceeded__DelegateSignature @ 14f03bb50

UFunction * __cdecl
Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallSucceeded__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallSucceeded__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature @ 14f03bb90

UFunction * __cdecl
Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature @ 14f03bbd0

UFunction * __cdecl
Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_MobilePatchingUtils @ 14f03bc10

UPackage * __cdecl Z_Construct_UPackage__Script_MobilePatchingUtils(void)

{
  if (Z_Registration_Info_UPackage__Script_MobilePatchingUtils.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MobilePatchingUtils.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_MobilePatchingUtils.OuterSingleton;
}

// Z_Construct_UClass_UMobileInstalledContent_NoRegister @ 14f03bc50

UClass * __cdecl Z_Construct_UClass_UMobileInstalledContent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMobileInstalledContent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MobilePatchingUtils",L"MobileInstalledContent",
               &Z_Registration_Info_UClass_UMobileInstalledContent.InnerSingleton,
               UMobileInstalledContent::StaticRegisterNativesUMobileInstalledContent,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMobileInstalledContent>
               ,InternalVTableHelperCtorCaller<UMobileInstalledContent>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMobileInstalledContent.InnerSingleton;
}

// Z_Construct_UClass_UMobilePendingContent_NoRegister @ 14f03bd00

UClass * __cdecl Z_Construct_UClass_UMobilePendingContent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMobilePendingContent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MobilePatchingUtils",L"MobilePendingContent",
               &Z_Registration_Info_UClass_UMobilePendingContent.InnerSingleton,
               UMobilePendingContent::StaticRegisterNativesUMobilePendingContent,0x88,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMobilePendingContent>,
               InternalVTableHelperCtorCaller<UMobilePendingContent>,local_res8,
               UMobileInstalledContent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMobilePendingContent.InnerSingleton;
}

// Z_Construct_UClass_UMobileInstalledContent @ 14f03bff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMobileInstalledContent(void)

{
  if (Z_Registration_Info_UClass_UMobileInstalledContent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMobileInstalledContent.OuterSingleton,
               &Z_Construct_UClass_UMobileInstalledContent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMobileInstalledContent.OuterSingleton;
}

// Z_Construct_UClass_UMobilePatchingLibrary @ 14f03c030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMobilePatchingLibrary(void)

{
  if (Z_Registration_Info_UClass_UMobilePatchingLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMobilePatchingLibrary.OuterSingleton,
               &Z_Construct_UClass_UMobilePatchingLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMobilePatchingLibrary.OuterSingleton;
}

// Z_Construct_UClass_UMobilePendingContent @ 14f03c070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMobilePendingContent(void)

{
  if (Z_Registration_Info_UClass_UMobilePendingContent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMobilePendingContent.OuterSingleton,
               &Z_Construct_UClass_UMobilePendingContent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMobilePendingContent.OuterSingleton;
}

// Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace @ 14f03c0b0

UFunction * __cdecl Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize @ 14f03c0f0

UFunction * __cdecl Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f03c130

void __cdecl
Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UMobileInstalledContent_Mount @ 14f03c140

UFunction * __cdecl Z_Construct_UFunction_UMobileInstalledContent_Mount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize @ 14f03c180

UFunction * __cdecl Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed @ 14f03c1c0

UFunction * __cdecl Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText @ 14f03c200

UFunction * __cdecl Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress @ 14f03c240

UFunction * __cdecl Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace @ 14f03c280

UFunction * __cdecl Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize @ 14f03c2c0

UFunction * __cdecl Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMobilePendingContent_StartInstall @ 14f03c300

UFunction * __cdecl Z_Construct_UFunction_UMobilePendingContent_StartInstall(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMobilePendingContent_StartInstall_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName @ 14f03c340

UFunction * __cdecl Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent @ 14f03c380

UFunction * __cdecl Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames @ 14f03c3c0

UFunction * __cdecl Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f03c400

void __cdecl
Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection @ 14f03c410

UFunction * __cdecl Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent @ 14f03c450

UFunction * __cdecl Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ConstructItems<BuildPatchServices::FInstallerAction,BuildPatchServices::FInstallerAction,int> @ 14f03c670

void __cdecl
ConstructItems<BuildPatchServices::FInstallerAction,BuildPatchServices::FInstallerAction,int>
          (void *param_1,FInstallerAction *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      BuildPatchServices::FInstallerAction::FInstallerAction
                ((FInstallerAction *)(lVar1 + (longlong)param_2),param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// InternalConstructor<UMobileInstalledContent> @ 14f03c6c0

void __cdecl InternalConstructor<UMobileInstalledContent>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMobileInstalledContent__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UMobilePatchingLibrary> @ 14f03c710

void __cdecl InternalConstructor<UMobilePatchingLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMobilePatchingLibrary__6B_;
  }
  return;
}

// InternalConstructor<UMobilePendingContent> @ 14f03c740

void __cdecl InternalConstructor<UMobilePendingContent>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMobilePendingContent__6B_;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMobileInstalledContent> @ 14f03c7b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMobileInstalledContent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMobileInstalledContent::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMobileInstalledContent__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMobilePatchingLibrary> @ 14f03c870

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMobilePatchingLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMobilePatchingLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMobilePatchingLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMobilePendingContent> @ 14f03c920

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMobilePendingContent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMobilePendingContent::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMobilePendingContent__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UMobileInstalledContent> @ 14f03ca00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMobileInstalledContent * __cdecl NewObject<UMobileInstalledContent>(UObject *param_1)

{
  UClass *pUVar1;
  UMobileInstalledContent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMobileInstalledContent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMobileInstalledContent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UMobilePendingContent> @ 14f03caa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMobilePendingContent * __cdecl NewObject<UMobilePendingContent>(UObject *param_1)

{
  UClass *pUVar1;
  UMobilePendingContent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMobilePendingContent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMobilePendingContent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// operator() @ 14f03d200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `OnRemoteManifestReady'::__l2::<lambda_1>::operator()(void *this)

{
  undefined4 uVar1;
  TScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  TRefCountPtr<ITextData> TVar2;
  uint uVar3;
  TRefCountPtr<ITextData> TVar4;
  bool bVar5;
  FText *pFVar6;
  undefined1 local_res8 [8];
  FText local_48;
  FText local_38;
  undefined4 local_28;
  
  if (**(ERequestContentError **)this != NoError) {
    pFVar6 = GetRequestContentErrorText(**(ERequestContentError **)this);
    local_48.TextData.Reference = (pFVar6->TextData).Reference;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 8))
                (local_48.TextData.Reference,local_res8);
    }
    local_48.Flags = pFVar6->Flags;
    if (1 < (byte)LogMobilePatchingUtils._0_1_) {
      FText::ToString(&local_48);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMobilePatchingUtils);
    }
    TVar2.Reference = local_48.TextData.Reference;
    this_00 = *(TScriptDelegate<FNotThreadSafeDelegateMode> **)((longlong)this + 8);
    uVar1 = **(undefined4 **)this;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 8))
                (local_48.TextData.Reference,local_res8);
    }
    uVar3 = local_48.Flags;
    bVar5 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(this_00);
    if (bVar5) {
      FText::FText(&local_38);
      TVar4.Reference = local_38.TextData.Reference;
      if (local_38.TextData.Reference != TVar2.Reference) {
        local_38.TextData.Reference = TVar2.Reference;
        if (TVar2.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
        }
        if (TVar4.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
        }
      }
      local_38.Flags = uVar3;
      local_28 = uVar1;
      TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(this_00,&local_38);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
    }
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14f03d4e0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,UMobilePendingContent_*,FOnContentInstallSucceeded,FOnContentInstallFailed>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,UMobilePendingContent_*,FOnContentInstallSucceeded,FOnContentInstallFailed>
           *this,uint param_1)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f03d530

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,UMobilePendingContent_*,FOnRequestContentSucceeded,FOnRequestContentFailed>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,UMobilePendingContent_*,FOnRequestContentSucceeded,FOnRequestContentFailed>
           *this,uint param_1)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f03d580

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,UMobilePendingContent_*,FOnContentInstallSucceeded,FOnContentInstallFailed>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,UMobilePendingContent_*,FOnContentInstallSucceeded,FOnContentInstallFailed>
           *this,uint param_1)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Payload).field_0x20);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f03d5d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,UMobilePendingContent_*,FOnRequestContentSucceeded,FOnRequestContentFailed>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,UMobilePendingContent_*,FOnRequestContentSucceeded,FOnRequestContentFailed>
           *this,uint param_1)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Payload).field_0x20);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f03d620

void * __thiscall
UMobileInstalledContent::_scalar_deleting_destructor_(UMobileInstalledContent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMobileInstalledContent__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InstalledManifest).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->InstallDir).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f03d6a0

void * __thiscall
UMobilePatchingLibrary::_scalar_deleting_destructor_(UMobilePatchingLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UMobilePatchingLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14f03d700

void * __thiscall
UMobilePendingContent::_scalar_deleting_destructor_(UMobilePendingContent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMobilePendingContent__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RemoteManifest).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Installer).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->CloudURL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RemoteManifestURL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMobileInstalledContent__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeMobilePatchingLibrary @ 14f03dab0

void __cdecl EmptyLinkFunctionForGeneratedCodeMobilePatchingLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMobilePatchingUtils_init @ 14f03dac0

void __cdecl EmptyLinkFunctionForGeneratedCodeMobilePatchingUtils_init(void)

{
  return;
}

// FOnContentInstallFailed_DelegateWrapper @ 14f03dbe0

void __cdecl
FOnContentInstallFailed_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FText *param_2,int param_3)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  undefined1 local_res18 [8];
  FText local_28;
  int local_18;
  
  FText::FText(&local_28);
  TVar2.Reference = local_28.TextData.Reference;
  pIVar1 = (param_2->TextData).Reference;
  if (local_28.TextData.Reference != pIVar1) {
    local_28.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
  }
  local_28.Flags = param_2->Flags;
  local_18 = param_3;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_28);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// FOnContentInstallSucceeded_DelegateWrapper @ 14f03dc80

void __cdecl
FOnContentInstallSucceeded_DelegateWrapper(TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,(void *)0x0);
  return;
}

// FOnRequestContentFailed_DelegateWrapper @ 14f03dc90

void __cdecl
FOnRequestContentFailed_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FText *param_2,int param_3)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  undefined1 local_res18 [8];
  FText local_28;
  int local_18;
  
  FText::FText(&local_28);
  TVar2.Reference = local_28.TextData.Reference;
  pIVar1 = (param_2->TextData).Reference;
  if (local_28.TextData.Reference != pIVar1) {
    local_28.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
  }
  local_28.Flags = param_2->Flags;
  local_18 = param_3;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_28);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// FOnRequestContentSucceeded_DelegateWrapper @ 14f03dd30

void __cdecl
FOnRequestContentSucceeded_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UMobilePendingContent *param_2)

{
  UMobilePendingContent *local_res10 [3];
  
  local_res10[0] = param_2;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_res10);
  return;
}

// GetBuildPatchServices @ 14f03ddf0

IBuildPatchServicesModule * __cdecl GetBuildPatchServices(void)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  FName local_res8 [4];
  
  if (BuildPatchServices == (IBuildPatchServicesModule *)0x0) {
    pFVar2 = FName::FName(local_res8,L"BuildPatchServices");
    FVar1 = *pFVar2;
    this = FModuleManager::Get();
    BuildPatchServices = (IBuildPatchServicesModule *)FModuleManager::LoadModuleChecked(this,FVar1);
  }
  return BuildPatchServices;
}

// GetInstalledManifest @ 14f03e3a0

TSharedPtr<IBuildManifest,1> * __cdecl
GetInstalledManifest(TSharedPtr<IBuildManifest,1> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  FName FVar2;
  IBuildPatchServicesModule *pIVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar7;
  IFileManager *pIVar8;
  TSharedPtr<IBuildManifest,1> *pTVar9;
  FName *pFVar10;
  FModuleManager *this;
  int iVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  FName local_res8;
  FString *pFVar14;
  FString local_88;
  FString *local_78;
  undefined8 local_70;
  FString local_68;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  __return_storage_ptr__->Object = (IBuildManifest *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar7 = &FPaths::ProjectPersistentDownloadDir(&local_48)->Data;
  iVar11 = (param_1->Data).ArrayNum;
  iVar5 = 1;
  iVar6 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar6 = 0;
  }
  if ((pTVar7->ArrayNum == 0) && (iVar6 != -1)) {
    iVar5 = 2;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_58,pTVar7,iVar6 + iVar5);
  FString::PathAppend((FString *)&local_58,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar6);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_78 = (FString *)0x0;
  local_70 = 0;
  pIVar8 = IFileManager::Get();
  iVar11 = local_58.ArrayNum;
  FVar13.Data = local_58.AllocatorInstance.Data;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = local_58.ArrayNum;
  pcVar1 = *(code **)((longlong)*pIVar8 + 0x80);
  uVar12 = (0xc - (uint)(local_58.ArrayNum != 0)) + local_58.ArrayNum;
  if ((int)uVar12 < local_58.ArrayNum) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  pFVar14 = &local_68;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar12,0,(ForAnyElementType *)pFVar14,local_58.ArrayNum,&local_68.Data.ArrayMax);
  if (iVar11 != 0) {
    memcpy(local_68.Data.AllocatorInstance.Data,FVar13.Data,(longlong)iVar11 * 2);
  }
  FString::PathAppend(&local_68,L"*.manifest",10);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar13.Data = local_68.Data.AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar8,&local_78,FVar13.Data,1,(ulonglong)pFVar14 & 0xffffffffffffff00);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  iVar11 = 0;
  if ((int)local_70 == 0) goto LAB_14f03e674;
  if ((int)local_70 < 1) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TSharedPtr<IBuildManifest,1> *)(*pcVar1)();
      return pTVar9;
    }
  }
  pFVar14 = local_78;
  if (BuildPatchServices == (IBuildPatchServicesModule *)0x0) {
    pFVar10 = FName::FName(&local_res8,L"BuildPatchServices");
    FVar2 = *pFVar10;
    this = FModuleManager::Get();
    BuildPatchServices = (IBuildPatchServicesModule *)FModuleManager::LoadModuleChecked(this,FVar2);
  }
  FVar13.Data = local_58.AllocatorInstance.Data;
  pIVar3 = BuildPatchServices;
  pcVar1 = *(code **)((longlong)*BuildPatchServices + 0x60);
  iVar6 = (pFVar14->Data).ArrayNum;
  iVar11 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar11 = 0;
  }
  if ((local_58.ArrayNum == 0) && (iVar11 != -1)) {
    iVar6 = iVar11 + 2;
LAB_14f03e5cd:
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar6 != 0) goto LAB_14f03e5d6;
    local_88.Data.ArrayMax = 0;
  }
  else {
    iVar6 = iVar11 + 1;
    if (local_58.ArrayNum == 0) goto LAB_14f03e5cd;
LAB_14f03e5d6:
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar12 = iVar6 + local_58.ArrayNum;
    if ((int)uVar12 < local_58.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar12,0,(ForAnyElementType *)&local_88,local_58.ArrayNum,&local_88.Data.ArrayMax
              );
    if (local_58.ArrayNum != 0) {
      memcpy(local_88.Data.AllocatorInstance.Data,FVar13.Data,(longlong)local_58.ArrayNum * 2);
    }
  }
  FString::PathAppend(&local_88,(wchar_t *)(pFVar14->Data).AllocatorInstance.Data,iVar11);
  pTVar9 = (TSharedPtr<IBuildManifest,1> *)(*pcVar1)(pIVar3,local_38,&local_88);
  if (__return_storage_ptr__ != pTVar9) {
    __return_storage_ptr__->Object = pTVar9->Object;
    pTVar9->Object = (IBuildManifest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&pTVar9->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  iVar11 = (int)local_70;
LAB_14f03e674:
  DestructItems<FString,int>(local_78,iVar11);
  if (local_78 != (FString *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetRequestContentErrorText @ 14f03e930

FText * __cdecl GetRequestContentErrorText(ERequestContentError param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar1 < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&NoError,L"MobilePatchingUtils",L"RequestContentError_NoError",
               L"The operation was successful.");
    atexit(`GetRequestContentErrorText'::__l2::_dynamic_atexit_destructor_for__NoError__);
    _Init_thread_footer(&_TSS0);
  }
  if ((*piVar1 < _TSS1) && (_Init_thread_header(&_TSS1), _TSS1 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&InvalidInstallationDirectory,L"MobilePatchingUtils",
               L"RequestContentError_InvalidInstallationDirectory",L"Invalid installation directory"
              );
    atexit(`GetRequestContentErrorText'::__l2::
           _dynamic_atexit_destructor_for__InvalidInstallationDirectory__);
    _Init_thread_footer(&_TSS1);
  }
  if ((*piVar1 < _TSS2) && (_Init_thread_header(&_TSS2), _TSS2 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&InvalidCloudURL,L"MobilePatchingUtils",L"RequestContentError_InvalidCloudURL",
               L"Invalid cloud URL");
    atexit(`GetRequestContentErrorText'::__l2::_dynamic_atexit_destructor_for__InvalidCloudURL__);
    _Init_thread_footer(&_TSS2);
  }
  if ((*piVar1 < _TSS3) && (_Init_thread_header(&_TSS3), _TSS3 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&InvalidManifestURL,L"MobilePatchingUtils",L"RequestContentError_InvalidManifestURL",
               L"Invalid manifest URL");
    atexit(`GetRequestContentErrorText'::__l2::_dynamic_atexit_destructor_for__InvalidManifestURL__)
    ;
    _Init_thread_footer(&_TSS3);
  }
  if ((*piVar1 < _TSS4) && (_Init_thread_header(&_TSS4), _TSS4 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&FailedToDownloadManifestNoResponse,L"MobilePatchingUtils",
               L"RequestContentError_FailedToDownloadManifestNoResponse",
               L"Failed to download manifest file. No response");
    atexit(`GetRequestContentErrorText'::__l2::
           _dynamic_atexit_destructor_for__FailedToDownloadManifestNoResponse__);
    _Init_thread_footer(&_TSS4);
  }
  if ((*piVar1 < _TSS5) && (_Init_thread_header(&_TSS5), _TSS5 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&FailedToDownloadManifest,L"MobilePatchingUtils",
               L"RequestContentError_FailedToDownloadManifest",L"Failed to download manifest file");
    atexit(`GetRequestContentErrorText'::__l2::
           _dynamic_atexit_destructor_for__FailedToDownloadManifest__);
    _Init_thread_footer(&_TSS5);
  }
  if ((*piVar1 < _TSS6) && (_Init_thread_header(&_TSS6), _TSS6 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&FailedToReadManifest,L"MobilePatchingUtils",
               L"RequestContentError_FailedToReadManifest",
               L"Failed to reconstruct downloaded manifest file");
    atexit(`GetRequestContentErrorText'::__l2::
           _dynamic_atexit_destructor_for__FailedToReadManifest__);
    _Init_thread_footer(&_TSS6);
  }
  if ((*piVar1 < _TSS7) && (_Init_thread_header(&_TSS7), _TSS7 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&InvalidOrMax,L"MobilePatchingUtils",L"RequestContentError_InvalidOrMax",
               L"An unknown error ocurred");
    atexit(`GetRequestContentErrorText'::__l2::_dynamic_atexit_destructor_for__InvalidOrMax__);
    _Init_thread_footer(&_TSS7);
  }
  switch(param_1) {
  case NoError:
    return &NoError;
  case InvalidInstallationDirectory:
    return &InvalidInstallationDirectory;
  case InvalidCloudURL:
    return &InvalidCloudURL;
  case InvalidManifestURL:
    return &InvalidManifestURL;
  case FailedToDownloadManifestNoResponse:
    return &FailedToDownloadManifestNoResponse;
  case FailedToDownloadManifest:
    return &FailedToDownloadManifest;
  case FailedToReadManifest:
    return &FailedToReadManifest;
  default:
    return &InvalidOrMax;
  }
}

// OnInstallComplete @ 14f03f120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
OnInstallComplete(TSharedRef<IBuildInstaller,1> *param_1,UMobilePendingContent *param_2,
                 FOnContentInstallSucceeded *param_3,FOnContentInstallFailed *param_4)

{
  FName FVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  IBuildManifest *pIVar4;
  IBuildInstaller *pIVar5;
  IBuildPatchServicesModule *pIVar6;
  TRefCountPtr<ITextData> TVar7;
  TRefCountPtr<ITextData> TVar8;
  char cVar9;
  bool bVar10;
  undefined4 uVar11;
  FName *pFVar12;
  FModuleManager *this;
  TSharedRef<IBuildManifest,1> *pTVar13;
  FText *pFVar14;
  undefined1 local_res10 [8];
  FText local_c8;
  FString local_b8;
  FText local_a8;
  undefined4 local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  FString local_78;
  FName local_68;
  longlong local_60;
  TReferenceControllerBase<1> *pTStack_58;
  longlong *local_50 [2];
  TSharedRef<IBuildManifest,1> local_40;
  
  if (param_2 == (UMobilePendingContent *)0x0) {
    if (1 < (byte)LogMobilePatchingUtils._0_1_) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogMobilePatchingUtils);
    }
  }
  else {
    cVar9 = (**(code **)((longlong)*param_1->Object + 0x38))();
    if (cVar9 == '\0') {
      uVar11 = 0xc;
      FText::AsLocalizable_Advanced_LocText
                (&local_c8,L"MobilePatchingUtils",L"Error_Unknown",L"An unknown error ocurred");
      pIVar5 = (param_2->Installer).Object;
      if (pIVar5 != (IBuildInstaller *)0x0) {
        pFVar14 = (FText *)(**(code **)((longlong)*pIVar5 + 0xa8))(pIVar5,local_50);
        FText::operator=(&local_c8,pFVar14);
        if (local_50[0] != (longlong *)0x0) {
          (**(code **)(*local_50[0] + 0x10))();
        }
        if (((param_2->Installer).Object == (IBuildInstaller *)0x0) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar11 = (**(code **)((longlong)*(param_2->Installer).Object + 0x48))();
      }
      if (1 < (byte)LogMobilePatchingUtils._0_1_) {
        FText::ToString(&local_c8);
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogMobilePatchingUtils);
      }
      TVar7.Reference = local_c8.TextData.Reference;
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 8))
                  (local_c8.TextData.Reference,local_res10);
      }
      bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_4);
      if (bVar10) {
        FText::FText(&local_a8);
        TVar8.Reference = local_a8.TextData.Reference;
        if (local_a8.TextData.Reference != TVar7.Reference) {
          local_a8.TextData.Reference = TVar7.Reference;
          if (TVar7.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,local_90);
          }
          if (TVar8.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar8.Reference + 0x10))(TVar8.Reference);
          }
        }
        local_a8.Flags = local_c8.Flags;
        local_98 = uVar11;
        TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
                  ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_4,&local_a8);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
      }
      if (TVar7.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar7.Reference + 0x10))(TVar7.Reference);
      }
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
    }
    else {
      if (BuildPatchServices == (IBuildPatchServicesModule *)0x0) {
        pFVar12 = FName::FName(&local_68,L"BuildPatchServices");
        FVar1 = *pFVar12;
        this = FModuleManager::Get();
        BuildPatchServices =
             (IBuildPatchServicesModule *)FModuleManager::LoadModuleChecked(this,FVar1);
      }
      pIVar6 = BuildPatchServices;
      FPaths::GetCleanFilename(&local_78,&param_2->RemoteManifestURL);
      operator/(&local_b8,(FString *)&param_2->_padding_,&local_78);
      pcVar2 = *(code **)((longlong)*pIVar6 + 0x70);
      pTVar13 = TSharedPtr<IBuildManifest,1>::ToSharedRef(&param_2->RemoteManifest,&local_40);
      cVar9 = (*pcVar2)(pIVar6,&local_b8,pTVar13);
      if ((cVar9 == '\0') && (1 < (byte)LogMobilePatchingUtils._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogMobilePatchingUtils);
      }
      pTVar3 = (param_2->RemoteManifest).SharedReferenceCount.ReferenceController;
      pIVar4 = (param_2->RemoteManifest).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_60 = param_2->_padding_;
      pTStack_58 = (TReferenceControllerBase<1> *)param_2->_padding_;
      param_2->_padding_ = (longlong)pIVar4;
      param_2->_padding_ = (longlong)pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_58);
      bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_3);
      if (bVar10) {
        TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
                  ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_3,(void *)0x0);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    local_88 = 0;
    FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&param_2->Installer != (TSharedPtr<IBuildInstaller,1> *)&local_88) {
      (param_2->Installer).Object = (IBuildInstaller *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_2->Installer).SharedReferenceCount,&FStack_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_80.ReferenceController);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  return;
}

// OnRemoteManifestReady @ 14f03f480

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
OnRemoteManifestReady
          (TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,bool param_3,
          UMobilePendingContent *param_4,FOnRequestContentSucceeded *param_5,
          FOnRequestContentFailed *param_6)

{
  code *pcVar1;
  FOnRequestContentFailed *this;
  bool bVar2;
  int iVar3;
  FUObjectItem *this_00;
  IHttpResponse *pIVar4;
  IBuildPatchServicesModule *pIVar5;
  undefined8 uVar6;
  undefined4 local_res18 [2];
  undefined4 *local_58;
  FOnRequestContentFailed *local_50;
  IBuildManifest *local_48;
  TReferenceControllerBase<1> *local_40;
  void *local_38 [2];
  IBuildManifest *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  this = param_6;
  local_58 = local_res18;
  local_50 = param_6;
  local_res18[0] = 0;
  if (param_4 != (UMobilePendingContent *)0x0) {
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&param_4->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this_00,RootSet);
  }
  if ((param_3) && (param_2->Object != (IHttpResponse *)0x0)) {
    iVar3 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar3 - 200U < 7) {
      pIVar5 = GetBuildPatchServices();
      pcVar1 = *(code **)((longlong)*pIVar5 + 0x68);
      pIVar4 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
      uVar6 = (**(code **)((longlong)*pIVar4 + 0x48))(pIVar4);
      (*pcVar1)(pIVar5,&local_48,uVar6);
      if (local_48 == (IBuildManifest *)0x0) {
        local_res18[0] = 6;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40);
      }
      else {
        if (param_4 != (UMobilePendingContent *)0x0) {
          if (local_40 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_28 = (param_4->RemoteManifest).Object;
          pTStack_20 = (param_4->RemoteManifest).SharedReferenceCount.ReferenceController;
          (param_4->RemoteManifest).Object = local_48;
          (param_4->RemoteManifest).SharedReferenceCount.ReferenceController = local_40;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_20);
          bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                            ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_5);
          if (bVar2) {
            param_6 = (FOnRequestContentFailed *)param_4;
            TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_5,&param_6);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40);
      }
    }
    else {
      if (1 < (byte)LogMobilePatchingUtils._0_1_) {
        pIVar4 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
        (**(code **)((longlong)*pIVar4 + 0x60))(pIVar4,local_38);
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogMobilePatchingUtils);
        if (local_38[0] != (void *)0x0) {
          FMemory::Free(local_38[0]);
        }
      }
      local_res18[0] = 5;
    }
  }
  else {
    local_res18[0] = 4;
  }
  `OnRemoteManifestReady'::__l2::<lambda_1>::operator()(&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_5);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// Z_Construct_UClass_UMobilePatchingLibrary_NoRegister @ 14f040340

UClass * __cdecl Z_Construct_UClass_UMobilePatchingLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMobilePatchingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MobilePatchingUtils",L"MobilePatchingLibrary",
               &Z_Registration_Info_UClass_UMobilePatchingLibrary.InnerSingleton,
               UMobilePatchingLibrary::StaticRegisterNativesUMobilePatchingLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMobilePatchingLibrary>,
               InternalVTableHelperCtorCaller<UMobilePatchingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMobilePatchingLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_MobilePatchingUtils @ 14f040de0

void __cdecl IMPLEMENT_MODULE_MobilePatchingUtils(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 150471640

void __cdecl EHttpResponseCodes::_dynamic_atexit_destructor_for__ErrorNamespace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ErrorNamespace.Data.AllocatorInstance.Data;
  if (ErrorNamespace.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ErrorNamespace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'FailedToDownloadManifest'' @ 150471660

void __cdecl
`GetRequestContentErrorText'::__l2::_dynamic_atexit_destructor_for__FailedToDownloadManifest__(void)

{
  if (FailedToDownloadManifest.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015047166f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*FailedToDownloadManifest.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FailedToDownloadManifestNoResponse'' @ 150471680

void __cdecl
`GetRequestContentErrorText'::__l2::
_dynamic_atexit_destructor_for__FailedToDownloadManifestNoResponse__(void)

{
  if (FailedToDownloadManifestNoResponse.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015047168f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*FailedToDownloadManifestNoResponse.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FailedToReadManifest'' @ 1504716a0

void __cdecl
`GetRequestContentErrorText'::__l2::_dynamic_atexit_destructor_for__FailedToReadManifest__(void)

{
  if (FailedToReadManifest.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504716af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*FailedToReadManifest.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InvalidCloudURL'' @ 1504716c0

void __cdecl
`GetRequestContentErrorText'::__l2::_dynamic_atexit_destructor_for__InvalidCloudURL__(void)

{
  if (InvalidCloudURL.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504716cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InvalidCloudURL.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InvalidInstallationDirectory'' @ 1504716e0

void __cdecl
`GetRequestContentErrorText'::__l2::_dynamic_atexit_destructor_for__InvalidInstallationDirectory__
          (void)

{
  if (InvalidInstallationDirectory.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504716ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InvalidInstallationDirectory.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InvalidManifestURL'' @ 150471700

void __cdecl
`GetRequestContentErrorText'::__l2::_dynamic_atexit_destructor_for__InvalidManifestURL__(void)

{
  if (InvalidManifestURL.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015047170f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InvalidManifestURL.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InvalidOrMax'' @ 150471720

void __cdecl
`GetRequestContentErrorText'::__l2::_dynamic_atexit_destructor_for__InvalidOrMax__(void)

{
  if (InvalidOrMax.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015047172f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InvalidOrMax.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogMobilePatchingUtils'' @ 150471740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMobilePatchingUtils__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMobilePatchingUtils);
  return;
}

// `dynamic_atexit_destructor_for_'NoError'' @ 150471760

void __cdecl `GetRequestContentErrorText'::__l2::_dynamic_atexit_destructor_for__NoError__(void)

{
  if (NoError.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015047176f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*NoError.TextData.Reference + 0x10))();
    return;
  }
  return;
}

