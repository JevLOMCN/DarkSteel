// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// GetLoadingOpacity_WrapperImpl @ 14b694fd0

void __cdecl UDS_VM_Loading::GetLoadingOpacity_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  fVar1 = GetLoadingOpacity(param_1);
  *(float *)param_2 = fVar1;
  return;
}

// GetFadeOpacity_WrapperImpl @ 14b694ff0

void __cdecl UDS_VM_Loading::GetFadeOpacity_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  fVar1 = GetFadeOpacity(param_1);
  *(float *)param_2 = fVar1;
  return;
}

// StaticClass @ 14b695010

UClass * __cdecl UDS_VM_Loading::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Loading.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Loading",
               &Z_Registration_Info_UClass_UDS_VM_Loading.InnerSingleton,
               StaticRegisterNativesUDS_VM_Loading,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Loading>,InternalVTableHelperCtorCaller<UDS_VM_Loading>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Loading.InnerSingleton;
}

// UDS_VM_Loading @ 14b698b30

UDS_VM_Loading * __thiscall
UDS_VM_Loading::UDS_VM_Loading(UDS_VM_Loading *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Loading__6B_;
  this->LoadingOpacity = 0.0;
  this->FadeOpacity = 0.0;
  return this;
}

// UDS_VM_Loading @ 14b698b80

UDS_VM_Loading * __thiscall
UDS_VM_Loading::UDS_VM_Loading(UDS_VM_Loading *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Loading__6B_;
  this->LoadingOpacity = 0.0;
  this->FadeOpacity = 0.0;
  return this;
}

// ~UDS_VM_Loading @ 14b69aa00

void __thiscall UDS_VM_Loading::~UDS_VM_Loading(UDS_VM_Loading *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Loading__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69d1e0

IClassDescriptor * __thiscall UDS_VM_Loading::GetFieldNotificationDescriptor(UDS_VM_Loading *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Loading::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69dba0

UClass * __cdecl UDS_VM_Loading::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Loading.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Loading",
               &Z_Registration_Info_UClass_UDS_VM_Loading.InnerSingleton,
               StaticRegisterNativesUDS_VM_Loading,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Loading>,InternalVTableHelperCtorCaller<UDS_VM_Loading>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Loading.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Loading @ 14b69e680

void __cdecl UDS_VM_Loading::StaticRegisterNativesUDS_VM_Loading(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Loading_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetFadeOpacity @ 14b69f630

void __cdecl UDS_VM_Loading::execGetFadeOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetFadeOpacity((UDS_VM_Loading *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetFadeVisiblity @ 14b69f670

void __cdecl UDS_VM_Loading::execGetFadeVisiblity(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = GetFadeVisiblity((UDS_VM_Loading *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execGetLoadingOpacity @ 14b69f6b0

void __cdecl UDS_VM_Loading::execGetLoadingOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetLoadingOpacity((UDS_VM_Loading *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetLoadingVisiblity @ 14b69f6f0

void __cdecl UDS_VM_Loading::execGetLoadingVisiblity(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = GetLoadingVisiblity((UDS_VM_Loading *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// BindModel @ 14be11b90

void __thiscall UDS_VM_Loading::BindModel(UDS_VM_Loading *this)

{
  UDS_LoadingEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_LoadingEvent::GetEvent();
  if (pUVar1 != (UDS_LoadingEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->LoadingOpacityDelegate
               ,this);
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Loading>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               &pUVar1->LoadingOpacityDelegate,(UDS_VM_Loading *)&stack0x00000010,
               (pmf_eaeef5c6 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->FadeOpacityDelegate,
               this);
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Loading>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               &pUVar1->FadeOpacityDelegate,(UDS_VM_Loading *)&stack0x00000010,(pmf_eaeef5c6 *)this)
    ;
  }
  return;
}

// GetFadeOpacity @ 14be20eb0

float __thiscall UDS_VM_Loading::GetFadeOpacity(UDS_VM_Loading *this)

{
  return this->FadeOpacity;
}

// GetFadeVisiblity @ 14be20ec0

ESlateVisibility __thiscall UDS_VM_Loading::GetFadeVisiblity(UDS_VM_Loading *this)

{
  ESlateVisibility EVar1;
  
  EVar1 = Collapsed;
  if (0.0 < this->FadeOpacity) {
    EVar1 = SelfHitTestInvisible;
  }
  return EVar1;
}

// GetLoadingOpacity @ 14be21100

float __thiscall UDS_VM_Loading::GetLoadingOpacity(UDS_VM_Loading *this)

{
  return this->LoadingOpacity;
}

// GetLoadingVisiblity @ 14be21110

ESlateVisibility __thiscall UDS_VM_Loading::GetLoadingVisiblity(UDS_VM_Loading *this)

{
  ESlateVisibility EVar1;
  
  EVar1 = Collapsed;
  if (0.0 < this->LoadingOpacity) {
    EVar1 = SelfHitTestInvisible;
  }
  return EVar1;
}

// OnCloseInit @ 14be2d160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_Loading::OnCloseInit(UDS_VM_Loading *this)

{
  UDS_SoundManager *this_00;
  
  this_00 = UDS_SoundManager::GetInst();
  if (this_00 != (UDS_SoundManager *)0x0) {
    UDS_SoundManager::MuteSound(this_00,AMBIENT,false,__real_3f800000);
  }
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  return;
}

// OnFadeOpacity @ 14be305d0

void __thiscall UDS_VM_Loading::OnFadeOpacity(UDS_VM_Loading *this,float param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  local_18 = FFieldNotificationClassDescriptor::FadeOpacity.FieldName;
  plVar1 = &this->_padding_;
  if (param_1 != this->FadeOpacity) {
    local_10 = FFieldNotificationClassDescriptor::FadeOpacity.BitNumber;
    this->FadeOpacity = param_1;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
    local_10 = FFieldNotificationClassDescriptor::GetFadeVisiblity.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GetFadeVisiblity.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  }
  return;
}

// OnLoadingOpacity @ 14be310b0

void __thiscall UDS_VM_Loading::OnLoadingOpacity(UDS_VM_Loading *this,float param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  local_18 = FFieldNotificationClassDescriptor::LoadingOpacity.FieldName;
  plVar1 = &this->_padding_;
  if (param_1 != this->LoadingOpacity) {
    local_10 = FFieldNotificationClassDescriptor::LoadingOpacity.BitNumber;
    this->LoadingOpacity = param_1;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
    local_10 = FFieldNotificationClassDescriptor::GetLoadingVisiblity.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GetLoadingVisiblity.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  }
  return;
}

// OnSetViewModel @ 14be396b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_Loading::OnSetViewModel(UDS_VM_Loading *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_SoundManager *this_00;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1->Object != (FDS_ViewModelContext *)0x0) {
    this->LoadingOpacity = 0.0;
    this->FadeOpacity = 0.0;
    this_00 = UDS_SoundManager::GetInst();
    if (this_00 != (UDS_SoundManager *)0x0) {
      UDS_SoundManager::MuteSound(this_00,AMBIENT,true,__real_3f800000);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14be554d0

void __thiscall UDS_VM_Loading::UnbindModel(UDS_VM_Loading *this)

{
  UDS_LoadingEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_LoadingEvent::GetEvent();
  if (pUVar1 != (UDS_LoadingEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->LoadingOpacityDelegate
               ,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->FadeOpacityDelegate,
               this);
  }
  return;
}

