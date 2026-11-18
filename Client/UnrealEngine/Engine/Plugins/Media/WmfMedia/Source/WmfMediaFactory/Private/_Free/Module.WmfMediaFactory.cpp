// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMediaFactory
// Functions: 20

// `dynamic_initializer_for_'LogWmfMediaFactory'' @ 1414487e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogWmfMediaFactory__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogWmfMediaFactory,L"LogWmfMediaFactory",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogWmfMediaFactory__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWmfMediaFactory'' @ 141448820

void __cdecl _dynamic_initializer_for__ModuleRegistrantWmfMediaFactory__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WmfMediaFactory";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WmfMediaFactory",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FWmfMediaFactoryModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h__Script_WmfMediaFactory_1132164359'' @ 141448870

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h__Script_WmfMediaFactory_1132164359__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WmfMediaFactory",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h__Script_WmfMediaFactory_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_WmfMediaFactory'' @ 1414488b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_WmfMediaFactory__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x758370ab;
  local_res8[0].DeclarationsHash = 0xa5551d82;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_WmfMediaFactory,L"/Script/WmfMediaFactory",
             &Z_Registration_Info_UPackage__Script_WmfMediaFactory,local_res8);
  return;
}

// Z_Construct_UPackage__Script_WmfMediaFactory @ 14eac3150

UPackage * __cdecl Z_Construct_UPackage__Script_WmfMediaFactory(void)

{
  if (Z_Registration_Info_UPackage__Script_WmfMediaFactory.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_WmfMediaFactory.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_WmfMediaFactory.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14eac55b0

void * __thiscall
FWmfMediaFactoryModule::_scalar_deleting_destructor_(FWmfMediaFactoryModule *this,uint param_1)

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

// Z_Construct_UClass_UWmfMediaSettings @ 14eac5700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWmfMediaSettings(void)

{
  if (Z_Registration_Info_UClass_UWmfMediaSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWmfMediaSettings.OuterSingleton,
               &Z_Construct_UClass_UWmfMediaSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWmfMediaSettings.OuterSingleton;
}

// NewProp_AllowNonStandardCodecs_SetBit @ 14eac5740

void __cdecl
Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_AllowNonStandardCodecs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_LowLatency_SetBit @ 14eac5750

void __cdecl Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_LowLatency_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_NativeAudioOut_SetBit @ 14eac5760

void __cdecl
Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_NativeAudioOut_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return;
}

// NewProp_HardwareAcceleratedVideoDecoding_SetBit @ 14eac5770

void __cdecl
Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_HardwareAcceleratedVideoDecoding_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2b) = 1;
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14eac577c

/* [thunk]:public: virtual void * __ptr64 __cdecl FWmfMediaFactoryModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FWmfMediaFactoryModule::_vector_deleting_destructor__adjustor_8__
          (FWmfMediaFactoryModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FWmfMediaFactoryModule *)&this[-1].SupportedUriSchemes.ArrayNum,param_1);
  return pvVar1;
}

// InternalConstructor<UWmfMediaSettings> @ 14eac5790

void __cdecl InternalConstructor<UWmfMediaSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined4 *)(this + 1) = 0;
    *(undefined ***)this = &___7UWmfMediaSettings__6B_;
    this[1].field_0x4 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UWmfMediaSettings> @ 14eac57d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWmfMediaSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWmfMediaSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWmfMediaSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14eac5910

void * __thiscall
UWmfMediaSettings::_scalar_deleting_destructor_(UWmfMediaSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UWmfMediaSettings__6B_;
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

// EmptyLinkFunctionForGeneratedCodeWmfMediaFactory_init @ 14eac5970

void __cdecl EmptyLinkFunctionForGeneratedCodeWmfMediaFactory_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWmfMediaSettings @ 14eac5980

void __cdecl EmptyLinkFunctionForGeneratedCodeWmfMediaSettings(void)

{
  return;
}

// Z_Construct_UClass_UWmfMediaSettings_NoRegister @ 14eac5ad0

UClass * __cdecl Z_Construct_UClass_UWmfMediaSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWmfMediaSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WmfMediaFactory",L"WmfMediaSettings",
               &Z_Registration_Info_UClass_UWmfMediaSettings.InnerSingleton,
               UWmfMediaSettings::StaticRegisterNativesUWmfMediaSettings,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UWmfMediaSettings>,
               InternalVTableHelperCtorCaller<UWmfMediaSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWmfMediaSettings.InnerSingleton;
}

// IMPLEMENT_MODULE_WmfMediaFactory @ 14eac5b80

void __cdecl IMPLEMENT_MODULE_WmfMediaFactory(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogWmfMediaFactory'' @ 15046ede0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogWmfMediaFactory__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWmfMediaFactory);
  return;
}

