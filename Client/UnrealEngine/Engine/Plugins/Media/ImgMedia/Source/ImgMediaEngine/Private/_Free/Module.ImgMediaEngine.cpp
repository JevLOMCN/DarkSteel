// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMediaEngine
// Functions: 15

// `dynamic_initializer_for_'ModuleRegistrantImgMediaEngine'' @ 141445930

void __cdecl _dynamic_initializer_for__ModuleRegistrantImgMediaEngine__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ImgMediaEngine";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ImgMediaEngine",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FImgMediaEngineModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEngine_Public_Unreal_ImgMediaPlaybackComponent_h__Script_ImgMediaEngine_1213363897'' @ 141445980

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEngine_Public_Unreal_ImgMediaPlaybackComponent_h__Script_ImgMediaEngine_1213363897__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ImgMediaEngine",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEngine_Public_Unreal_ImgMediaPlaybackComponent_h__Script_ImgMediaEngine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ImgMediaEngine'' @ 1414459c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ImgMediaEngine__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xccc2c92a;
  local_res8[0].DeclarationsHash = 0xdf4f98c7;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ImgMediaEngine,L"/Script/ImgMediaEngine",
             &Z_Registration_Info_UPackage__Script_ImgMediaEngine,local_res8);
  return;
}

// Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent @ 14ea276d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.OuterSingleton;
}

// Z_Construct_UPackage__Script_ImgMediaEngine @ 14ea27710

UPackage * __cdecl Z_Construct_UPackage__Script_ImgMediaEngine(void)

{
  if (Z_Registration_Info_UPackage__Script_ImgMediaEngine.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ImgMediaEngine.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ImgMediaEngine.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14ea27770

void * __thiscall
FImgMediaEngineModule::_scalar_deleting_destructor_(FImgMediaEngineModule *this,uint param_1)

{
  *this = (FImgMediaEngineModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// InternalConstructor<UDEPRECATED_ImgMediaPlaybackComponent> @ 14ea279e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UDEPRECATED_ImgMediaPlaybackComponent>(FObjectInitializer *param_1)

{
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UDEPRECATED_ImgMediaPlaybackComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UDEPRECATED_ImgMediaPlaybackComponent::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)
         &UDEPRECATED_ImgMediaPlaybackComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->bAutoActivate = '\x01';
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_ImgMediaPlaybackComponent> @ 14ea27a50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDEPRECATED_ImgMediaPlaybackComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDEPRECATED_ImgMediaPlaybackComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UDEPRECATED_ImgMediaPlaybackComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UDEPRECATED_ImgMediaPlaybackComponent::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)
         &UDEPRECATED_ImgMediaPlaybackComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ea27c7c

/* [thunk]:public: virtual void * __ptr64 __cdecl UDEPRECATED_ImgMediaPlaybackComponent::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDEPRECATED_ImgMediaPlaybackComponent::_vector_deleting_destructor__adjustor_40__
          (UDEPRECATED_ImgMediaPlaybackComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDEPRECATED_ImgMediaPlaybackComponent *)&this[-1].LODBias,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ea27c90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaTextureTrackerObject,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMediaTextureTrackerObject,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea27cd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UDEPRECATED_ImgMediaPlaybackComponent::_scalar_deleting_destructor_
          (UDEPRECATED_ImgMediaPlaybackComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ObjectInfo).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->MediaTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeImgMediaEngine_init @ 14ea27db0

void __cdecl EmptyLinkFunctionForGeneratedCodeImgMediaEngine_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeImgMediaPlaybackComponent @ 14ea27dc0

void __cdecl EmptyLinkFunctionForGeneratedCodeImgMediaPlaybackComponent(void)

{
  return;
}

// Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_NoRegister @ 14ea285c0

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ImgMediaEngine",L"ImgMediaPlaybackComponent",
               &Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.InnerSingleton,
               UDEPRECATED_ImgMediaPlaybackComponent::
               StaticRegisterNativesUDEPRECATED_ImgMediaPlaybackComponent,0xe8,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ImgMediaPlaybackComponent>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ImgMediaPlaybackComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.InnerSingleton;
}

// IMPLEMENT_MODULE_ImgMediaEngine @ 14ea28680

void __cdecl IMPLEMENT_MODULE_ImgMediaEngine(void)

{
  return;
}

