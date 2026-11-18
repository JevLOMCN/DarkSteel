// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// SetCloseWidgetButtonClickEvent_WrapperImpl @ 14b6263d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_CompleteBreach::SetCloseWidgetButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *pUVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_WindowManager::GetInst();
  if (pUVar1 == (UDS_WindowManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_CompleteBreach::OnCloseWidget",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,0x2c,L"windowMng is nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  return;
}

// StaticClass @ 14b6263e0

UClass * __cdecl UDS_VM_CompleteBreach::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CompleteBreach.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CompleteBreach",
               &Z_Registration_Info_UClass_UDS_VM_CompleteBreach.InnerSingleton,
               StaticRegisterNativesUDS_VM_CompleteBreach,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CompleteBreach>,
               InternalVTableHelperCtorCaller<UDS_VM_CompleteBreach>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CompleteBreach.InnerSingleton;
}

// UDS_VM_CompleteBreach @ 14b62d010

UDS_VM_CompleteBreach * __thiscall
UDS_VM_CompleteBreach::UDS_VM_CompleteBreach(UDS_VM_CompleteBreach *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CompleteBreach__6B_;
  (this->ItemListEntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ItemListEntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->ItemListEntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->CloseWidgetButtonClickEvent)._padding_ = '\0';
  (this->CloseWidgetButtonClickEvent).bIsCustomSelected = false;
  (this->CloseWidgetButtonClickEvent).bIsLacked = false;
  (this->CloseWidgetButtonClickEvent).bIsCustomDisabled = false;
  (this->CloseWidgetButtonClickEvent).ButtonEventType = None;
  *(undefined8 *)&(this->CloseWidgetButtonClickEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->CloseWidgetButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->CloseWidgetButtonClickEvent).Delegate.field_0x8 = 0;
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->CloseTabText).StringTableType = None;
  (this->CloseTabText).StringTableID = 0;
  (this->CloseTabText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CloseTabText).StringEnumTableNameID.Number = 0;
  (this->CloseTabText).DateTime.Ticks = 0;
  (this->CloseTabText).TimeSpan.Ticks = 0;
  (this->CloseTabText).TimeExpressionType = None;
  (this->CloseTabText).IsExpression = false;
  (this->CloseTabText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloseTabText).UniqueString.Data.ArrayNum = 0;
  (this->CloseTabText).UniqueString.Data.ArrayMax = 0;
  (this->CloseTabText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloseTabText).FormatArgs.ArrayNum = 0;
  (this->CloseTabText).FormatArgs.ArrayMax = 0;
  return this;
}

// UDS_VM_CompleteBreach @ 14b62d110

UDS_VM_CompleteBreach * __thiscall
UDS_VM_CompleteBreach::UDS_VM_CompleteBreach
          (UDS_VM_CompleteBreach *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CompleteBreach__6B_;
  (this->ItemListEntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ItemListEntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->ItemListEntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->CloseWidgetButtonClickEvent)._padding_ = '\0';
  (this->CloseWidgetButtonClickEvent).bIsCustomSelected = false;
  (this->CloseWidgetButtonClickEvent).bIsLacked = false;
  (this->CloseWidgetButtonClickEvent).bIsCustomDisabled = false;
  (this->CloseWidgetButtonClickEvent).ButtonEventType = None;
  *(undefined8 *)&(this->CloseWidgetButtonClickEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->CloseWidgetButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->CloseWidgetButtonClickEvent).Delegate.field_0x8 = 0;
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->CloseTabText).StringTableType = None;
  (this->CloseTabText).StringTableID = 0;
  (this->CloseTabText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CloseTabText).StringEnumTableNameID.Number = 0;
  (this->CloseTabText).DateTime.Ticks = 0;
  (this->CloseTabText).TimeSpan.Ticks = 0;
  (this->CloseTabText).TimeExpressionType = None;
  (this->CloseTabText).IsExpression = false;
  (this->CloseTabText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloseTabText).UniqueString.Data.ArrayNum = 0;
  (this->CloseTabText).UniqueString.Data.ArrayMax = 0;
  (this->CloseTabText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloseTabText).FormatArgs.ArrayNum = 0;
  (this->CloseTabText).FormatArgs.ArrayMax = 0;
  return this;
}

