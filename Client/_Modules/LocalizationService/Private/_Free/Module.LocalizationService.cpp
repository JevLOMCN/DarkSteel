// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizationService
// Functions: 27

// `dynamic_initializer_for_'LocalizationServiceFeatureName'' @ 1410a81e0

void __cdecl _dynamic_initializer_for__LocalizationServiceFeatureName__(void)

{
  FName::FName(&LocalizationServiceFeatureName,"LocalizationService");
  return;
}

// `dynamic_initializer_for_'LogLocalizationService'' @ 1410a8200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLocalizationService__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLocalizationService,L"LogLocalizationService",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLocalizationService__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantLocalizationService'' @ 1410a8240

void __cdecl _dynamic_initializer_for__ModuleRegistrantLocalizationService__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "LocalizationService";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"LocalizationService",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FLocalizationServiceModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'SettingsSection'' @ 1410a8290

void __cdecl LocalizationServiceSettingsConstants::_dynamic_initializer_for__SettingsSection__(void)

{
  ::FString::FString(&SettingsSection,L"LocalizationService.LocalizationServiceSettings");
  atexit(_dynamic_atexit_destructor_for__SettingsSection__);
  return;
}

// DestructItems<FLocalizationServiceTranslationIdentifier,int> @ 146b2d4b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
DestructItems<FLocalizationServiceTranslationIdentifier,int>
          (FLocalizationServiceTranslationIdentifier *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Namespace;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((((TSharedPtr<FCulture,1> *)(pFVar2 + -1))->SharedReferenceCount).
                 ReferenceController);
      pFVar2 = pFVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<ILocalizationServiceState,1>,int> @ 146b2d510

void __cdecl
DestructItems<TSharedRef<ILocalizationServiceState,1>,int>
          (TSharedRef<ILocalizationServiceState,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// MakeTDecl<SLocalizationServiceProgress,RequiredArgs::T0RequiredArgs> @ 146b2d690

TSlateDecl<SLocalizationServiceProgress,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SLocalizationServiceProgress,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SLocalizationServiceProgress,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SLocalizationServiceProgress,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SLocalizationServiceProgress,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 146b2e380

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FLocalizationServiceModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b2e3b0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SLocalizationServiceProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SLocalizationServiceProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b2e410

void * __thiscall
TBaseSPMethodDelegateInstance<1,SLocalizationServiceProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SLocalizationServiceProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b2e470

void * __thiscall
TBaseSPMethodDelegateInstance<0,SLocalizationServiceProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SLocalizationServiceProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b2e4d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SLocalizationServiceProgress,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SLocalizationServiceProgress,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b2e510

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FConnectToProvider,SharedPointerInternals::DefaultDeleter<FConnectToProvider>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FConnectToProvider,SharedPointerInternals::DefaultDeleter<FConnectToProvider>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b2e550

void * __thiscall
FConnectToProvider::_scalar_deleting_destructor_(FConnectToProvider *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  pIVar3 = (this->OutErrorText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pFVar4 = (this->Password).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7ILocalizationServiceOperation__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b2e5d0

void * __thiscall
FDefaultLocalizationServiceProvider::_scalar_deleting_destructor_
          (FDefaultLocalizationServiceProvider *this,uint param_1)

{
  *this = (FDefaultLocalizationServiceProvider)&___7ILocalizationServiceProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b2e610

void * __thiscall
FLocalizationServiceModule::_scalar_deleting_destructor_
          (FLocalizationServiceModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->DefaultLocalizationServiceProvider =
       (FDefaultLocalizationServiceProvider)&___7ILocalizationServiceProvider__6B_;
  pFVar1 = (this->LocalizationServiceSettings).Provider.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b2e670

void * __thiscall
ILocalizationServiceModule::_scalar_deleting_destructor_
          (ILocalizationServiceModule *this,uint param_1)

{
  *this = (ILocalizationServiceModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b2e6b0

void * __thiscall
ILocalizationServiceOperation::_scalar_deleting_destructor_
          (ILocalizationServiceOperation *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7ILocalizationServiceOperation__6B_;
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

// `scalar_deleting_destructor' @ 146b2e720

void * __thiscall
ILocalizationServiceProvider::_scalar_deleting_destructor_
          (ILocalizationServiceProvider *this,uint param_1)

{
  *this = (ILocalizationServiceProvider)&___7ILocalizationServiceProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b2e760

void * __thiscall
SLocalizationServiceProgress::_scalar_deleting_destructor_
          (SLocalizationServiceProgress *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCancelled);
  SBorder::~SBorder((SBorder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x300);
  }
  return this;
}

// GetGlobalSettingsIni @ 146b31a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl LocalizationServiceHelpers::GetGlobalSettingsIni(void)

{
  FString *pFVar1;
  int iVar2;
  undefined1 auStackY_258 [32];
  FString local_228;
  FString local_218;
  FConfigContext local_208;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`LocalizationServiceHelpers::GetGlobalSettingsIni'::__l2::
           _dynamic_atexit_destructor_for__LocalizationServiceGlobalSettingsIni__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar2 = LocalizationServiceGlobalSettingsIni.Data.ArrayNum + -1;
  if (LocalizationServiceGlobalSettingsIni.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.Data.ArrayNum = 0;
    local_228.Data.ArrayMax = 0;
    FConfigContext::FConfigContext(&local_208,GConfig,true,&local_228,(FConfigFile *)0x0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    pFVar1 = FPaths::EngineSavedDir(&local_218);
    ::FString::ConcatFC(&local_228,pFVar1,L"Config/");
    if (local_208.GeneratedConfigDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_208.GeneratedConfigDir.Data.AllocatorInstance.Data);
    }
    local_208.GeneratedConfigDir.Data.AllocatorInstance.Data = local_228.Data.AllocatorInstance.Data
    ;
    local_208.GeneratedConfigDir.Data.ArrayNum = local_228.Data.ArrayNum;
    local_208.GeneratedConfigDir.Data.ArrayMax = local_228.Data.ArrayMax;
    local_228.Data.ArrayNum = 0;
    local_228.Data.ArrayMax = 0;
    local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    FConfigContext::Load
              (&local_208,L"LocalizationServiceSettings",&LocalizationServiceGlobalSettingsIni);
    FConfigContext::~FConfigContext(&local_208);
  }
  return &LocalizationServiceGlobalSettingsIni;
}

// GetSettingsIni @ 146b31f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl LocalizationServiceHelpers::GetSettingsIni(void)

{
  char cVar1;
  ILocalizationServiceModule *pIVar2;
  FString *pFVar3;
  int iVar4;
  undefined1 auStackY_248 [32];
  FString local_218;
  FConfigContext local_208;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pIVar2 = ILocalizationServiceModule::Get();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x60))(pIVar2);
  if (cVar1 != '\0') {
    pFVar3 = GetGlobalSettingsIni();
    return pFVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`LocalizationServiceHelpers::GetSettingsIni'::__l7::
             _dynamic_atexit_destructor_for__LocalizationServiceSettingsIni__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar4 = LocalizationServiceSettingsIni.Data.ArrayNum + -1;
  if (LocalizationServiceSettingsIni.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (iVar4 == 0) {
    local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Data.ArrayNum = 0;
    local_218.Data.ArrayMax = 0;
    FConfigContext::FConfigContext(&local_208,GConfig,true,&local_218,(FConfigFile *)0x0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    FConfigContext::Load(&local_208,L"LocalizationServiceSettings",&LocalizationServiceSettingsIni);
    FConfigContext::~FConfigContext(&local_208);
  }
  return &LocalizationServiceSettingsIni;
}

// IMPLEMENT_MODULE_LocalizationService @ 146b338f0

void __cdecl IMPLEMENT_MODULE_LocalizationService(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LocalizationServiceGlobalSettingsIni'' @ 1503dea10

void __cdecl
`LocalizationServiceHelpers::GetGlobalSettingsIni'::__l2::
_dynamic_atexit_destructor_for__LocalizationServiceGlobalSettingsIni__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = LocalizationServiceGlobalSettingsIni.Data.AllocatorInstance.Data;
  if (LocalizationServiceGlobalSettingsIni.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (LocalizationServiceGlobalSettingsIni.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LocalizationServiceSettingsIni'' @ 1503dea30

void __cdecl
`LocalizationServiceHelpers::GetSettingsIni'::__l7::
_dynamic_atexit_destructor_for__LocalizationServiceSettingsIni__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = LocalizationServiceSettingsIni.Data.AllocatorInstance.Data;
  if (LocalizationServiceSettingsIni.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (LocalizationServiceSettingsIni.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'LogLocalizationService'' @ 1503dea50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLocalizationService__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLocalizationService);
  return;
}

// `dynamic_atexit_destructor_for_'SettingsSection'' @ 1503dea70

void __cdecl
LocalizationServiceSettingsConstants::_dynamic_atexit_destructor_for__SettingsSection__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SettingsSection.Data.AllocatorInstance.Data;
  if (SettingsSection.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SettingsSection.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

