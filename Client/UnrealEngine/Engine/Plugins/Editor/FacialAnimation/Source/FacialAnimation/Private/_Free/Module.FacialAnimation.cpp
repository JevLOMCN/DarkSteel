// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FacialAnimation
// Functions: 22

// `dynamic_initializer_for_'ModuleRegistrantFacialAnimation'' @ 141418be0

void __cdecl _dynamic_initializer_for__ModuleRegistrantFacialAnimation__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "FacialAnimation";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"FacialAnimation",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FFacialAnimationModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimation_Public_AudioCurveSourceComponent_h__Script_FacialAnimation_482331005'' @ 141418c30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimation_Public_AudioCurveSourceComponent_h__Script_FacialAnimation_482331005__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FacialAnimation",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimation_Public_AudioCurveSourceComponent_h__Script_FacialAnimation_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_FacialAnimation'' @ 141418c70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_FacialAnimation__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x1d120553;
  local_res8[0].DeclarationsHash = 0x4e52512c;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_FacialAnimation,L"/Script/FacialAnimation",
             &Z_Registration_Info_UPackage__Script_FacialAnimation,local_res8);
  return;
}

// Z_Construct_UPackage__Script_FacialAnimation @ 14e2cce80

UPackage * __cdecl Z_Construct_UPackage__Script_FacialAnimation(void)

