// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetClickCategory_WrapperImpl @ 14b688450

void __cdecl UDS_VM_ItemCraft_Category::SetClickCategory_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ItemCraftEvent *pUVar1;
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_CraftCategoryType_const_&>::Broadcast
              (&pUVar1->OnSelectCraftCategoryEvent,
               (EDS_CraftCategoryType *)((longlong)param_1 + 0x105));
    return;
  }
  return;
}

// SetHoveredCategory_WrapperImpl @ 14b688460

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_ItemCraft_Category::SetHoveredCategory_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  undefined8 *puVar1;
  ulong64 uVar2;
  void *apvStackX_18 [2];
  uint uStack_5c;
  undefined1 auStack_58 [8];
  FDelegateAllocation FStack_50;
  FDestructionSentinel FStack_40;
  FDelegateAllocation *pFStack_28;
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    auStack_58 = (undefined1  [8])0x0;
    FStack_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
               (FWriteAccessScope *)&FStack_40);
    pFStack_28 = &FStack_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&FStack_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_ItemCraft_Category____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar1[3] = 0;
      apvStackX_18[0] = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)apvStackX_18);
      puVar1[4] = OnOpenTabNameTooltip;
      puVar1[5] = (ulonglong)uStack_5c << 0x20;
    }
    if (FStack_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_40.Accessor,&FStack_40);
    }
    UDS_WindowManager::OpenWindow
              (this,CommonTextTooltip,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)auStack_58);
  }
  return;
}

// SetUnHoveredCategory_WrapperImpl @ 14b688470

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_ItemCraft_Category::SetUnHoveredCategory_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this,CommonTextTooltip,auStackX_20,afStackX_18);
  }
  return;
}

// StaticClass @ 14b688480

UClass * __cdecl UDS_VM_ItemCraft_Category::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Category.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Category",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Category.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Category,0x108,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_ItemCraft_Category>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Category>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Category.InnerSingleton;
}

// UDS_VM_ItemCraft_Category @ 14b68c820

UDS_VM_ItemCraft_Category * __thiscall
UDS_VM_ItemCraft_Category::UDS_VM_ItemCraft_Category
          (UDS_VM_ItemCraft_Category *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Category__6B_;
  *(undefined8 *)&(this->ClickCategory).Delegate = 0;
  *(undefined8 *)&(this->ClickCategory).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCategory).Delegate.field_0x10 = 0;
  (this->HoveredCategory)._padding_ = '\0';
  (this->HoveredCategory).bIsCustomSelected = false;
  (this->HoveredCategory).bIsLacked = false;
  (this->HoveredCategory).bIsCustomDisabled = false;
  *(undefined8 *)&(this->HoveredCategory).Delegate = 0;
  *(undefined8 *)&(this->HoveredCategory).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->HoveredCategory).Delegate.field_0x10 = 0;
  (this->UnHoveredCategory)._padding_ = '\0';
  (this->UnHoveredCategory).bIsCustomSelected = false;
  (this->UnHoveredCategory).bIsLacked = false;
  (this->UnHoveredCategory).bIsCustomDisabled = false;
  *(undefined8 *)&(this->UnHoveredCategory).Delegate = 0;
  *(undefined8 *)&(this->UnHoveredCategory).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->UnHoveredCategory).Delegate.field_0x10 = 0;
  (this->ClickCategory)._padding_ = '\0';
  (this->ClickCategory).bIsCustomSelected = false;
  (this->ClickCategory).bIsLacked = false;
  (this->ClickCategory).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_ItemCraft_Category @ 14b68c8c0

UDS_VM_ItemCraft_Category * __thiscall
UDS_VM_ItemCraft_Category::UDS_VM_ItemCraft_Category
          (UDS_VM_ItemCraft_Category *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Category__6B_;
  *(undefined8 *)&(this->ClickCategory).Delegate = 0;
  *(undefined8 *)&(this->ClickCategory).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCategory).Delegate.field_0x10 = 0;
  (this->HoveredCategory)._padding_ = '\0';
  (this->HoveredCategory).bIsCustomSelected = false;
  (this->HoveredCategory).bIsLacked = false;
  (this->HoveredCategory).bIsCustomDisabled = false;
  *(undefined8 *)&(this->HoveredCategory).Delegate = 0;
  *(undefined8 *)&(this->HoveredCategory).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->HoveredCategory).Delegate.field_0x10 = 0;
  (this->UnHoveredCategory)._padding_ = '\0';
  (this->UnHoveredCategory).bIsCustomSelected = false;
  (this->UnHoveredCategory).bIsLacked = false;
  (this->UnHoveredCategory).bIsCustomDisabled = false;
  *(undefined8 *)&(this->UnHoveredCategory).Delegate = 0;
  *(undefined8 *)&(this->UnHoveredCategory).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->UnHoveredCategory).Delegate.field_0x10 = 0;
  (this->ClickCategory)._padding_ = '\0';
  (this->ClickCategory).bIsCustomSelected = false;
  (this->ClickCategory).bIsLacked = false;
  (this->ClickCategory).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_ItemCraft_Category @ 14b68dcb0

