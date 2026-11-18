// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AndroidPermission
// Functions: 28

// `dynamic_initializer_for_'LogAndroidPermission'' @ 14144fac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAndroidPermission__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAndroidPermission,L"LogAndroidPermission",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAndroidPermission__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAndroidPermission'' @ 14144fb00

void __cdecl _dynamic_initializer_for__ModuleRegistrantAndroidPermission__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AndroidPermission";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AndroidPermission",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAndroidPermissionModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h__Script_AndroidPermission_2820629904'' @ 14144fb50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h__Script_AndroidPermission_2820629904__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AndroidPermission",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h__Script_AndroidPermission_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h__Script_AndroidPermission_2177799523'' @ 14144fb90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h__Script_AndroidPermission_2177799523__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AndroidPermission",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h__Script_AndroidPermission_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AndroidPermission'' @ 14144fbd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AndroidPermission__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x809e817;
  local_res8[0].DeclarationsHash = 0xdb54f591;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AndroidPermission,L"/Script/AndroidPermission",
             &Z_Registration_Info_UPackage__Script_AndroidPermission,local_res8);
  return;
}

// Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature @ 14f00bda0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_AndroidPermission @ 14f00bde0

UPackage * __cdecl Z_Construct_UPackage__Script_AndroidPermission(void)

{
  if (Z_Registration_Info_UPackage__Script_AndroidPermission.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AndroidPermission.OuterSingleton,&PackageParams
              );
  }
  return Z_Registration_Info_UPackage__Script_AndroidPermission.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14f00be40

void * __thiscall
FAndroidPermissionModule::_scalar_deleting_destructor_(FAndroidPermissionModule *this,uint param_1)

{
  *this = (FAndroidPermissionModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UAndroidPermissionCallbackProxy_NoRegister @ 14f00bf40

UClass * __cdecl Z_Construct_UClass_UAndroidPermissionCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAndroidPermissionCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AndroidPermission",L"AndroidPermissionCallbackProxy",
               &Z_Registration_Info_UClass_UAndroidPermissionCallbackProxy.InnerSingleton,
               UAndroidPermissionCallbackProxy::StaticRegisterNativesUAndroidPermissionCallbackProxy
               ,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAndroidPermissionCallbackProxy>,
               InternalVTableHelperCtorCaller<UAndroidPermissionCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAndroidPermissionCallbackProxy.InnerSingleton;
}

// Z_Construct_UClass_UAndroidPermissionCallbackProxy @ 14f00c0a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAndroidPermissionCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_UAndroidPermissionCallbackProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAndroidPermissionCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAndroidPermissionCallbackProxy.OuterSingleton;
}

// Z_Construct_UClass_UAndroidPermissionFunctionLibrary @ 14f00c0e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAndroidPermissionFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions @ 14f00c120

UFunction * __cdecl Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f00c160

void __cdecl
Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission @ 14f00c170

UFunction * __cdecl Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<UAndroidPermissionCallbackProxy> @ 14f00c1b0

void __cdecl InternalConstructor<UAndroidPermissionCallbackProxy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAndroidPermissionCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 2;
  }
  return;
}

// InternalConstructor<UAndroidPermissionFunctionLibrary> @ 14f00c210

void __cdecl InternalConstructor<UAndroidPermissionFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAndroidPermissionFunctionLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAndroidPermissionCallbackProxy> @ 14f00c240

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAndroidPermissionCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAndroidPermissionCallbackProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAndroidPermissionCallbackProxy__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAndroidPermissionFunctionLibrary> @ 14f00c310

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAndroidPermissionFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAndroidPermissionFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAndroidPermissionFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UAndroidPermissionCallbackProxy> @ 14f00c3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAndroidPermissionCallbackProxy * __cdecl
NewObject<UAndroidPermissionCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UAndroidPermissionCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAndroidPermissionCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAndroidPermissionCallbackProxy *)
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

// `scalar_deleting_destructor' @ 14f00c5f0

void * __thiscall
UAndroidPermissionCallbackProxy::_scalar_deleting_destructor_
          (UAndroidPermissionCallbackProxy *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAndroidPermissionCallbackProxy__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPermissionsGrantedDelegate).field_0x8,
             *(int *)&(this->OnPermissionsGrantedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnPermissionsGrantedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPermissionsGrantedDelegate);
  pvVar1 = *(void **)&(this->OnPermissionsGrantedDynamicDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPermissionsGrantedDynamicDelegate);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f00c6a0

void * __thiscall
UAndroidPermissionFunctionLibrary::_scalar_deleting_destructor_
          (UAndroidPermissionFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UAndroidPermissionFunctionLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeAndroidPermissionCallbackProxy @ 14f00c840

void __cdecl EmptyLinkFunctionForGeneratedCodeAndroidPermissionCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAndroidPermissionFunctionLibrary @ 14f00c850

void __cdecl EmptyLinkFunctionForGeneratedCodeAndroidPermissionFunctionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAndroidPermission_init @ 14f00c860

void __cdecl EmptyLinkFunctionForGeneratedCodeAndroidPermission_init(void)

{
  return;
}

// FAndroidPermissionDynamicDelegate_DelegateWrapper @ 14f00c870

void __cdecl
FAndroidPermissionDynamicDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  TArray<bool,TSizedDefaultAllocator<32>_> local_28;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  iVar3 = 0;
  if (&local_38 != param_2) {
    DestructItems<FString,int>((FString *)0x0,0);
    iVar3 = param_2->ArrayNum;
    pFVar2 = (param_2->AllocatorInstance).Data;
    local_38.ArrayNum = iVar3;
    if ((iVar3 == 0) && (local_38.ArrayMax == 0)) {
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,local_38.ArrayMax,&local_38.AllocatorInstance,iVar3,&local_38.ArrayMax
                );
      ConstructItems<FString,FString,int>(local_38.AllocatorInstance.Data,(FString *)pFVar2,iVar3);
    }
    iVar3 = local_28.ArrayMax;
  }
  if (&local_28 != param_3) {
    iVar1 = param_3->ArrayNum;
    pFVar2 = (param_3->AllocatorInstance).Data;
    local_28.ArrayNum = iVar1;
    if ((iVar1 == 0) && (iVar3 == 0)) {
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar1,iVar3,&local_28.AllocatorInstance,iVar1,&local_28.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_28.AllocatorInstance.Data,pFVar2,(longlong)iVar1);
      }
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_38);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// Z_Construct_UClass_UAndroidPermissionFunctionLibrary_NoRegister @ 14f00ccf0

UClass * __cdecl Z_Construct_UClass_UAndroidPermissionFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AndroidPermission",L"AndroidPermissionFunctionLibrary",
               &Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.InnerSingleton,
               UAndroidPermissionFunctionLibrary::
               StaticRegisterNativesUAndroidPermissionFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAndroidPermissionFunctionLibrary>,
               InternalVTableHelperCtorCaller<UAndroidPermissionFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_AndroidPermission @ 14f00d020

void __cdecl IMPLEMENT_MODULE_AndroidPermission(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogAndroidPermission'' @ 150471240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAndroidPermission__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAndroidPermission);
  return;
}

