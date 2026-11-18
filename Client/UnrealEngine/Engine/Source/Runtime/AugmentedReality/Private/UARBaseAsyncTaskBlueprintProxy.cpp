// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 13

// StaticClass @ 14cf30740

UClass * __cdecl UARBaseAsyncTaskBlueprintProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARBaseAsyncTaskBlueprintProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARBaseAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UARBaseAsyncTaskBlueprintProxy.InnerSingleton,
               StaticRegisterNativesUARBaseAsyncTaskBlueprintProxy,0x50,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UARBaseAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UARBaseAsyncTaskBlueprintProxy>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARBaseAsyncTaskBlueprintProxy.InnerSingleton;
}

// UARBaseAsyncTaskBlueprintProxy @ 14cf40b00

UARBaseAsyncTaskBlueprintProxy * __thiscall
UARBaseAsyncTaskBlueprintProxy::UARBaseAsyncTaskBlueprintProxy
          (UARBaseAsyncTaskBlueprintProxy *this,FVTableHelper *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->AsyncTask).Object = (FARAsyncTask *)0x0;
  (this->AsyncTask).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UARBaseAsyncTaskBlueprintProxy @ 14cf40b50

UARBaseAsyncTaskBlueprintProxy * __thiscall
UARBaseAsyncTaskBlueprintProxy::UARBaseAsyncTaskBlueprintProxy
          (UARBaseAsyncTaskBlueprintProxy *this,FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->AsyncTask).Object = (FARAsyncTask *)0x0;
  (this->AsyncTask).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bShouldTick = true;
  return this;
}

// ~UARBaseAsyncTaskBlueprintProxy @ 14cf43f60

void __thiscall
UARBaseAsyncTaskBlueprintProxy::~UARBaseAsyncTaskBlueprintProxy
          (UARBaseAsyncTaskBlueprintProxy *this)

{
  this->_padding_ = (longlong)&_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncTask).SharedReferenceCount.ReferenceController);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  return;
}

// GetARSystem @ 14cf4fae0

TWeakPtr<FARSupportInterface,1> * __cdecl UARBaseAsyncTaskBlueprintProxy::GetARSystem(void)

{
  return &RegisteredARSystem;
}

// GetPrivateStaticClass @ 14cf53ce0

UClass * __cdecl UARBaseAsyncTaskBlueprintProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARBaseAsyncTaskBlueprintProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARBaseAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UARBaseAsyncTaskBlueprintProxy.InnerSingleton,
               StaticRegisterNativesUARBaseAsyncTaskBlueprintProxy,0x50,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UARBaseAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UARBaseAsyncTaskBlueprintProxy>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARBaseAsyncTaskBlueprintProxy.InnerSingleton;
}

// GetStatId @ 14cf56100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UARBaseAsyncTaskBlueprintProxy::GetStatId(UARBaseAsyncTaskBlueprintProxy *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TStatId___cdecl_UARBaseAsyncTaskBlueprintProxy::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TStatId___cdecl_UARBaseAsyncTaskBlueprintProxy::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TStatId___cdecl_UARBaseAsyncTaskBlueprintProxy::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_UARBaseAsyncTaskBlueprintProxy = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"UARBaseAsyncTaskBlueprintProxy");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_struct_TStatId___cdecl_UARBaseAsyncTaskBlueprintProxy::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_UARBaseAsyncTaskBlueprintProxy,*pFVar1,
               L"UARBaseAsyncTaskBlueprintProxy","STATGROUP_Tickables","STATCAT_Advanced",
               L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_struct_TStatId___cdecl_UARBaseAsyncTaskBlueprintProxy::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_UARBaseAsyncTaskBlueprintProxy;
  if (_StatPtr_UARBaseAsyncTaskBlueprintProxy == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UARBaseAsyncTaskBlueprintProxy");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_virtual_struct_TStatId___cdecl_UARBaseAsyncTaskBlueprintProxy::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_UARBaseAsyncTaskBlueprintProxy,*pFVar1,
                       L"UARBaseAsyncTaskBlueprintProxy","STATGROUP_Tickables","STATCAT_Advanced",
                       L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// IsTickable @ 14cf57ac0

bool __thiscall UARBaseAsyncTaskBlueprintProxy::IsTickable(UARBaseAsyncTaskBlueprintProxy *this)

{
  if (((this[-1]._padding_ & 0x10) == 0) && ((char)this->_padding_ != '\0')) {
    return true;
  }
  return false;
}

// RegisterAsARSystem @ 14cf5b8e0

void __cdecl
UARBaseAsyncTaskBlueprintProxy::RegisterAsARSystem(TSharedRef<FARSupportInterface,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> FVar4;
  FWeakReferencer<1> FVar5;
  
  RegisteredARSystem.Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  if (pTVar3 != RegisteredARSystem.WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    FVar4.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
    FVar5.ReferenceController = pTVar3;
    if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
      }
    }
  }
  RegisteredARSystem.WeakReferenceCount.ReferenceController = FVar5.ReferenceController;
  return;
}

// ReportFailure @ 14cf5c690

void __thiscall UARBaseAsyncTaskBlueprintProxy::ReportFailure(UARBaseAsyncTaskBlueprintProxy *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Public\\ARBlueprintProxy.h"
                     ,0x22,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ReportSuccess @ 14cf5c850

void __thiscall UARBaseAsyncTaskBlueprintProxy::ReportSuccess(UARBaseAsyncTaskBlueprintProxy *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Public\\ARBlueprintProxy.h"
                     ,0x21,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// StaticRegisterNativesUARBaseAsyncTaskBlueprintProxy @ 14cf60dd0

void __cdecl
UARBaseAsyncTaskBlueprintProxy::StaticRegisterNativesUARBaseAsyncTaskBlueprintProxy(void)

{
  return;
}

// Tick @ 14cf61fd0

void __thiscall
UARBaseAsyncTaskBlueprintProxy::Tick(UARBaseAsyncTaskBlueprintProxy *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  if (this->_padding_ == 0) {
    lVar3 = this[-1]._padding_;
    *(undefined1 *)&this->_padding_ = 0;
  }
  else {
    if (*(int *)(this->_padding_ + 8) == 0) {
      return;
    }
    *(undefined1 *)&this->_padding_ = 0;
    if ((this->_padding_ == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar3 = this[-1]._padding_;
    if (*(int *)(this->_padding_ + 0xc) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf6205e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x2d0))(&this[-1]._padding_);
      return;
    }
  }
  (**(code **)(lVar3 + 0x2d8))(&this[-1]._padding_);
  return;
}