{
  if (Z_Registration_Info_UPackage__Script_FacialAnimation.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_FacialAnimation.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_FacialAnimation.OuterSingleton;
}

// Z_Construct_UClass_UAudioCurveSourceComponent @ 14e2ccf80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioCurveSourceComponent(void)

{
  if (Z_Registration_Info_UClass_UAudioCurveSourceComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioCurveSourceComponent.OuterSingleton,
               &Z_Construct_UClass_UAudioCurveSourceComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioCurveSourceComponent.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14e2ccfe0

void * __thiscall
FFacialAnimationModule::_scalar_deleting_destructor_(FFacialAnimationModule *this,uint param_1)

{
  *this = (FFacialAnimationModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// InternalConstructor<UAudioCurveSourceComponent> @ 14e2cd300

void __cdecl InternalConstructor<UAudioCurveSourceComponent>(FObjectInitializer *param_1)

{
  UAudioComponent *this;
  FName FVar1;
  uint uVar2;
  void *pvVar3;
  FName FVar4;
  FObjectInitializer *pFVar5;
  ulonglong uVar6;
  
  this = (UAudioComponent *)param_1->Obj;
  if (this != (UAudioComponent *)0x0) {
    pFVar5 = FObjectInitializer::Get();
    UAudioComponent::UAudioComponent(this,pFVar5);
    *(undefined ***)this = &UAudioCurveSourceComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UAudioCurveSourceComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)&this->field_0x30 =
         &UAudioCurveSourceComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined ***)&this->field_0x250 =
         &UAudioCurveSourceComponent::_vftable__for__UAudioComponent__;
    *(undefined ***)&this->field_0x258 =
         &UAudioCurveSourceComponent::
          _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
    ;
    *(undefined ***)&this->field_0x260 =
         &UAudioCurveSourceComponent::_vftable__for__Audio__Quartz__IMetronomeEventListener__;
    *(undefined ***)&this->field_0x268 =
         &UAudioCurveSourceComponent::_vftable__for__Audio__Quartz__ICommandListener__;
    *(undefined ***)&this->field_0x270 =
         &UAudioCurveSourceComponent::_vftable__for__Audio__Quartz__IQueueCommandListener__;
    *(undefined ***)&this->field_0xd38 =
         &UAudioCurveSourceComponent::_vftable__for__ICurveSourceInterface__;
    TMulticastDelegateRegistration<void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
    ::AddUObject<UAudioCurveSourceComponent>
              ((TMulticastDelegateRegistration<void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
                *)&this->OnAudioPlaybackPercentNative,(UAudioCurveSourceComponent *)&stack0x00000008
               ,(pmf_73d7adce *)this);
    this->field_0x42 = this->field_0x42 | 2;
    pvVar3 = ThreadLocalStoragePointer;
    uVar6 = (ulonglong)_tls_index;
    this->field_0x40 = 0;
    if (*(int *)(*(longlong *)((longlong)pvVar3 + uVar6 * 8) + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FName::FName(&DefaultSourceBindingName,L"Default");
        _Init_thread_footer(&_TSS0);
      }
    }
    FVar1 = DefaultSourceBindingName;
    *(undefined4 *)&this[1].field_0xc = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x20 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0;
    *(undefined2 *)&this[1].field_0x30 = 0;
    FVar4 = DefaultSourceBindingName;
    DefaultSourceBindingName.ComparisonIndex = FVar1.ComparisonIndex.Value;
    DefaultSourceBindingName.Number = FVar1.Number;
    uVar2 = DefaultSourceBindingName.Number;
    *(uint *)&this[1].field_0x0 = DefaultSourceBindingName.ComparisonIndex.Value;
    DefaultSourceBindingName = FVar4;
    *(uint *)&this[1].field_0x4 = uVar2;
    *(undefined4 *)&this[1].field_0x24 = 0x3f800000;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAudioCurveSourceComponent> @ 14e2cd490

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioCurveSourceComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioCurveSourceComponent::GetPrivateStaticClass();
  this = (UAudioComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioComponent *)0x0) {
    UAudioComponent::UAudioComponent(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &UAudioCurveSourceComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UAudioCurveSourceComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UAudioCurveSourceComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UAudioCurveSourceComponent::_vftable__for__UAudioComponent__;
    *(undefined ***)&this->field_0x258 =
         &UAudioCurveSourceComponent::
          _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
    ;
    *(undefined ***)&this->field_0x260 =
         &UAudioCurveSourceComponent::_vftable__for__Audio__Quartz__IMetronomeEventListener__;
    *(undefined ***)&this->field_0x268 =
         &UAudioCurveSourceComponent::_vftable__for__Audio__Quartz__ICommandListener__;
    *(undefined ***)&this->field_0x270 =
         &UAudioCurveSourceComponent::_vftable__for__Audio__Quartz__IQueueCommandListener__;
    *(undefined ***)&this->field_0xd38 =
         &UAudioCurveSourceComponent::_vftable__for__ICurveSourceInterface__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14e2cd8a0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioCurveSourceComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UAudioCurveSourceComponent::_vector_deleting_destructor__adjustor_592__
          (UAudioCurveSourceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioCurveSourceComponent *)&this[-1].field_0xb30,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14e2cd8b4

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioCurveSourceComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UAudioCurveSourceComponent::_vector_deleting_destructor__adjustor_600__
          (UAudioCurveSourceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioCurveSourceComponent *)&this[-1].field_0xb28,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14e2cd8c8

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioCurveSourceComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UAudioCurveSourceComponent::_vector_deleting_destructor__adjustor_608__
          (UAudioCurveSourceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioCurveSourceComponent *)&this[-1].field_0xb20,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{616}' @ 14e2cd8dc

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioCurveSourceComponent::`vector deleting
   destructor'`adjustor{616}' (unsigned int) __ptr64 */

void * __thiscall
UAudioCurveSourceComponent::_vector_deleting_destructor__adjustor_616__
          (UAudioCurveSourceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioCurveSourceComponent *)&this[-1].field_0xb18,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{624}' @ 14e2cd8f0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioCurveSourceComponent::`vector deleting
   destructor'`adjustor{624}' (unsigned int) __ptr64 */

void * __thiscall
UAudioCurveSourceComponent::_vector_deleting_destructor__adjustor_624__
          (UAudioCurveSourceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioCurveSourceComponent *)&this[-1].field_0xb10,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14e2cd904

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioCurveSourceComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioCurveSourceComponent::_vector_deleting_destructor__adjustor_40__
          (UAudioCurveSourceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioCurveSourceComponent *)&this[-1].CachedSyncPreRoll,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{3384}' @ 14e2cd914

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioCurveSourceComponent::`vector deleting
   destructor'`adjustor{3384}' (unsigned int) __ptr64 */

void * __thiscall
UAudioCurveSourceComponent::_vector_deleting_destructor__adjustor_3384__
          (UAudioCurveSourceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioCurveSourceComponent *)&this[-1].field_0x48,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14e2cd930

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAudioCurveSourceComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAudioCurveSourceComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2cd960

void * __thiscall
ICurveSourceInterface::_scalar_deleting_destructor_(ICurveSourceInterface *this,uint param_1)

{
  *this = (ICurveSourceInterface)&___7ICurveSourceInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2cd9a0

void * __thiscall
UAudioCurveSourceComponent::_scalar_deleting_destructor_
          (UAudioCurveSourceComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__UAudioComponent__;
  *(undefined ***)&this->field_0x258 =
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  *(undefined ***)&this->field_0x260 = &_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  *(undefined ***)&this->field_0x268 = &_vftable__for__Audio__Quartz__ICommandListener__;
  *(undefined ***)&this->field_0x270 = &_vftable__for__Audio__Quartz__IQueueCommandListener__;
  *(undefined ***)&this->field_0xd38 = &___7ICurveSourceInterface__6B_;
  UAudioComponent::~UAudioComponent((UAudioComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd80);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAudioCurveSourceComponent @ 14e2cdda0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioCurveSourceComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFacialAnimation_init @ 14e2cddb0

void __cdecl EmptyLinkFunctionForGeneratedCodeFacialAnimation_init(void)

{
  return;
}

// Z_Construct_UClass_UAudioCurveSourceComponent_NoRegister @ 14e2cec70

UClass * __cdecl Z_Construct_UClass_UAudioCurveSourceComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioCurveSourceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FacialAnimation",L"AudioCurveSourceComponent",
               &Z_Registration_Info_UClass_UAudioCurveSourceComponent.InnerSingleton,
               UAudioCurveSourceComponent::StaticRegisterNativesUAudioCurveSourceComponent,0xd80,
               0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioCurveSourceComponent>,
               InternalVTableHelperCtorCaller<UAudioCurveSourceComponent>,local_res8,
               UAudioComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioCurveSourceComponent.InnerSingleton;
}

// IMPLEMENT_MODULE_FacialAnimation @ 14e2ced80

void __cdecl IMPLEMENT_MODULE_FacialAnimation(void)

{
  return;
}

