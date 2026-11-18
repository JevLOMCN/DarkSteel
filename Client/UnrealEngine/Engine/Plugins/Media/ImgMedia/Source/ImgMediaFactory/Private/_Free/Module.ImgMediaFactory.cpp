// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMediaFactory
// Functions: 19

// `dynamic_initializer_for_'LogImgMediaFactory'' @ 141446d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogImgMediaFactory__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogImgMediaFactory,L"LogImgMediaFactory",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogImgMediaFactory__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantImgMediaFactory'' @ 141446da0

void __cdecl _dynamic_initializer_for__ModuleRegistrantImgMediaFactory__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ImgMediaFactory";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ImgMediaFactory",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FImgMediaFactoryModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h__Script_ImgMediaFactory_4110624852'' @ 141446df0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h__Script_ImgMediaFactory_4110624852__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ImgMediaFactory",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h__Script_ImgMediaFactory_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ImgMediaFactory'' @ 141446e30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ImgMediaFactory__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x91028146;
  local_res8[0].DeclarationsHash = 0xd928fbc3;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ImgMediaFactory,L"/Script/ImgMediaFactory",
             &Z_Registration_Info_UPackage__Script_ImgMediaFactory,local_res8);
  return;
}

// Z_Construct_UPackage__Script_ImgMediaFactory @ 14ea60c20

UPackage * __cdecl Z_Construct_UPackage__Script_ImgMediaFactory(void)

{
  if (Z_Registration_Info_UPackage__Script_ImgMediaFactory.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ImgMediaFactory.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ImgMediaFactory.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14ea61890

void * __thiscall
FImgMediaFactoryModule::_scalar_deleting_destructor_(FImgMediaFactoryModule *this,uint param_1)

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

// Z_Construct_UClass_UImgMediaSettings @ 14ea61930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UImgMediaSettings(void)

{
  if (Z_Registration_Info_UClass_UImgMediaSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UImgMediaSettings.OuterSingleton,
               &Z_Construct_UClass_UImgMediaSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UImgMediaSettings.OuterSingleton;
}

// NewProp_BandwidthThrottlingEnabled_SetBit @ 14ea61970

void __cdecl
Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_BandwidthThrottlingEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_UseGlobalCache_SetBit @ 14ea61980

void __cdecl
Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_UseGlobalCache_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// NewProp_UseDefaultProxy_SetBit @ 14ea61990

void __cdecl
Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_UseDefaultProxy_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14ea6199c

/* [thunk]:public: virtual void * __ptr64 __cdecl FImgMediaFactoryModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FImgMediaFactoryModule::_vector_deleting_destructor__adjustor_8__
          (FImgMediaFactoryModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FImgMediaFactoryModule *)&this[-1].SupportedUriSchemes.ArrayNum,param_1);
  return pvVar1;
}

// InternalConstructor<UImgMediaSettings> @ 14ea619b0

void __cdecl InternalConstructor<UImgMediaSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    this[1].field_0x8 = 1;
    *(undefined ***)this = &___7UImgMediaSettings__6B_;
    *(undefined4 *)(this + 1) = 0x18;
    *(undefined4 *)&this[1].field_0x4 = 1;
    *(undefined4 *)&this[1].field_0xc = 0x41c80000;
    *(undefined4 *)&this[1].field_0x10 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x14 = 2;
    *(undefined4 *)&this[1].field_0x18 = 0x80;
    *(undefined4 *)&this[1].field_0x1c = 0x3f800000;
    this[1].field_0x20 = 1;
    *(undefined4 *)&this[1].field_0x24 = 0;
    FString::FString((FString *)(this + 2),L"proxy");
    this[2].field_0x10 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UImgMediaSettings> @ 14ea61a30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UImgMediaSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UImgMediaSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UImgMediaSettings__6B_;
    *(undefined4 *)(pUVar1 + 1) = 60000;
    *(undefined4 *)&pUVar1[1].field_0x4 = 1;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14ea61bf0

void * __thiscall
UImgMediaSettings::_scalar_deleting_destructor_(UImgMediaSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UImgMediaSettings__6B_;
  pFVar1 = (this->DefaultProxy).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeImgMediaFactory_init @ 14ea61c60

void __cdecl EmptyLinkFunctionForGeneratedCodeImgMediaFactory_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeImgMediaSettings @ 14ea61c70

void __cdecl EmptyLinkFunctionForGeneratedCodeImgMediaSettings(void)

{
  return;
}

// Z_Construct_UClass_UImgMediaSettings_NoRegister @ 14ea61e00

UClass * __cdecl Z_Construct_UClass_UImgMediaSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImgMediaSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ImgMediaFactory",L"ImgMediaSettings",
               &Z_Registration_Info_UClass_UImgMediaSettings.InnerSingleton,
               UImgMediaSettings::StaticRegisterNativesUImgMediaSettings,0x68,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UImgMediaSettings>,
               InternalVTableHelperCtorCaller<UImgMediaSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImgMediaSettings.InnerSingleton;
}

// IMPLEMENT_MODULE_ImgMediaFactory @ 14ea61eb0

void __cdecl IMPLEMENT_MODULE_ImgMediaFactory(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogImgMediaFactory'' @ 15046e060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogImgMediaFactory__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogImgMediaFactory);
  return;
}