void __thiscall
UDS_VM_ItemCraft_Category::~UDS_VM_ItemCraft_Category(UDS_VM_ItemCraft_Category *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Category__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->UnHoveredCategory).Delegate);
  pvVar1 = *(void **)&(this->UnHoveredCategory).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->UnHoveredCategory).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->HoveredCategory).Delegate);
  pvVar1 = *(void **)&(this->HoveredCategory).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->HoveredCategory).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCategory).Delegate);
  pvVar1 = *(void **)&(this->ClickCategory).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCategory).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b68fbe0

IClassDescriptor * __thiscall
UDS_VM_ItemCraft_Category::GetFieldNotificationDescriptor(UDS_VM_ItemCraft_Category *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemCraft_Category::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6903a0

UClass * __cdecl UDS_VM_ItemCraft_Category::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Category.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Category",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Category.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Category,0x108,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_ItemCraft_Category>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Category>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Category.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemCraft_Category @ 14b690fe0

void __cdecl UDS_VM_ItemCraft_Category::StaticRegisterNativesUDS_VM_ItemCraft_Category(void)

{
  return;
}

// BindModel @ 14be76ee0

void __thiscall UDS_VM_ItemCraft_Category::BindModel(UDS_VM_ItemCraft_Category *this)

{
  UDS_ItemCraftEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectCraftCategoryEvent,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_CraftCategoryType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_ItemCraft_Category>
              (&pUVar1->OnSelectCraftCategoryEvent,(UDS_VM_ItemCraft_Category *)&stack0x00000010,
               (pmf_d61e1846 *)this);
  }
  return;
}

// InitViewModel @ 14be8d1d0

void __thiscall UDS_VM_ItemCraft_Category::InitViewModel(UDS_VM_ItemCraft_Category *this)

{
  return;
}

// OnClickCategory @ 14be94300

void __thiscall
UDS_VM_ItemCraft_Category::OnClickCategory
          (UDS_VM_ItemCraft_Category *this,FDS_ButtonEventField *param_1)

{
  UDS_ItemCraftEvent *pUVar1;
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_CraftCategoryType_const_&>::Broadcast
              (&pUVar1->OnSelectCraftCategoryEvent,&this->CraftCategoryType);
    return;
  }
  return;
}

// OnHoveredCategory @ 14be996a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft_Category::OnHoveredCategory
          (UDS_VM_ItemCraft_Category *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  UDS_VM_ItemCraft_Category *local_res18 [2];
  uint uStack_5c;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_ItemCraft_Category____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_ItemCraft_Category *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res18[0] = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_ItemCraft_Category *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)local_res18);
      puVar1[4] = OnOpenTabNameTooltip;
      puVar1[5] = (ulonglong)uStack_5c << 0x20;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    UDS_WindowManager::OpenWindow
              (this_00,CommonTextTooltip,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_58);
  }
  return;
}

// OnOpenTabNameTooltip @ 14be9a750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft_Category::OnOpenTabNameTooltip
          (UDS_VM_ItemCraft_Category *this,UDS_UserWidget *param_1)

{
  EDS_CraftCategoryType EVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UEnum *this_00;
  undefined8 *puVar6;
  TVector2<double> *pTVar7;
  longlong *plVar8;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_178;
  FWeakObjectPtr local_170;
  FString local_168;
  FName local_158;
  UDS_UserWidget *local_150;
  UDS_UserWidget *local_148;
  FString local_140;
  FString local_130;
  TSharedPtr<FDS_ViewModelContext,1> local_120;
  FName local_110;
  FName local_108;
  FString local_100;
  undefined1 local_f0 [8];
  TReferenceControllerBase<1> *local_e8;
  TVector2<double>_u_0 local_d8;
  TVector2<double> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8515854553696960398>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\ItemCraft\\DS_VM_ItemCraft_Category.cpp"
                       ,0x72,"false");
    if (!bVar3) {
      return;
    }
  }
  else {
    pUVar4 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_ModelBase_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar5);
    local_b8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar8 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar4 != (UObject *)0x0) goto LAB_14be9a818;
    }
    else if (pUVar4 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar4);
