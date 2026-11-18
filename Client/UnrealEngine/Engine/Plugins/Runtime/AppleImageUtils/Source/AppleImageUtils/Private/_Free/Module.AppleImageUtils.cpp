// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleImageUtils
// Functions: 51

// `dynamic_initializer_for_'ModuleRegistrantAppleImageUtils'' @ 1413c2150

void __cdecl _dynamic_initializer_for__ModuleRegistrantAppleImageUtils__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AppleImageUtils";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AppleImageUtils",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAppleImageUtilsPlugin>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h__Script_AppleImageUtils_2622465072'' @ 1413c21a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h__Script_AppleImageUtils_2622465072__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AppleImageUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h__Script_AppleImageUtils_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h__Script_AppleImageUtils_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h__Script_AppleImageUtils_3669918737'' @ 1413c21f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h__Script_AppleImageUtils_3669918737__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AppleImageUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h__Script_AppleImageUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h__Script_AppleImageUtils_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AppleImageUtils'' @ 1413c2240

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AppleImageUtils__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x5afe1aa6;
  local_res8[0].DeclarationsHash = 0xe302dfd;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AppleImageUtils,L"/Script/AppleImageUtils",
             &Z_Registration_Info_UPackage__Script_AppleImageUtils,local_res8);
  return;
}

// Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature @ 14cfa6b10

UFunction * __cdecl
Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_AppleImageUtils @ 14cfa6b50

UPackage * __cdecl Z_Construct_UPackage__Script_AppleImageUtils(void)

{
  if (Z_Registration_Info_UPackage__Script_AppleImageUtils.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AppleImageUtils.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AppleImageUtils.OuterSingleton;
}

// Z_Construct_UClass_UAppleImageInterface @ 14cfa6c50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAppleImageInterface(void)

{
  if (Z_Registration_Info_UClass_UAppleImageInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAppleImageInterface.OuterSingleton,
               &Z_Construct_UClass_UAppleImageInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAppleImageInterface.OuterSingleton;
}

// Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection @ 14cfa6c90

UEnum * __cdecl Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection(void)

{
  if (Z_Registration_Info_UEnum_ETextureRotationDirection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETextureRotationDirection.InnerSingleton,
               &Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETextureRotationDirection.InnerSingleton;
}

// ETextureRotationDirection_StaticEnum @ 14cfa6cd0

UEnum * __cdecl ETextureRotationDirection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureRotationDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleImageUtils();
    Z_Registration_Info_UEnum_ETextureRotationDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection,(UObject *)pUVar1
                       ,L"ETextureRotationDirection");
  }
  return Z_Registration_Info_UEnum_ETextureRotationDirection.OuterSingleton;
}

// EAppleTextureType_StaticEnum @ 14cfa6d10

UEnum * __cdecl EAppleTextureType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAppleTextureType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleImageUtils();
    Z_Registration_Info_UEnum_EAppleTextureType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AppleImageUtils_EAppleTextureType,(UObject *)pUVar1,
                       L"EAppleTextureType");
  }
  return Z_Registration_Info_UEnum_EAppleTextureType.OuterSingleton;
}

// Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_NoRegister @ 14cfa6d50

UClass * __cdecl Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleImageUtils",L"AppleImageUtilsBaseAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy.
                InnerSingleton,
               UAppleImageUtilsBaseAsyncTaskBlueprintProxy::
               StaticRegisterNativesUAppleImageUtilsBaseAsyncTaskBlueprintProxy,0x98,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy.InnerSingleton;
}

// `scalar_deleting_destructor' @ 14cfa6ef0

void * __thiscall
IAppleImageUtilsPlugin::_scalar_deleting_destructor_(IAppleImageUtilsPlugin *this,uint param_1)

