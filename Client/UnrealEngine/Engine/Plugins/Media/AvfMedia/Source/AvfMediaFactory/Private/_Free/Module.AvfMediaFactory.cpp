// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AvfMediaFactory
// Functions: 18

// `dynamic_initializer_for_'LogAvfMediaFactory'' @ 141445820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAvfMediaFactory__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAvfMediaFactory,L"LogAvfMediaFactory",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAvfMediaFactory__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAvfMediaFactory'' @ 141445860

void __cdecl _dynamic_initializer_for__ModuleRegistrantAvfMediaFactory__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AvfMediaFactory";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AvfMediaFactory",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAvfMediaFactoryModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h__Script_AvfMediaFactory_2905740341'' @ 1414458b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h__Script_AvfMediaFactory_2905740341__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AvfMediaFactory",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h__Script_AvfMediaFactory_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AvfMediaFactory'' @ 1414458f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AvfMediaFactory__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x7b4d12e;
  local_res8[0].DeclarationsHash = 0x3dccddee;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AvfMediaFactory,L"/Script/AvfMediaFactory",
             &Z_Registration_Info_UPackage__Script_AvfMediaFactory,local_res8);
  return;
}

// Z_Construct_UPackage__Script_AvfMediaFactory @ 14ea25120

UPackage * __cdecl Z_Construct_UPackage__Script_AvfMediaFactory(void)

{
  if (Z_Registration_Info_UPackage__Script_AvfMediaFactory.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AvfMediaFactory.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AvfMediaFactory.OuterSingleton;
}

// Z_Construct_UClass_UAvfMediaSettings @ 14ea25210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAvfMediaSettings(void)

{
  if (Z_Registration_Info_UClass_UAvfMediaSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAvfMediaSettings.OuterSingleton,
               &Z_Construct_UClass_UAvfMediaSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAvfMediaSettings.OuterSingleton;
}

// NewProp_NativeAudioOut_SetBit @ 14ea25250

void __cdecl
Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14ea25290

void * __thiscall
IMediaPlayerFactory::_scalar_deleting_destructor_(IMediaPlayerFactory *this,uint param_1)

{
  *this = (IMediaPlayerFactory)&___7IMediaPlayerFactory__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea27230

void * __thiscall
FAvfMediaFactoryModule::_scalar_deleting_destructor_(FAvfMediaFactoryModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->SupportedUriSchemes).AllocatorInstance.Data,
             (this->SupportedUriSchemes).ArrayNum);
  pFVar1 = (this->SupportedUriSchemes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->SupportedPlatforms).AllocatorInstance.Data,
             (this->SupportedPlatforms).ArrayNum);
  pFVar1 = (this->SupportedPlatforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->SupportedFileExtensions).AllocatorInstance.Data,
             (this->SupportedFileExtensions).ArrayNum);
  pFVar1 = (this->SupportedFileExtensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  this->_padding_ = (longlong)&___7IMediaPlayerFactory__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14ea272cc

/* [thunk]:public: virtual void * __ptr64 __cdecl FAvfMediaFactoryModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FAvfMediaFactoryModule::_vector_deleting_destructor__adjustor_8__
          (FAvfMediaFactoryModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAvfMediaFactoryModule *)&this[-1].SupportedUriSchemes.ArrayNum,param_1);
  return pvVar1;
}

// InternalConstructor<UAvfMediaSettings> @ 14ea272e0

void __cdecl InternalConstructor<UAvfMediaSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UAvfMediaSettings__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAvfMediaSettings> @ 14ea27310

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAvfMediaSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAvfMediaSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAvfMediaSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14ea27460

void * __thiscall
UAvfMediaSettings::_scalar_deleting_destructor_(UAvfMediaSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAvfMediaSettings__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAvfMediaFactory_init @ 14ea274c0

void __cdecl EmptyLinkFunctionForGeneratedCodeAvfMediaFactory_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAvfMediaSettings @ 14ea274d0

void __cdecl EmptyLinkFunctionForGeneratedCodeAvfMediaSettings(void)

{
  return;
}

// Z_Construct_UClass_UAvfMediaSettings_NoRegister @ 14ea27610

UClass * __cdecl Z_Construct_UClass_UAvfMediaSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAvfMediaSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AvfMediaFactory",L"AvfMediaSettings",
               &Z_Registration_Info_UClass_UAvfMediaSettings.InnerSingleton,
               UAvfMediaSettings::StaticRegisterNativesUAvfMediaSettings,0x30,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAvfMediaSettings>,
               InternalVTableHelperCtorCaller<UAvfMediaSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAvfMediaSettings.InnerSingleton;
}

// IMPLEMENT_MODULE_AvfMediaFactory @ 14ea276c0

void __cdecl IMPLEMENT_MODULE_AvfMediaFactory(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogAvfMediaFactory'' @ 15046da20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAvfMediaFactory__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAvfMediaFactory);
  return;
}

