// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioLinkCore
// Functions: 10

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioLink_AudioLinkCore_Public_AudioLinkSettingsAbstract_h__Script_AudioLinkCore_2600988556'' @ 140f8f0e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioLink_AudioLinkCore_Public_AudioLinkSettingsAbstract_h__Script_AudioLinkCore_2600988556__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioLinkCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioLink_AudioLinkCore_Public_AudioLinkSettingsAbstract_h__Script_AudioLinkCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AudioLinkCore'' @ 140f8f120

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AudioLinkCore__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xf97b67a2;
  local_res8[0].DeclarationsHash = 0x4242fa02;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AudioLinkCore,L"/Script/AudioLinkCore",
             &Z_Registration_Info_UPackage__Script_AudioLinkCore,local_res8);
  return;
}

// Z_Construct_UPackage__Script_AudioLinkCore @ 14453ae30

UPackage * __cdecl Z_Construct_UPackage__Script_AudioLinkCore(void)

{
  if (Z_Registration_Info_UPackage__Script_AudioLinkCore.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AudioLinkCore.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AudioLinkCore.OuterSingleton;
}

// Z_Construct_UClass_UAudioLinkSettingsAbstract @ 14453af20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioLinkSettingsAbstract(void)

{
  if (Z_Registration_Info_UClass_UAudioLinkSettingsAbstract.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioLinkSettingsAbstract.OuterSingleton,
               &Z_Construct_UClass_UAudioLinkSettingsAbstract_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioLinkSettingsAbstract.OuterSingleton;
}

// InternalConstructor<UAudioLinkSettingsAbstract> @ 14453af60

void __cdecl InternalConstructor<UAudioLinkSettingsAbstract>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAudioLinkSettingsAbstract__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAudioLinkSettingsAbstract> @ 14453afa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioLinkSettingsAbstract>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioLinkSettingsAbstract::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioLinkSettingsAbstract__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14453b110

void * __thiscall
UAudioLinkSettingsAbstract::_scalar_deleting_destructor_
          (UAudioLinkSettingsAbstract *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAudioLinkSettingsAbstract__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ProxyInstance).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAudioLinkCore_init @ 14453b180

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioLinkCore_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioLinkSettingsAbstract @ 14453b190

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioLinkSettingsAbstract(void)

{
  return;
}

// Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister @ 14453b390

UClass * __cdecl Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioLinkSettingsAbstract.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioLinkCore",L"AudioLinkSettingsAbstract",
               &Z_Registration_Info_UClass_UAudioLinkSettingsAbstract.InnerSingleton,
               UAudioLinkSettingsAbstract::StaticRegisterNativesUAudioLinkSettingsAbstract,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioLinkSettingsAbstract>,
               InternalVTableHelperCtorCaller<UAudioLinkSettingsAbstract>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioLinkSettingsAbstract.InnerSingleton;
}

