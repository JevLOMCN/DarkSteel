// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioLinkEngine
// Functions: 38

// `dynamic_initializer_for_'LogAudioLink'' @ 141098b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioLink__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAudioLink,L"LogAudioLink",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioLink__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAudioLinkEngine'' @ 141098bc0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioLinkEngine__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioLinkEngine";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioLinkEngine",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAudioLinkModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h__Script_AudioLinkEngine_2653121973'' @ 141098c10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h__Script_AudioLinkEngine_2653121973__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioLinkEngine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h__Script_AudioLinkEngine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AudioLinkEngine'' @ 141098c50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AudioLinkEngine__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x7d30fba4;
  local_res8[0].DeclarationsHash = 0x4eba85aa;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AudioLinkEngine,L"/Script/AudioLinkEngine",
             &Z_Registration_Info_UPackage__Script_AudioLinkEngine,local_res8);
  return;
}

// Z_Construct_UPackage__Script_AudioLinkEngine @ 1464cb650

UPackage * __cdecl Z_Construct_UPackage__Script_AudioLinkEngine(void)

{
  if (Z_Registration_Info_UPackage__Script_AudioLinkEngine.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AudioLinkEngine.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AudioLinkEngine.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1464cb6b0

void * __thiscall
FAudioLinkModule::_scalar_deleting_destructor_(FAudioLinkModule *this,uint param_1)

{
  *this = (FAudioLinkModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UAudioLinkBlueprintInterface @ 1464cb7b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioLinkBlueprintInterface(void)

{
  if (Z_Registration_Info_UClass_UAudioLinkBlueprintInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioLinkBlueprintInterface.OuterSingleton,
               &Z_Construct_UClass_UAudioLinkBlueprintInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioLinkBlueprintInterface.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 1464cb7f0

void __cdecl
Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying @ 1464cb800

UFunction * __cdecl Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioLinkBlueprintInterface_PlayLink @ 1464cb840

UFunction * __cdecl Z_Construct_UFunction_UAudioLinkBlueprintInterface_PlayLink(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioLinkBlueprintInterface_PlayLink_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioLinkBlueprintInterface_SetLinkSound @ 1464cb880

UFunction * __cdecl Z_Construct_UFunction_UAudioLinkBlueprintInterface_SetLinkSound(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioLinkBlueprintInterface_SetLinkSound_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioLinkBlueprintInterface_StopLink @ 1464cb8c0

UFunction * __cdecl Z_Construct_UFunction_UAudioLinkBlueprintInterface_StopLink(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioLinkBlueprintInterface_StopLink_Statics::FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<UAudioLinkBlueprintInterface> @ 1464cb900

void __cdecl InternalConstructor<UAudioLinkBlueprintInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UAudioLinkBlueprintInterface__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAudioLinkBlueprintInterface> @ 1464cb930

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioLinkBlueprintInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioLinkBlueprintInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioLinkBlueprintInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1464cc15c

/* [thunk]:public: virtual void * __ptr64 __cdecl FBufferedSourceListener::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FBufferedSourceListener::_vector_deleting_destructor__adjustor_8__
          (FBufferedSourceListener *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FBufferedSourceListener *)&this[-1].OnBufferStreamEndDelegate.field_0x10,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{24}' @ 1464cc16c

/* [thunk]:public: virtual void * __ptr64 __cdecl FBufferedSubmixListener::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FBufferedSubmixListener::_vector_deleting_destructor__adjustor_24__
          (FBufferedSubmixListener *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FBufferedSubmixListener *)&this[-1].DeviceId,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1464cc180

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`IAudioLinkFactory::CreatePushableBufferListener'::__l2::FPushableSourceBufferListener,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464cc1c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FBufferedSourceListener,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FBufferedSourceListener,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464cc200

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FBufferedSubmixListener,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FBufferedSubmixListener,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464cc240

void * __thiscall
FBufferedListenerBase::_scalar_deleting_destructor_(FBufferedListenerBase *this,uint param_1)

{
  ~FBufferedListenerBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464cc280

void * __thiscall
FBufferedSourceListener::_scalar_deleting_destructor_(FBufferedSourceListener *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__ISourceBufferListener__;
  this->_padding_ = (longlong)&_vftable__for__FBufferedListenerBase__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBufferStreamEndDelegate);
  FBufferedListenerBase::~FBufferedListenerBase((FBufferedListenerBase *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464cc2f0

void * __thiscall
FBufferedSubmixListener::_scalar_deleting_destructor_(FBufferedSubmixListener *this,uint param_1)

{
  ~FBufferedSubmixListener(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464cc330

void * __thiscall
`IAudioLinkFactory::CreatePushableBufferListener'::__l2::FPushableSourceBufferListener::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &FBufferedSourceListener::_vftable__for__ISourceBufferListener__;
  *(undefined ***)((longlong)this + 8) =
       &FBufferedSourceListener::_vftable__for__FBufferedListenerBase__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x98));
  FBufferedListenerBase::~FBufferedListenerBase((FBufferedListenerBase *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor'`adjustor{8}'_(unsigned_int)___ptr64 @ 1464cc39c

void [thunk]:`IAudioLinkFactory::CreatePushableBufferListener'::__l2::FPushableSourceBufferListener
     ::_scalar_deleting_destructor__adjustor_8____unsigned_int____ptr64
               (longlong param_1,uint param_2)

{
  `IAudioLinkFactory::CreatePushableBufferListener'::__l2::FPushableSourceBufferListener::
  _scalar_deleting_destructor_((void *)(param_1 + -8),param_2);
  return;
}

// `scalar_deleting_destructor' @ 1464cc3b0

void * __thiscall IAudioLink::_scalar_deleting_destructor_(IAudioLink *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464cc3e0

void * __thiscall
IAudioLinkFactory::_scalar_deleting_destructor_(IAudioLinkFactory *this,uint param_1)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  IAudioLinkFactory *pIVar3;
  
  *this = (IAudioLinkFactory)&___7IAudioLinkFactory__6B_;
  pIVar2 = IModularFeatures::Get();
  pIVar3 = this + 1;
  if (this == (IAudioLinkFactory *)0x0) {
    pIVar3 = (IAudioLinkFactory *)0x0;
  }
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"AudioLink Factory");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar2,`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'
                   ::__l2::FeatureName,pIVar3);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464cc4d0

void * __thiscall
IBufferedAudioOutput::_scalar_deleting_destructor_(IBufferedAudioOutput *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464cc500

void * __thiscall
ISourceBufferListener::_scalar_deleting_destructor_(ISourceBufferListener *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464cc530

void * __thiscall
ISubmixBufferListener::_scalar_deleting_destructor_(ISubmixBufferListener *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464cc590

void * __thiscall
UAudioLinkBlueprintInterface::_scalar_deleting_destructor_
          (UAudioLinkBlueprintInterface *this,uint param_1)

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

// EmptyLinkFunctionForGeneratedCodeAudioLinkEngine_init @ 1464ccd60

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioLinkEngine_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIAudioLinkBlueprintInterface @ 1464ccd70

void __cdecl EmptyLinkFunctionForGeneratedCodeIAudioLinkBlueprintInterface(void)

{
  return;
}

// IsEnabled @ 1464cd390

bool __cdecl AudioLinkFactory_Private::IsEnabled(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAutoConsoleVariableRef::FAutoConsoleVariableRef
                (&CVarAudioLinkEnabled,L"au.audiolink.enabled",&bAudioLinkEnabled,
                 L"Enable AudioLink",0);
      atexit(`AudioLinkFactory_Private::IsEnabled'::__l2::
             _dynamic_atexit_destructor_for__CVarAudioLinkEnabled__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return bAudioLinkEnabled;
}

// Z_Construct_UClass_UAudioLinkBlueprintInterface_NoRegister @ 1464ce7e0

UClass * __cdecl Z_Construct_UClass_UAudioLinkBlueprintInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioLinkBlueprintInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioLinkEngine",L"AudioLinkBlueprintInterface",
               &Z_Registration_Info_UClass_UAudioLinkBlueprintInterface.InnerSingleton,
               UAudioLinkBlueprintInterface::StaticRegisterNativesUAudioLinkBlueprintInterface,0x28,
               8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioLinkBlueprintInterface>,
               InternalVTableHelperCtorCaller<UAudioLinkBlueprintInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioLinkBlueprintInterface.InnerSingleton;
}

// IMPLEMENT_MODULE_AudioLinkEngine @ 1464cea30

void __cdecl IMPLEMENT_MODULE_AudioLinkEngine(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarAudioLinkEnabled'' @ 1503dc100

void __cdecl
`AudioLinkFactory_Private::IsEnabled'::__l2::_dynamic_atexit_destructor_for__CVarAudioLinkEnabled__
          (void)

{
  CVarAudioLinkEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAudioLinkEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioLink'' @ 1503dc120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioLink__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioLink);
  return;
}

// `dynamic_atexit_destructor_for_'UnsetName'' @ 1503dc140

void __cdecl
`ISubmixBufferListener::GetListenerName'::__l2::_dynamic_atexit_destructor_for__UnsetName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_class_FString_const&___ptr64___cdecl_ISubmixBufferListener::GetListenerName(void)const___ptr64'
               ::__l2::UnsetName.Data.AllocatorInstance.Data;
  if (`public:_virtual_class_FString_const&___ptr64___cdecl_ISubmixBufferListener::GetListenerName(void)const___ptr64'
      ::__l2::UnsetName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_class_FString_const&___ptr64___cdecl_ISubmixBufferListener::GetListenerName(void)const___ptr64'
      ::__l2::UnsetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