{
  *this = (IAppleImageUtilsPlugin)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy @ 14cfa6f30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy(void)

{
  if (Z_Registration_Info_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy.
                OuterSingleton,
               &Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult @ 14cfa6f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAppleImageUtilsImageConversionResult.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAppleImageUtilsImageConversionResult.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAppleImageUtilsImageConversionResult.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAppleImageUtilsImageConversionResult.InnerSingleton;
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

// NewStructOps @ 14cfa6ff0

void * __cdecl
Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAppleImageUtilsImageConversionResult,&UE::CoreUObject::Private::Construct<FAppleImageUtilsImageConversionResult>,&UE::CoreUObject::Private::ConstructForTests<FAppleImageUtilsImageConversionResult>,&UE::CoreUObject::Private::Destruct<FAppleImageUtilsImageConversionResult>,&UE::CoreUObject::Private::Copy<FAppleImageUtilsImageConversionResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bWantColor_SetBit @ 14cfa7030

void __cdecl
Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics
::NewProp_bWantColor_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bUseGpu_SetBit @ 14cfa7040

void __cdecl
Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics
::NewProp_bUseGpu_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF @ 14cfa7050

UFunction * __cdecl
Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bWantColor_SetBit @ 14cfa7090

void __cdecl
Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics
::NewProp_bWantColor_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bUseGpu_SetBit @ 14cfa70a0

void __cdecl
Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics
::NewProp_bUseGpu_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG @ 14cfa70b0

UFunction * __cdecl
Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bWantColor_SetBit @ 14cfa70f0

void __cdecl
Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics
::NewProp_bWantColor_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bUseGpu_SetBit @ 14cfa7100

void __cdecl
Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics
::NewProp_bUseGpu_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG @ 14cfa7110

UFunction * __cdecl
Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bWantColor_SetBit @ 14cfa7150

void __cdecl
Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics
::NewProp_bWantColor_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bUseGpu_SetBit @ 14cfa7160

void __cdecl
Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics
::NewProp_bUseGpu_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF @ 14cfa7170

UFunction * __cdecl
Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14cfa79a0

void * __thiscall
FAppleImageUtilsPlugin::_scalar_deleting_destructor_(FAppleImageUtilsPlugin *this,uint param_1)

{
  *this = (FAppleImageUtilsPlugin)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// InternalConstructor<UAppleImageInterface> @ 14cfa7b40

void __cdecl InternalConstructor<UAppleImageInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UAppleImageInterface__6B_;
  }
  return;
}

// InternalConstructor<UAppleImageUtilsBaseAsyncTaskBlueprintProxy> @ 14cfa7b70

void __cdecl
InternalConstructor<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    *(undefined ***)this = &UAppleImageUtilsBaseAsyncTaskBlueprintProxy::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UAppleImageUtilsBaseAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    this[3].field_0x18 = 1;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAppleImageInterface> @ 14cfa7c00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAppleImageInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAppleImageInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAppleImageInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAppleImageUtilsBaseAsyncTaskBlueprintProxy> @ 14cfa7cb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar3 = (UObject *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAppleImageUtilsBaseAsyncTaskBlueprintProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(pUVar1 + 1),NewObject);
    *(undefined ***)pUVar1 = &UAppleImageUtilsBaseAsyncTaskBlueprintProxy::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UAppleImageUtilsBaseAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__;
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
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// MakeShared<FAppleImageUtilsFailedConversionTask,1,wchar_t_const_(&)[51]> @ 14cfa7da0

TSharedRef<FAppleImageUtilsFailedConversionTask,1> * __cdecl
MakeShared<FAppleImageUtilsFailedConversionTask,1,wchar_t_const_(&)[51]>
          (TSharedRef<FAppleImageUtilsFailedConversionTask,1> *__return_storage_ptr__,
          wchar_t (*param_1) [51])

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  longlong _Src;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FAppleImageUtilsFailedConversionTask,1> *pTVar5;
  TReferenceControllerBase<1> local_28;
  
  pTVar4 = operator_new(0x40);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FAppleImageUtilsFailedConversionTask *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAppleImageUtilsFailedConversionTask___00_SharedPointerInternals__6B_
    ;
    FString::FString((FString *)&local_28,*param_1);
    _Src = local_28._padding_;
    pTVar1 = pTVar4 + 3;
    pTVar4[1]._padding_ = (longlong)&___7FAppleImageUtilsConversionTaskBase__6B_;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1->_padding_ = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[1]._padding_ = (longlong)&___7FAppleImageUtilsFailedConversionTask__6B_;
    if ((pTVar1 != &local_28) &&
       (pTVar4[3].SharedReferenceCount = local_28.SharedReferenceCount,
       local_28.SharedReferenceCount != (atomic<int>)0x0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_28.SharedReferenceCount,0,(ForAnyElementType *)pTVar1,
                 (int)local_28.SharedReferenceCount,(int *)&pTVar4[3].WeakReferenceCount);
      memcpy((FScriptContainerElement *)pTVar1->_padding_,(void *)_Src,
             (longlong)(int)local_28.SharedReferenceCount * 2);
    }
    LOCK();
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x1;
    UNLOCK();
    LOCK();
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x1;
    UNLOCK();
    if ((void *)local_28._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_28._padding_);
    }
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    __return_storage_ptr__->Object = (FAppleImageUtilsFailedConversionTask *)(pTVar4 + 1);
    if (((FAppleImageUtilsFailedConversionTask *)(pTVar4 + 1) ==
         (FAppleImageUtilsFailedConversionTask *)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FAppleImageUtilsFailedConversionTask,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FAppleImageUtilsFailedConversionTask,1,wchar_t_const_(&)[66]> @ 14cfa7f10

TSharedRef<FAppleImageUtilsFailedConversionTask,1> * __cdecl
MakeShared<FAppleImageUtilsFailedConversionTask,1,wchar_t_const_(&)[66]>
          (TSharedRef<FAppleImageUtilsFailedConversionTask,1> *__return_storage_ptr__,
          wchar_t (*param_1) [66])

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  longlong _Src;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FAppleImageUtilsFailedConversionTask,1> *pTVar5;
  TReferenceControllerBase<1> local_28;
  
  pTVar4 = operator_new(0x40);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FAppleImageUtilsFailedConversionTask *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAppleImageUtilsFailedConversionTask___00_SharedPointerInternals__6B_
    ;
    FString::FString((FString *)&local_28,*param_1);
    _Src = local_28._padding_;
    pTVar1 = pTVar4 + 3;
    pTVar4[1]._padding_ = (longlong)&___7FAppleImageUtilsConversionTaskBase__6B_;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1->_padding_ = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[1]._padding_ = (longlong)&___7FAppleImageUtilsFailedConversionTask__6B_;
    if ((pTVar1 != &local_28) &&
       (pTVar4[3].SharedReferenceCount = local_28.SharedReferenceCount,
       local_28.SharedReferenceCount != (atomic<int>)0x0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_28.SharedReferenceCount,0,(ForAnyElementType *)pTVar1,
                 (int)local_28.SharedReferenceCount,(int *)&pTVar4[3].WeakReferenceCount);
      memcpy((FScriptContainerElement *)pTVar1->_padding_,(void *)_Src,
             (longlong)(int)local_28.SharedReferenceCount * 2);
    }
    LOCK();
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x1;
    UNLOCK();
    LOCK();
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x1;
    UNLOCK();
    if ((void *)local_28._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_28._padding_);
    }
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    __return_storage_ptr__->Object = (FAppleImageUtilsFailedConversionTask *)(pTVar4 + 1);
    if (((FAppleImageUtilsFailedConversionTask *)(pTVar4 + 1) ==
         (FAppleImageUtilsFailedConversionTask *)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FAppleImageUtilsFailedConversionTask,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FAppleImageUtilsFailedConversionTask,1,FString> @ 14cfa8080

TSharedRef<FAppleImageUtilsFailedConversionTask,1> * __cdecl
MakeShared<FAppleImageUtilsFailedConversionTask,1,FString>
          (TSharedRef<FAppleImageUtilsFailedConversionTask,1> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FAppleImageUtilsFailedConversionTask,1> *pTVar4;
  
  pTVar3 = operator_new(0x40);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FAppleImageUtilsFailedConversionTask *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAppleImageUtilsFailedConversionTask___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FAppleImageUtilsConversionTaskBase__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar3[3]._padding_)->AllocatorInstance).Data
         = (FScriptContainerElement *)0x0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[1]._padding_ = (longlong)&___7FAppleImageUtilsFailedConversionTask__6B_;
    FString::operator=((FString *)(pTVar3 + 3),param_1);
    LOCK();
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x1;
    UNLOCK();
    LOCK();
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x1;
    UNLOCK();
    __return_storage_ptr__->Object = (FAppleImageUtilsFailedConversionTask *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FAppleImageUtilsFailedConversionTask *)(pTVar3 + 1) ==
        (FAppleImageUtilsFailedConversionTask *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FAppleImageUtilsFailedConversionTask,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UAppleImageUtilsBaseAsyncTaskBlueprintProxy> @ 14cfa8180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAppleImageUtilsBaseAsyncTaskBlueprintProxy * __cdecl
NewObject<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UAppleImageUtilsBaseAsyncTaskBlueprintProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAppleImageUtilsBaseAsyncTaskBlueprintProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAppleImageUtilsBaseAsyncTaskBlueprintProxy *)
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

// StaticEnum<enum_EAppleTextureType> @ 14cfa8220

UEnum * __cdecl StaticEnum<enum_EAppleTextureType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAppleTextureType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleImageUtils();
    Z_Registration_Info_UEnum_EAppleTextureType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AppleImageUtils_EAppleTextureType,(UObject *)pUVar1,
                       L"EAppleTextureType");
  }
  return Z_Registration_Info_UEnum_EAppleTextureType.OuterSingleton;
}