LAB_14be9a818:
      EVar1 = this->CraftCategoryType;
      this_00 = StaticEnum<enum_EDS_CraftCategoryType>();
      if (this_00 == (UEnum *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8627520946023956279>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_Util.h",
                           0xc9,"false");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.Data.ArrayNum = 0;
        local_168.Data.ArrayMax = 0;
      }
      else {
        UEnum::GetNameStringByValue(this_00,&local_100,(ulonglong)EVar1);
        local_158 = (FName)this_00->_padding_;
        ::FName::ToString(&local_158,&local_140);
        ::FString::PrintfImpl(&local_130,L"%s_%s");
        DS_Util::GetEnumString(&local_168,&local_130);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
      }
      FDS_DataContainer::SetData<FString,enum_EDS_TextData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,Text,&local_168);
      pcVar2 = *(code **)(*(longlong *)pUVar4 + 0x308);
      ::FName::FName(&local_110,L"");
      ::FName::FName(&local_108,L"");
      puVar6 = (undefined8 *)(*pcVar2)(pUVar4,local_f0);
      local_120.Object = (FDS_ViewModelContext *)*puVar6;
      local_120.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar6[1];
      if (local_120.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_178.ObjectIndex = 0;
      local_178.ObjectSerialNumber = 0;
      local_150 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_150);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_178,&local_120,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_170.ObjectIndex = 0;
      local_170.ObjectSerialNumber = 0;
      local_148 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_170,(FObjectPtr)&local_148);
      local_d8._s_0.X = 0.0;
      local_d8._s_0.Y = 0.0;
      pTVar7 = DS_Util::TransformTooltipPositionOnMouse
                         (&local_c8,(TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_170,
                          (TVector2<double> *)&local_d8._s_0,None);
      UDS_UserWidget::OnSetWindowPosition(param_1,pTVar7);
      return;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8515854553696960395>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\ItemCraft\\DS_VM_ItemCraft_Category.cpp"
                       ,0x75,"false");
    if (!bVar3) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OnSelectedCraftCategoryEvent @ 14be9c6d0

void __thiscall
UDS_VM_ItemCraft_Category::OnSelectedCraftCategoryEvent
          (UDS_VM_ItemCraft_Category *this,EDS_CraftCategoryType *param_1)

{
  FName local_18;
  int local_10;
  
  this->Selected = this->CraftCategoryType == *param_1;
  local_10 = FFieldNotificationClassDescriptor::Selected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Selected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14bea3390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft_Category::OnSetViewModel
          (UDS_VM_ItemCraft_Category *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UEnum *this_00;
  UDS_CraftManager *pUVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_218 [32];
  FName local_1e8 [2];
  FName local_1d8;
  int local_1d0;
  FName local_1c8;
  int local_1c0;
  FName local_1b8;
  int local_1b0;
  FString local_1a8;
  TSharedPtr<FDS_ViewModelContext_ItemCraft_Category,1> local_198;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  FString local_178;
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_188.Object = param_1->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ItemCraft_Category>(&local_198,&local_188);
  if (local_198.Object != (FDS_ViewModelContext_ItemCraft_Category *)0x0) {
    this->CraftCategoryType = (local_198.Object)->CraftCategoryType;
    this_00 = StaticEnum<enum_EDS_CraftCategoryType>();
    if (this_00 == (UEnum *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8627520946023956243>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_Util.h",0xed
                         ,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = 0;
    }
    else {
      UEnum::GetNameStringByValue
                (this_00,&local_168,(ulonglong)(local_198.Object)->CraftCategoryType);
      local_1e8[0] = (FName)this_00->_padding_;
      ::FName::ToString(local_1e8,&local_1a8);
      ::FString::PrintfImpl(&local_178,L"%s_%s");
      iVar4 = DS_Util::GetEnumIconID(&local_178);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
    this->IconID = iVar4;
    local_1d0 = FFieldNotificationClassDescriptor::IconID.BitNumber;
    local_1d8 = FFieldNotificationClassDescriptor::IconID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
    pUVar5 = UDS_CraftManager::GetInst();
    if (pUVar5 == (UDS_CraftManager *)0x0) {
      this->Selected = false;
      local_1b0 = FFieldNotificationClassDescriptor::Selected.BitNumber;
      local_1b8 = FFieldNotificationClassDescriptor::Selected.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_ItemCraft_Category::OnSetViewModel",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_158.Ptr,0x2f,L"UDS_CraftManager is nullptr.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      this->Selected = this->CraftCategoryType == pUVar5->SelectedCraftCategoryType;
      local_1c0 = FFieldNotificationClassDescriptor::Selected.BitNumber;
      local_1c8 = FFieldNotificationClassDescriptor::Selected.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUnHoveredCategory @ 14bea7380

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft_Category::OnUnHoveredCategory
          (UDS_VM_ItemCraft_Category *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,CommonTextTooltip,local_res20,local_res18);
  }
  return;
}

// SetIconID @ 14beafdb0

void __thiscall UDS_VM_ItemCraft_Category::SetIconID(UDS_VM_ItemCraft_Category *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->IconID = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetSelected @ 14beb4250

void __thiscall
UDS_VM_ItemCraft_Category::SetSelected(UDS_VM_ItemCraft_Category *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->Selected = *param_1;
  local_10 = FFieldNotificationClassDescriptor::Selected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Selected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bebc740

void __thiscall UDS_VM_ItemCraft_Category::UnbindModel(UDS_VM_ItemCraft_Category *this)

{
  UDS_ItemCraftEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectCraftCategoryEvent,this);
    return;
  }
  return;
}