// ~UDS_VM_CompleteBreach @ 14b62efe0

void __thiscall UDS_VM_CompleteBreach::~UDS_VM_CompleteBreach(UDS_VM_CompleteBreach *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CompleteBreach__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CloseTabText).FormatArgs.AllocatorInstance.Data,
             (this->CloseTabText).FormatArgs.ArrayNum);
  pFVar1 = (this->CloseTabText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CloseTabText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->CloseWidgetButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->CloseWidgetButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CloseWidgetButtonClickEvent).Delegate);
  pFVar1 = (this->ItemListEntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b631a60

IClassDescriptor * __thiscall
UDS_VM_CompleteBreach::GetFieldNotificationDescriptor(UDS_VM_CompleteBreach *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CompleteBreach::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b632660

UClass * __cdecl UDS_VM_CompleteBreach::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CompleteBreach.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CompleteBreach",
               &Z_Registration_Info_UClass_UDS_VM_CompleteBreach.InnerSingleton,
               StaticRegisterNativesUDS_VM_CompleteBreach,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CompleteBreach>,
               InternalVTableHelperCtorCaller<UDS_VM_CompleteBreach>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CompleteBreach.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CompleteBreach @ 14b633020

void __cdecl UDS_VM_CompleteBreach::StaticRegisterNativesUDS_VM_CompleteBreach(void)

{
  return;
}

// BindModel @ 14bd48960

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_CompleteBreach::BindModel(UDS_VM_CompleteBreach *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// InitViewModel @ 14bd69bd0

void __thiscall UDS_VM_CompleteBreach::InitViewModel(UDS_VM_CompleteBreach *this)

{
  return;
}

// OnCloseWidget @ 14bd763b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CompleteBreach::OnCloseWidget(UDS_VM_CompleteBreach *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *pUVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_WindowManager::GetInst();
  if (pUVar1 == (UDS_WindowManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_CompleteBreach::OnCloseWidget",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x2c,L"windowMng is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bd82200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDS_VM_CompleteBreach::OnSetViewModel
          (UDS_VM_CompleteBreach *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  TSharedPtr<FDS_ViewModelContext_BreachCompelte,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSet<TTuple<int_const_,int_const_>,TDefaultMapHashableKeyFuncs<int_const_,int_const_,0>,FDefaultSetAllocator>
  local_58;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_68.Object = param_1->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_BreachCompelte>(&local_78,&local_68);
  if (local_78.Object == (FDS_ViewModelContext_BreachCompelte *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_58.Elements._0_8_ = 0;
  local_58.Elements._8_8_ = 0;
  local_58.Elements._32_8_ = 0;
  local_58.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_58.Elements._48_8_ = _UNK_150631d98;
  local_58.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_58.HashSize = 0;
  TSet<TTuple<int_const_,int_const_>,TDefaultMapHashableKeyFuncs<int_const_,int_const_,0>,FDefaultSetAllocator>
  ::operator=(&local_58,
              (TSet<TTuple<int_const_,int_const_>,TDefaultMapHashableKeyFuncs<int_const_,int_const_,0>,FDefaultSetAllocator>
               *)&(local_78.Object)->ResultItemIDMap);
  UpdateListView(this,(TMap<int_const_,int_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,int_const_,0>_>
                       *)&local_58);
  FDS_Text::SetTextFromStringTable(&this->TitleText,StringUi,0x9e63);
  local_90 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  local_98 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  FDS_Text::SetTextFromStringTable(&this->CloseTabText,StringUi,0x9e63);
  local_80 = FFieldNotificationClassDescriptor::CloseTabText.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::CloseTabText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bd8c3e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_CompleteBreach::UnbindModel(UDS_VM_CompleteBreach *this)

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

// UpdateListView @ 14bd91f10

void __thiscall
UDS_VM_CompleteBreach::UpdateListView
          (UDS_VM_CompleteBreach *this,
          TMap<int_const_,int_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,int_const_,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<int_const_,int_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,int_const_,0>_>
  *pTVar6;
  bool bVar7;
  UDS_UserObjectListItem *this_00;
  undefined8 *puVar8;
  longlong lVar9;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_f8 [8];
  UDS_M_ItemImplBase *local_f0;
  TMap<int_const_,int_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,int_const_,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  UDS_UserObjectListItem *local_a8 [2];
  FName local_98;
  int local_90;
  TMap<int_const_,int_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,int_const_,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  TVar10 = (TObjectPtr<UDS_UserObjectListItem>_u_0)param_1;
  FDS_EntryBindingEventField::Reset(&this->ItemListEntryBindingEventField);
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_e0 = 0;
  local_c8 = 0;
  uStack_dc = 1;
  iStack_cc = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    TVar10.DebugPtr = (UDS_UserObjectListItem *)0x0;
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_14bd91fbd;
      uVar13 = puVar15[lVar9 + 1];
    }
    uStack_dc = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_dc * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_b8 = (int)lVar9;
    iStack_cc = local_c8 + -1 + local_b8;
    if (iVar3 < iStack_cc) {
      iStack_cc = iVar3;
    }
  }
LAB_14bd91fbd:
  uVar13 = *(uint *)&param_1->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_c0 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_d0 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_dc,iStack_e0);
  TStack_80.CurrentBitIndex = iStack_cc;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_80._28_4_ = iStack_cc;
  TStack_80.BaseBitIndex = local_c8;
  uStack_60 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = param_1;
  local_d8 = puVar1;
  iStack_c4 = iStack_cc;
  local_88 = param_1;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (((int)uVar13 < 0) || (iVar3 < (int)uVar13)) {
    TVar10.DebugPtr = (UDS_UserObjectListItem *)&::s_C__Workspace_UnrealEngine_Engin;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar13 != uVar4) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    TVar10.DebugPtr = (UDS_UserObjectListItem *)0x0;
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd920c0;
      uVar13 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_b4 = (int)lVar9;
    uVar13 = local_b4 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_14bd920c0:
  do {
    pTVar6 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      local_f8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int_const_,int_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_f8);
    }
    if (((TStack_80.CurrentBitIndex == uVar13) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    {
      local_90 = FFieldNotificationClassDescriptor::ItemListEntryBindingEventField.BitNumber;
      local_98 = FFieldNotificationClassDescriptor::ItemListEntryBindingEventField.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
LAB_14bd92228:
      *(undefined4 *)&param_1->field_0x48 = 0;
      if (*(void **)&param_1->field_0x40 != (void *)0x0) {
        FMemory::Free(*(void **)&param_1->field_0x40);
      }
      TSparseArray<TSparseSetElement<TTuple<int_const_,int_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int_const_,int_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int_const_,int_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)param_1);
      return;
    }
    local_b0 = *(undefined8 *)(*(longlong *)pTVar6 + (longlong)TStack_80.CurrentBitIndex * 0x10);
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 != (UDS_UserObjectListItem *)0x0) goto LAB_14bd92134;
    }
    else if (this_00 != (UDS_UserObjectListItem *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_00);
LAB_14bd92134:
      DS_ItemDataUtil::CreateItemModel
                ((EDS_ItemSlotStateType)&local_f0,(int)CONCAT71(TVar10._1_7_,6));
      if (local_f0 == (UDS_M_ItemImplBase *)0x0) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3862838399987613760>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Breach\\DS_VM_CompleteBreach.cpp"
                           ,0x40,"false");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        goto LAB_14bd92228;
      }
      UDS_M_ItemImplBase::SetQuantity(local_f0,local_b0._4_4_);
      puVar8 = (undefined8 *)(**(code **)(local_f0->_padding_ + 0x310))(local_f0,local_48);
      local_58.Object = (FDS_ViewModelContext *)*puVar8;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1];
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(this_00,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      local_a8[0] = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      TVar10.DebugPtr = (UDS_UserObjectListItem *)local_a8;
      FDS_EntryBindingEventField::Add
                (&this->ItemListEntryBindingEventField,
                 (TObjectPtr<UDS_UserObjectListItem>)TVar10.ObjectPtr.field0_0x0);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  } while( true );
}

