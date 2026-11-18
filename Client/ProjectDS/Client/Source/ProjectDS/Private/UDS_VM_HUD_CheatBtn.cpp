// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// SetClickConfirmButton_WrapperImpl @ 14b668030

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_HUD_CheatBtn::SetClickConfirmButton_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  char cVar2;
  UDS_WindowManager *this;
  UObject *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar6;
  void *pvStackX_18;
  uint auStackX_20 [2];
  FWeakObjectPtr aFStack_98 [2];
  code *pcStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool bStack_78;
  undefined1 auStack_68 [8];
  FDelegateAllocation FStack_60;
  FDestructionSentinel FStack_50;
  FDelegateAllocation *pFStack_38;
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    UDS_WindowManager::GetWindowInfo(this,(EDS_WindowWidget)aFStack_98);
    bVar1 = FWeakObjectPtr::IsValid(aFStack_98);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(aFStack_98);
      cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
      if (cVar2 == '\x01') {
        pvStackX_18 = (void *)((ulonglong)pvStackX_18 & 0xffffffff00000000);
        auStackX_20[0] = 0;
        UDS_WindowManager::CloseWindow(this,CheatKey,auStackX_20,(float *)&pvStackX_18);
        return;
      }
    }
    uStack_80 = 0;
    pcStack_88 = OnOpenCheatPanel;
    auStack_68 = (undefined1  [8])0x0;
    FStack_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_68,
               (FWriteAccessScope *)&FStack_50);
    pFStack_38 = &FStack_60;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,&FStack_60);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_HUD_CheatBtn____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar4[3] = 0;
      pvStackX_18 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&pvStackX_18);
      puVar4[4] = pcStack_88;
      puVar4[5] = CONCAT44(uStack_7c,uStack_80);
    }
    if (FStack_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
    }
    pTVar6 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &pcStack_88,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        auStack_68);
    UDS_WindowManager::OpenWindow(this,CheatKey,pTVar6);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_68,
               (FWriteAccessScope *)&pcStack_88);
    if ((FStack_60.DelegateSize != 0) &&
       (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_60,0,0,0x10);
      FStack_60.DelegateSize = 0;
    }
    if (bStack_78 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                 (FDestructionSentinel *)&pcStack_88);
    }
    if (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_68);
  }
  return;
}

// StaticClass @ 14b668040

UClass * __cdecl UDS_VM_HUD_CheatBtn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_CheatBtn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_CheatBtn",
               &Z_Registration_Info_UClass_UDS_VM_HUD_CheatBtn.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_CheatBtn,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_CheatBtn>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_CheatBtn>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_CheatBtn.InnerSingleton;
}

// UDS_VM_HUD_CheatBtn @ 14b66d7c0