// StaticEnum<enum_ETextureRotationDirection> @ 14cfa8260

UEnum * __cdecl StaticEnum<enum_ETextureRotationDirection>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureRotationDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleImageUtils();
    Z_Registration_Info_UEnum_ETextureRotationDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection,(UObject *)pUVar1
                       ,L"ETextureRotationDirection");
  }
  return Z_Registration_Info_UEnum_ETextureRotationDirection.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cfa85e0

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UAppleImageUtilsBaseAsyncTaskBlueprintProxy::`vector deleting destructor'`adjustor{40}' (unsigned
   int) __ptr64 */

void * __thiscall
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::_vector_deleting_destructor__adjustor_40__
          (UAppleImageUtilsBaseAsyncTaskBlueprintProxy *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAppleImageUtilsBaseAsyncTaskBlueprintProxy *)&this[-1].ConversionResult,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14cfa85f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAppleImageUtilsFailedConversionTask,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAppleImageUtilsFailedConversionTask,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfa8630

void * __thiscall
FAppleImageUtilsConversionTaskBase::_scalar_deleting_destructor_
          (FAppleImageUtilsConversionTaskBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAppleImageUtilsConversionTaskBase__6B_;
  pFVar1 = (this->Error).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfa8680

void * __thiscall
FAppleImageUtilsFailedConversionTask::_scalar_deleting_destructor_
          (FAppleImageUtilsFailedConversionTask *this,uint param_1)

{
  *(undefined ***)this = &___7FAppleImageUtilsConversionTaskBase__6B_;
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfa86d0

void * __thiscall
UAppleImageInterface::_scalar_deleting_destructor_(UAppleImageInterface *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfa8730

void * __thiscall
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::_scalar_deleting_destructor_
          (UAppleImageUtilsBaseAsyncTaskBlueprintProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1 = (this->ConversionResult).ImageData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConversionResult).Error.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ConversionTask).SharedReferenceCount.ReferenceController);
  pvVar2 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar2 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x98);
    }
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAppleImageUtilsBlueprintProxy @ 14cfa8c20

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleImageUtilsBlueprintProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAppleImageUtilsTypes @ 14cfa8c30

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleImageUtilsTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAppleImageUtils_init @ 14cfa8c40

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleImageUtils_init(void)

