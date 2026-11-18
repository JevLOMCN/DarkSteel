// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// SetClickQuestMenu_WrapperImpl @ 14b73e360

void __cdecl UDS_VM_W_HUD_QuestMenu::SetClickQuestMenu_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  UDS_PhasingManager *this;
  FDS_PhasingBaseTableRow *this_00;
  UDS_QuestManager *this_01;
  
  this = UDS_PhasingManager::GetInst();
  if ((this != (UDS_PhasingManager *)0x0) &&
     (bVar1 = UDS_PhasingManager::IsPhasingInProgress(this), bVar1)) {
    iVar2 = UDS_PhasingManager::GetPhasingIDInProgress(this);
    this_00 = FDS_PhasingBaseTableRow::GetRef((longlong)iVar2,true);
    bVar1 = FDS_PhasingBaseTableRow::IsValid(this_00);
    if (!bVar1) {
      return;
    }
    if (this_00->PhasingContentsType != Inn) {
      return;
    }
  }
  this_01 = UDS_QuestManager::GetInst();
  if (this_01 == (UDS_QuestManager *)0x0) {
    return;
  }
  iVar2 = UDS_QuestManager::GetTraceQuestID(this_01);
  UDS_QuestManager::OpenQuestContent(this_01,iVar2);
  return;
}

// StaticClass @ 14b73e370

UClass * __cdecl UDS_VM_W_HUD_QuestMenu::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_HUD_QuestMenu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_HUD_QuestMenu",
               &Z_Registration_Info_UClass_UDS_VM_W_HUD_QuestMenu.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_HUD_QuestMenu,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_HUD_QuestMenu>,
               InternalVTableHelperCtorCaller<UDS_VM_W_HUD_QuestMenu>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_HUD_QuestMenu.InnerSingleton;
}

// UDS_VM_W_HUD_QuestMenu @ 14b740d10

UDS_VM_W_HUD_QuestMenu * __thiscall
UDS_VM_W_HUD_QuestMenu::UDS_VM_W_HUD_QuestMenu(UDS_VM_W_HUD_QuestMenu *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_HUD_QuestMenu__6B_;
  *(undefined8 *)&(this->ClickQuestMenu).Delegate = 0;
  *(undefined8 *)&(this->ClickQuestMenu).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickQuestMenu).Delegate.field_0x10 = 0;
  (this->ClickQuestMenu)._padding_ = '\0';
  (this->ClickQuestMenu).bIsCustomSelected = false;
  (this->ClickQuestMenu).bIsLacked = false;
  (this->ClickQuestMenu).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_W_HUD_QuestMenu @ 14b740d70

UDS_VM_W_HUD_QuestMenu * __thiscall
UDS_VM_W_HUD_QuestMenu::UDS_VM_W_HUD_QuestMenu
          (UDS_VM_W_HUD_QuestMenu *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_HUD_QuestMenu__6B_;
  *(undefined8 *)&(this->ClickQuestMenu).Delegate = 0;
  *(undefined8 *)&(this->ClickQuestMenu).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickQuestMenu).Delegate.field_0x10 = 0;
  (this->ClickQuestMenu)._padding_ = '\0';
  (this->ClickQuestMenu).bIsCustomSelected = false;
  (this->ClickQuestMenu).bIsLacked = false;
  (this->ClickQuestMenu).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_W_HUD_QuestMenu @ 14b742910

void __thiscall UDS_VM_W_HUD_QuestMenu::~UDS_VM_W_HUD_QuestMenu(UDS_VM_W_HUD_QuestMenu *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_HUD_QuestMenu__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickQuestMenu).Delegate);
  pvVar1 = *(void **)&(this->ClickQuestMenu).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickQuestMenu).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b744b90

IClassDescriptor * __thiscall
UDS_VM_W_HUD_QuestMenu::GetFieldNotificationDescriptor(UDS_VM_W_HUD_QuestMenu *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_HUD_QuestMenu::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b745200

UClass * __cdecl UDS_VM_W_HUD_QuestMenu::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_HUD_QuestMenu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_HUD_QuestMenu",
               &Z_Registration_Info_UClass_UDS_VM_W_HUD_QuestMenu.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_HUD_QuestMenu,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_HUD_QuestMenu>,
               InternalVTableHelperCtorCaller<UDS_VM_W_HUD_QuestMenu>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_HUD_QuestMenu.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_HUD_QuestMenu @ 14b745c10

void __cdecl UDS_VM_W_HUD_QuestMenu::StaticRegisterNativesUDS_VM_W_HUD_QuestMenu(void)

{
  return;
}

// OnClickQuestMenu @ 14bfba2a0

void __thiscall
UDS_VM_W_HUD_QuestMenu::OnClickQuestMenu(UDS_VM_W_HUD_QuestMenu *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  int iVar2;
  UDS_PhasingManager *this_00;
  FDS_PhasingBaseTableRow *this_01;
  UDS_QuestManager *this_02;
  
  this_00 = UDS_PhasingManager::GetInst();
  if ((this_00 != (UDS_PhasingManager *)0x0) &&
     (bVar1 = UDS_PhasingManager::IsPhasingInProgress(this_00), bVar1)) {
    iVar2 = UDS_PhasingManager::GetPhasingIDInProgress(this_00);
    this_01 = FDS_PhasingBaseTableRow::GetRef((longlong)iVar2,true);
    bVar1 = FDS_PhasingBaseTableRow::IsValid(this_01);
    if (!bVar1) {
      return;
    }
    if (this_01->PhasingContentsType != Inn) {
      return;
    }
  }
  this_02 = UDS_QuestManager::GetInst();
  if (this_02 == (UDS_QuestManager *)0x0) {
    return;
  }
  iVar2 = UDS_QuestManager::GetTraceQuestID(this_02);
  UDS_QuestManager::OpenQuestContent(this_02,iVar2);
  return;
}

// OnSetViewModel @ 14bfce780

void __thiscall
UDS_VM_W_HUD_QuestMenu::OnSetViewModel
          (UDS_VM_W_HUD_QuestMenu *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bfe00e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_W_HUD_QuestMenu::UnbindModel(UDS_VM_W_HUD_QuestMenu *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