UDS_VM_HUD_CheatBtn * __thiscall
UDS_VM_HUD_CheatBtn::UDS_VM_HUD_CheatBtn(UDS_VM_HUD_CheatBtn *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_CheatBtn__6B_;
  *(undefined8 *)&(this->ClickConfirmButton).Delegate = 0;
  *(undefined8 *)&(this->ClickConfirmButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickConfirmButton).Delegate.field_0x10 = 0;
  (this->ClickConfirmButton)._padding_ = '\0';
  (this->ClickConfirmButton).bIsCustomSelected = false;
  (this->ClickConfirmButton).bIsLacked = false;
  (this->ClickConfirmButton).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_HUD_CheatBtn @ 14b66d820

UDS_VM_HUD_CheatBtn * __thiscall
UDS_VM_HUD_CheatBtn::UDS_VM_HUD_CheatBtn(UDS_VM_HUD_CheatBtn *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_CheatBtn__6B_;
  *(undefined8 *)&(this->ClickConfirmButton).Delegate = 0;
  *(undefined8 *)&(this->ClickConfirmButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickConfirmButton).Delegate.field_0x10 = 0;
  (this->ClickConfirmButton)._padding_ = '\0';
  (this->ClickConfirmButton).bIsCustomSelected = false;
  (this->ClickConfirmButton).bIsLacked = false;
  (this->ClickConfirmButton).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_HUD_CheatBtn @ 14b66f160

void __thiscall UDS_VM_HUD_CheatBtn::~UDS_VM_HUD_CheatBtn(UDS_VM_HUD_CheatBtn *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_CheatBtn__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickConfirmButton).Delegate);
  pvVar1 = *(void **)&(this->ClickConfirmButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickConfirmButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b671960

IClassDescriptor * __thiscall
UDS_VM_HUD_CheatBtn::GetFieldNotificationDescriptor(UDS_VM_HUD_CheatBtn *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_CheatBtn::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b672460

UClass * __cdecl UDS_VM_HUD_CheatBtn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_CheatBtn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_CheatBtn",
               &Z_Registration_Info_UClass_UDS_VM_HUD_CheatBtn.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_CheatBtn,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_CheatBtn>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_CheatBtn>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_CheatBtn.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_CheatBtn @ 14b672ba0

void __cdecl UDS_VM_HUD_CheatBtn::StaticRegisterNativesUDS_VM_HUD_CheatBtn(void)

{
  return;
}

// InitViewModel @ 14bf59d20

void __thiscall UDS_VM_HUD_CheatBtn::InitViewModel(UDS_VM_HUD_CheatBtn *this)

{
  return;
}

// OnClickConfirmButton @ 14bf61df0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_CheatBtn::OnClickConfirmButton(UDS_VM_HUD_CheatBtn *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  char cVar2;
  UDS_WindowManager *this_00;
  UObject *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar6;
  UDS_VM_HUD_CheatBtn *local_res18;
  uint local_res20 [2];
  FWeakObjectPtr local_98 [2];
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)local_98);
    bVar1 = FWeakObjectPtr::IsValid(local_98);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(local_98);
      cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
      if (cVar2 == '\x01') {
        local_res18 = (UDS_VM_HUD_CheatBtn *)((ulonglong)local_res18 & 0xffffffff00000000);
        local_res20[0] = 0;
        UDS_WindowManager::CloseWindow(this_00,CheatKey,local_res20,(float *)&local_res18);
        return;
      }
    }
    uStack_80 = 0;
    local_88 = OnOpenCheatPanel;
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_HUD_CheatBtn____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_HUD_CheatBtn *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_res18 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_HUD_CheatBtn *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res18);
      puVar4[4] = local_88;
      puVar4[5] = CONCAT44(uStack_7c,uStack_80);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    pTVar6 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_88,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_68);
    UDS_WindowManager::OpenWindow(this_00,CheatKey,pTVar6);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_88);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_78 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                 (FDestructionSentinel *)&local_88);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
  }
  return;
}

// OnOpenCheatPanel @ 14bf657d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDS_VM_HUD_CheatBtn::OnOpenCheatPanel(UDS_VM_HUD_CheatBtn *this,UDS_UserWidget *param_1)

{
  FDS_ViewModelContext *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res18;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  if (param_1 == (UDS_UserWidget *)0x0) {
    return;
  }
  pTVar4 = ::operator_new(0x30);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    _DAT_00000028 = 0x146;
    local_28.Object = (FDS_ViewModelContext *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pFVar1 = (FDS_ViewModelContext *)(pTVar4 + 1);
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFDS_ViewModelContext___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    if ((pFVar1 == (FDS_ViewModelContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if ((pFVar1 == (FDS_ViewModelContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x146;
    pTVar5 = pTVar4;
    if (pFVar1 == (FDS_ViewModelContext *)0x0) goto LAB_14bf65943;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_28.Object = pFVar1;
  }
  local_28.SharedReferenceCount.ReferenceController = pTVar5;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  DS_ViewModelTemplateUtil::BindViewModel
            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_28,false);
LAB_14bf65943:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