{
  return;
}

// FAppleImageConversionDelegate_DelegateWrapper @ 14cfa8c50

void __cdecl
FAppleImageConversionDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          FAppleImageUtilsImageConversionResult *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FString local_28;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  FString::operator=(&local_28,&param_2->Error);
  if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_18 != &param_2->ImageData) {
    iVar1 = (param_2->ImageData).ArrayNum;
    _Src = (param_2->ImageData).AllocatorInstance.Data;
    local_10 = CONCAT44(local_10._4_4_,iVar1);
    if ((iVar1 == 0) && (local_10._4_4_ == 0)) {
      local_10 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar1,local_10._4_4_,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
      if (iVar1 != 0) {
        memcpy(local_18.Data,_Src,(longlong)iVar1);
      }
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// Z_Construct_UClass_UAppleImageInterface_NoRegister @ 14cfa9430

UClass * __cdecl Z_Construct_UClass_UAppleImageInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleImageInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleImageUtils",L"AppleImageInterface",
               &Z_Registration_Info_UClass_UAppleImageInterface.InnerSingleton,
               UAppleImageInterface::StaticRegisterNativesUAppleImageInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleImageInterface>,
               InternalVTableHelperCtorCaller<UAppleImageInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleImageInterface.InnerSingleton;
}

// Z_Construct_UEnum_AppleImageUtils_EAppleTextureType @ 14cfa94f0

UEnum * __cdecl Z_Construct_UEnum_AppleImageUtils_EAppleTextureType(void)

{
  if (Z_Registration_Info_UEnum_EAppleTextureType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAppleTextureType.InnerSingleton,
               &Z_Construct_UEnum_AppleImageUtils_EAppleTextureType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAppleTextureType.InnerSingleton;
}

// IMPLEMENT_MODULE_AppleImageUtils @ 14cfa9e30

void __cdecl IMPLEMENT_MODULE_AppleImageUtils(void)

{
  return;
}

