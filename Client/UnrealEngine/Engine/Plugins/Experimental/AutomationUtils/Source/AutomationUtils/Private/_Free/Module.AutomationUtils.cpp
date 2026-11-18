// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationUtils
// Functions: 22

// ManagedScreenshotInstances'' @ 14143b430

void __cdecl
`dynamic_initializer_for_'FAutomationUtilsGameplayAutomationScreenshotFactory::
ManagedScreenshotInstances__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAutomationUtilsGameplayAutomationScreenshotFactory::
         ManagedScreenshotInstances__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAutomationUtils'' @ 14143b450

void __cdecl _dynamic_initializer_for__ModuleRegistrantAutomationUtils__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AutomationUtils";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AutomationUtils",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h__Script_AutomationUtils_3124300385'' @ 14143b4a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h__Script_AutomationUtils_3124300385__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AutomationUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h__Script_AutomationUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AutomationUtils'' @ 14143b4e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AutomationUtils__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xa3213c9;
  local_res8[0].DeclarationsHash = 0x78923f68;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AutomationUtils,L"/Script/AutomationUtils",
             &Z_Registration_Info_UPackage__Script_AutomationUtils,local_res8);
  return;
}

// Z_Construct_UClass_UAutomationUtilsBlueprintLibrary @ 14e7eb750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAutomationUtilsBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot @ 14e7eb790

UFunction * __cdecl
Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_AutomationUtils @ 14e7eb7d0

UPackage * __cdecl Z_Construct_UPackage__Script_AutomationUtils(void)

{
  if (Z_Registration_Info_UPackage__Script_AutomationUtils.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AutomationUtils.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AutomationUtils.OuterSingleton;
}

// InternalConstructor<UAutomationUtilsBlueprintLibrary> @ 14e7ec1f0

void __cdecl InternalConstructor<UAutomationUtilsBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAutomationUtilsBlueprintLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAutomationUtilsBlueprintLibrary> @ 14e7ec220

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAutomationUtilsBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAutomationUtilsBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAutomationUtilsBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// MakeShareable<FAutomationUtilsGameplayViewExtension> @ 14e7ec2d0

TRawPtrProxy<FAutomationUtilsGameplayViewExtension> __cdecl
MakeShareable<FAutomationUtilsGameplayViewExtension>(FAutomationUtilsGameplayViewExtension *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRawPtrProxy<FAutomationUtilsGameplayViewExtension> TVar3;
  longlong in_RDX;
  
  if ((((in_RDX != 0) && (*(longlong *)(in_RDX + 8) != 0)) && (*(longlong *)(in_RDX + 0x10) != 0))
     && (0 < *(int *)(*(longlong *)(in_RDX + 0x10) + 8))) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!InObject || !InObject->DoesSharedInstanceExist()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x7a5,L"Trying to share an already-shared object");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Object = (FAutomationUtilsGameplayViewExtension *)(*pcVar1)();
      return (TRawPtrProxy<FAutomationUtilsGameplayViewExtension>)TVar3.Object;
    }
  }
  *(longlong *)param_1 = in_RDX;
  return (TRawPtrProxy<FAutomationUtilsGameplayViewExtension>)param_1;
}

// ~TFunction_OwnedObject<`FAutomationUtilsGameplayAutomationScreenshotInstance::FAutomationUtilsGameplayAutomationScreenshotInstance'::__l22::<lambda_1>,1,0> @ 14e7ee540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAutomationUtilsGameplayAutomationScreenshotInstance::FAutomationUtilsGameplayAutomationScreenshotInstance'::__l22::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FAutomationUtilsGameplayAutomationScreenshotInstance::FAutomationUtilsGameplayAutomationScreenshotInstance_::__l22::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAutomationUtilsGameplayAutomationScreenshotInstance::FAutomationUtilsGameplayAutomationScreenshotInstance'::`22'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// `scalar_deleting_destructor' @ 14e7eea90

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationUtilsGameplayAutomationScreenshotInstance,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAutomationUtilsGameplayAutomationScreenshotInstance,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7eeac0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationUtilsGameplayAutomationScreenshotInstance,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAutomationUtilsGameplayAutomationScreenshotInstance,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7eeaf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAutomationUtilsGameplayAutomationScreenshotInstance::FAutomationUtilsGameplayAutomationScreenshotInstance'::__l22::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAutomationUtilsGameplayAutomationScreenshotInstance::FAutomationUtilsGameplayAutomationScreenshotInstance'::`22'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7eeb30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationUtilsGameplayViewExtension,SharedPointerInternals::DefaultDeleter<FAutomationUtilsGameplayViewExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAutomationUtilsGameplayViewExtension,SharedPointerInternals::DefaultDeleter<FAutomationUtilsGameplayViewExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7eeb70

void * __thiscall
FAutomationUtilsGameplayViewExtension::_scalar_deleting_destructor_
          (FAutomationUtilsGameplayViewExtension *this,uint param_1)

{
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7eebb0

void * __thiscall
UAutomationUtilsBlueprintLibrary::_scalar_deleting_destructor_
          (UAutomationUtilsBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UAutomationUtilsBlueprintLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeAutomationUtilsBlueprintLibrary @ 14e7ef2a0

void __cdecl EmptyLinkFunctionForGeneratedCodeAutomationUtilsBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAutomationUtils_init @ 14e7ef2b0

void __cdecl EmptyLinkFunctionForGeneratedCodeAutomationUtils_init(void)

{
  return;
}

// Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_NoRegister @ 14e7f00b0

UClass * __cdecl Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationUtils",L"AutomationUtilsBlueprintLibrary",
               &Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.InnerSingleton,
               UAutomationUtilsBlueprintLibrary::
               StaticRegisterNativesUAutomationUtilsBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAutomationUtilsBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UAutomationUtilsBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_AutomationUtils @ 14e7f04a0

void __cdecl IMPLEMENT_MODULE_AutomationUtils(void)

{
  return;
}

// ManagedScreenshotInstances'' @ 15046c320

void __cdecl
`dynamic_atexit_destructor_for_'FAutomationUtilsGameplayAutomationScreenshotFactory::
ManagedScreenshotInstances__(void)

{
  FAutomationUtilsGameplayAutomationScreenshotFactory::ManagedScreenshotInstances._72_4_ = 0;
  if (FAutomationUtilsGameplayAutomationScreenshotFactory::ManagedScreenshotInstances._64_8_ != 0) {
    FMemory::Free((void *)FAutomationUtilsGameplayAutomationScreenshotFactory::
                          ManagedScreenshotInstances._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FAutomationUtilsGameplayAutomationScreenshotFactory::ManagedScreenshotInstances);
  return;
}

