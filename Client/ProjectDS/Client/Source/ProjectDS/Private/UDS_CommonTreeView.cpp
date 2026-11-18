// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// SetEntryBindingEventField_WrapperImpl @ 14b4615e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_CommonTreeView::SetEntryBindingEventField_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  UDS_UserObjectListItem *this;
  UClass *pUVar4;
  undefined8 *puVar5;
  int iVar6;
  UDS_UserObjectListItem *pUStackX_8;
  FWeakObjectPtr FStackX_10;
  
  ClearEntryItemsBinding(param_1);
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x1170),param_2);
  UListView::ClearListItems(param_1);
  puVar5 = *(undefined8 **)((longlong)param_1 + 0x1170);
  iVar6 = 0;
  iVar2 = *(int *)((longlong)param_1 + 0x1178);
  puVar1 = puVar5 + iVar2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x1178) != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&pUStackX_8);
    }
    if (puVar5 == puVar1) break;
    this = (UDS_UserObjectListItem *)*puVar5;
    if (this != (UDS_UserObjectListItem *)0x0) {
      UListView::AddItem(param_1,(UObject *)this);
      UDS_UserObjectListItem::SetListItemIndex(this,iVar6);
      iVar6 = iVar6 + 1;
      pUVar4 = Z_Construct_UClass_UDS_UserObjectTreeItem_NoRegister();
      iVar3 = (int)pUVar4->_padding_;
      if ((iVar3 <= *(int *)(this->_padding_ + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar3 * 8)
          == &pUVar4->_padding_)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FStackX_10.ObjectIndex = 0;
        FStackX_10.ObjectSerialNumber = 0;
        pUStackX_8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&FStackX_10,(FObjectPtr)&pUStackX_8);
        UpdateItemExpansion(param_1,(TWeakObjectPtr<UDS_UserObjectTreeItem,FWeakObjectPtr>)
                                    FStackX_10);
      }
    }
    puVar5 = puVar5 + 1;
  }
  UListViewBase::RequestRefresh(param_1);
  return;
}

// SetScrollSettledTimerDuration_WrapperImpl @ 14b4615f0

void __cdecl
UDS_CommonTreeView::SetScrollSettledTimerDuration_WrapperImpl(void *param_1,void *param_2)

{
  SetScrollSettledTimerDuration(param_1,*(float *)param_2);
  return;
}

// StaticClass @ 14b461600

UClass * __cdecl UDS_CommonTreeView::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonTreeView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonTreeView",
               &Z_Registration_Info_UClass_UDS_CommonTreeView.InnerSingleton,
               StaticRegisterNativesUDS_CommonTreeView,0x11c0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonTreeView>,
               InternalVTableHelperCtorCaller<UDS_CommonTreeView>,local_res8,
               UCommonTreeView::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonTreeView.InnerSingleton;
}

// UDS_CommonTreeView @ 14b4662d0

UDS_CommonTreeView * __thiscall
UDS_CommonTreeView::UDS_CommonTreeView(UDS_CommonTreeView *this,FVTableHelper *param_1)

{
  UCommonTreeView::UCommonTreeView((UCommonTreeView *)this,param_1);
  this->ScrollSettledTimerDuration = 1.0;
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UDS_CommonTreeView__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ScrollSettledEventField).IsTopScrollSettled = false;
  (this->ScrollSettledEventField).IsBottomScrollSettled = false;
  this->bUseScrollbar = false;
  (this->TopScrollSettledTimerHandle).Handle = 0;
  (this->BottomScrollSettledTimerHandle).Handle = 0;
  this->bHasUserInteracted = false;
  this->ScrollBarThickness = 16.0;
  (this->DSScrollbarPadding).Left = 2.0;
  (this->DSScrollbarPadding).Top = 2.0;
  (this->DSScrollbarPadding).Right = 2.0;
  (this->DSScrollbarPadding).Bottom = 2.0;
  return this;
}

// ~UDS_CommonTreeView @ 14b466a00

void __thiscall UDS_CommonTreeView::~UDS_CommonTreeView(UDS_CommonTreeView *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UDS_CommonTreeView__6B_;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCommonTreeView::~UCommonTreeView((UCommonTreeView *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b467e30

IClassDescriptor * __thiscall
UDS_CommonTreeView::GetFieldNotificationDescriptor(UDS_CommonTreeView *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_CommonTreeView::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b468aa0

UClass * __cdecl UDS_CommonTreeView::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonTreeView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonTreeView",
               &Z_Registration_Info_UClass_UDS_CommonTreeView.InnerSingleton,
               StaticRegisterNativesUDS_CommonTreeView,0x11c0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonTreeView>,
               InternalVTableHelperCtorCaller<UDS_CommonTreeView>,local_res8,
               UCommonTreeView::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonTreeView.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonTreeView @ 14b468d90

void __cdecl UDS_CommonTreeView::StaticRegisterNativesUDS_CommonTreeView(void)

{
  return;
}

// UDS_CommonTreeView @ 14bc83960

UDS_CommonTreeView * __thiscall
UDS_CommonTreeView::UDS_CommonTreeView(UDS_CommonTreeView *this,FObjectInitializer *param_1)

{
  UCommonTreeView::UCommonTreeView((UCommonTreeView *)this,param_1);
  this->ScrollSettledTimerDuration = 1.0;
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UDS_CommonTreeView__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ScrollSettledEventField).IsTopScrollSettled = false;
  (this->ScrollSettledEventField).IsBottomScrollSettled = false;
  this->bUseScrollbar = false;
  (this->TopScrollSettledTimerHandle).Handle = 0;
  (this->BottomScrollSettledTimerHandle).Handle = 0;
  this->bHasUserInteracted = false;
  this->ScrollBarThickness = 16.0;
  (this->DSScrollbarPadding).Left = 2.0;
  (this->DSScrollbarPadding).Top = 2.0;
  (this->DSScrollbarPadding).Right = 2.0;
  (this->DSScrollbarPadding).Bottom = 2.0;
  this->field_0xf52 = 1;
  return this;
}

// BeginDestroy @ 14bc87cc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CommonTreeView::BeginDestroy(UDS_CommonTreeView *this)

{
  undefined1 *puVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar2;
  
  puVar1 = &this->field_0x348;
  pTVar2 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (*(code *)**(undefined8 **)puVar1)(puVar1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar2,this);
  pTVar2 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)(*(longlong *)puVar1 + 0x58))(puVar1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar2,this);
  pTVar2 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)(*(longlong *)puVar1 + 0x68))(puVar1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar2,this);
  ClearEntryItemsBinding(this);
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  UWidget::BeginDestroy((UWidget *)this);
  return;
}

// ClearEntryItemsBinding @ 14bc8c2c0

void __thiscall UDS_CommonTreeView::ClearEntryItemsBinding(UDS_CommonTreeView *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  UObject *pUVar5;
  longlong *plVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  FReadAccessScope local_58;
  
  pFVar8 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  iVar2 = (this->EntryBindingEventField).UserObjectList.ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
LAB_14bc8c2f0:
  do {
    if ((this->EntryBindingEventField).UserObjectList.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    if (*(UDS_UserObjectListItem **)pFVar8 != (UDS_UserObjectListItem *)0x0) {
      UDS_UserObjectListItem::GetOwnerWidget(*(UDS_UserObjectListItem **)pFVar8);
      bVar4 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)&local_res10,(void *)0x0);
      if (!bVar4) {
        pUVar5 = FWeakObjectPtr::Get(&local_res10);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pUVar5[0x19].field_0x20,&local_58);
        iVar3 = *(int *)&pUVar5[0x1a].field_0x8;
        plVar6 = *(longlong **)(pUVar5 + 0x1a);
        plVar7 = plVar6 + (longlong)iVar3 * 2;
        while( true ) {
          if (*(int *)&pUVar5[0x1a].field_0x8 != iVar3) {
            `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (plVar6 == plVar7) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_58);
            goto LAB_14bc8c3d1;
          }
          if (((int)plVar6[1] != 0) && (*plVar6 != 0)) break;
          plVar6 = plVar6 + 2;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_58);
        pUVar5 = FWeakObjectPtr::Get(&local_res10);
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pUVar5[0x19].field_0x20);
        pFVar8 = pFVar8 + 8;
        goto LAB_14bc8c2f0;
      }
    }
LAB_14bc8c3d1:
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// NativeOnEntryReleased @ 14bcac660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_CommonTreeView::NativeOnEntryReleased(UDS_CommonTreeView *this,UUserWidget *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UUserWidget *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      UDS_UserWidget::OnReleasedListViewEvent((UDS_UserWidget *)param_1);
    }
  }
  return;
}

// OnChangedItemExpansion @ 14bcb0c80

void __thiscall
UDS_CommonTreeView::OnChangedItemExpansion(UDS_CommonTreeView *this,UObject *param_1,bool param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_UserObjectTreeItem *this_00;
  FWeakObjectPtr local_res10 [2];
  UObject *local_res20;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_UserObjectTreeItem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14bcb0cbb;
  }
  param_1 = (UObject *)0x0;
LAB_14bcb0cbb:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_res10[0].ObjectIndex = 0;
  local_res10[0].ObjectSerialNumber = 0;
  local_res20 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    this_00 = (UDS_UserObjectTreeItem *)FWeakObjectPtr::Get(local_res10);
    UDS_UserObjectTreeItem::SetItemExpanded(this_00,param_2);
  }
  return;
}

// OnClickedItem @ 14bcb22f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CommonTreeView::OnClickedItem(UDS_CommonTreeView *this,UObject *param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_198 [32];
  FName local_158;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  if (param_1 != (UObject *)0x0) {
    local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_158.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_158.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_158,&local_150);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_CommonTreeView::OnClickedItem",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Display,local_138.Ptr,0x73,
                 L"UDS_CommonTreeView::OnClickedItem() - Object Name : %s");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnEntryBindingEvent @ 14bcb3c30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CommonTreeView::OnEntryBindingEvent
          (UDS_CommonTreeView *this,FDS_EntryBindingEventField *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UDS_UserObjectListItem *this_00;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  UDS_UserObjectListItem *local_res8;
  FWeakObjectPtr local_res10;
  
  ClearEntryItemsBinding(this);
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->EntryBindingEventField).UserObjectList,&param_1->UserObjectList);
  UListView::ClearListItems((UListView *)this);
  pFVar5 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  iVar6 = 0;
  iVar2 = (this->EntryBindingEventField).UserObjectList.ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EntryBindingEventField).UserObjectList.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar5 == pFVar1) break;
    this_00 = *(UDS_UserObjectListItem **)pFVar5;
    if (this_00 != (UDS_UserObjectListItem *)0x0) {
      UListView::AddItem((UListView *)this,(UObject *)this_00);
      UDS_UserObjectListItem::SetListItemIndex(this_00,iVar6);
      iVar6 = iVar6 + 1;
      pUVar4 = Z_Construct_UClass_UDS_UserObjectTreeItem_NoRegister();
      iVar3 = (int)pUVar4->_padding_;
      if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar4->_padding_)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        local_res10.ObjectIndex = 0;
        local_res10.ObjectSerialNumber = 0;
        local_res8 = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
        UpdateItemExpansion(this,(TWeakObjectPtr<UDS_UserObjectTreeItem,FWeakObjectPtr>)local_res10)
        ;
      }
    }
    pFVar5 = pFVar5 + 8;
  }
  UListViewBase::RequestRefresh((UListViewBase *)this);
  return;
}

// OnGetChildren @ 14bcb5d40

void __thiscall
UDS_CommonTreeView::OnGetChildren
          (UDS_CommonTreeView *this,UObject *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UDS_UserObjectTreeItem *this_00;
  TArray<TObjectPtr<UDS_UserObjectTreeItem>,TSizedDefaultAllocator<32>_> *pTVar6;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  if (param_1 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_UserObjectTreeItem_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14bcb5db4;
  }
  param_1 = (UObject *)0x0;
LAB_14bcb5db4:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    this_00 = (UDS_UserObjectTreeItem *)FWeakObjectPtr::Get(&local_res10);
    pTVar6 = UDS_UserObjectTreeItem::GetChildItems(this_00);
    if (param_2 == (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)pTVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar1 = pTVar6->ArrayNum;
    if (iVar1 != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax
                        );
      ConstructItems<UObject_*,TObjectPtr<UDS_UserObjectTreeItem>,int>
                ((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8,
                 (TObjectPtr<UDS_UserObjectTreeItem> *)(pTVar6->AllocatorInstance).Data,iVar1);
    }
  }
  return;
}

// OnScrollingFinished @ 14bcbace0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_CommonTreeView::OnScrollingFinished(UDS_CommonTreeView *this)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  longlong lVar7;
  FTimerManager *pFVar8;
  UDS_LogManager *pUVar9;
  longlong *plVar10;
  undefined1 auStackY_318 [32];
  code *local_2d8;
  ulonglong uStack_2d0;
  FFieldId local_2c8;
  code *local_2b8;
  ulonglong uStack_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  if ((this->bHasUserInteracted != false) &&
     (*(STableViewBase **)&this->field_0x10f8 != (STableViewBase *)0x0)) {
    bVar6 = STableViewBase::IsPendingRefresh(*(STableViewBase **)&this->field_0x10f8);
    if ((!bVar6) && ((this->EntryBindingEventField).UserObjectList.ArrayNum != 0)) {
      if (*(longlong *)&this->field_0x10f8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar10 = (longlong *)(*(longlong *)&this->field_0x10f8 + 0x2a8);
      lVar7 = (**(code **)(*plVar10 + 8))(plVar10,local_2a8);
      dVar1 = *(double *)(lVar7 + 8);
      if (*(longlong *)&this->field_0x10f8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar10 = (longlong *)(*(longlong *)&this->field_0x10f8 + 0x2a8);
      lVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,local_298);
      fVar5 = __real_bf800000;
      fVar4 = __real_3a83126f;
      dVar2 = *(double *)(lVar7 + 8);
      (this->ScrollSettledEventField).IsTopScrollSettled = false;
      (this->ScrollSettledEventField).IsBottomScrollSettled = false;
      if (((float)dVar1 <= fVar4) && ((this->TopScrollSettledTimerHandle).Handle == 0)) {
        (this->ScrollSettledEventField).IsTopScrollSettled = true;
        pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
        uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
        local_2d8 = ResetTopScrollSettledTimer;
        FTimerManager::SetTimer<UDS_CommonTreeView>
                  (pFVar8,&this->TopScrollSettledTimerHandle,this,(pmf_0bb90e53 *)&local_2d8,
                   this->ScrollSettledTimerDuration,false,fVar5);
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_288._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_288,"UDS_CommonTreeView::OnScrollingFinished",0x27,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Display,local_288.Ptr,0x93,L"[OnScrollingFinished] Top Settled !!");
          if ((void *)local_288._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_288._padding_);
          }
        }
      }
      if (((float)dVar2 <= __real_3a83126f) && ((this->BottomScrollSettledTimerHandle).Handle == 0))
      {
        (this->ScrollSettledEventField).IsBottomScrollSettled = true;
        pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
        local_2d8 = ResetBottomScrollSettledTimer;
        uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
        local_2b8 = ResetBottomScrollSettledTimer;
        uStack_2b0 = uStack_2d0;
        FTimerManager::SetTimer<UDS_CommonTreeView>
                  (pFVar8,&this->BottomScrollSettledTimerHandle,this,(pmf_0bb90e53 *)&local_2b8,
                   this->ScrollSettledTimerDuration,false,fVar5);
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_CommonTreeView::OnScrollingFinished",0x27,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Display,local_168.Ptr,0x9b,L"[OnScrollingFinished] Bottom Settled !!")
          ;
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
      }
      if (((this->ScrollSettledEventField).IsTopScrollSettled == true) ||
         ((this->ScrollSettledEventField).IsBottomScrollSettled == true)) {
        local_2c8.FieldName = FFieldNotificationClassDescriptor::ScrollSettledEventField.FieldName;
        local_2c8.BitNumber = FFieldNotificationClassDescriptor::ScrollSettledEventField.BitNumber;
        UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,&local_2c8);
      }
      this->bHasUserInteracted = false;
    }
  }
  return;
}

// RebuildListWidget @ 14bcbdf00

TSharedRef<STableViewBase,1> * __thiscall
UDS_CommonTreeView::RebuildListWidget
          (UDS_CommonTreeView *this,TSharedRef<STableViewBase,1> *__return_storage_ptr__)

{
  longlong lVar1;
  SBox *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  atomic<int> aVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  SBox *pSVar11;
  SBox *this_00;
  bool bVar12;
  UDS_CommonTreeView *local_res8;
  code *local_88;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> TStack_80;
  TSharedRef<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> local_68;
  undefined1 local_58 [16];
  bool local_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  UTreeView::ConstructTreeView<SDS_TreeView>((UTreeView *)this,&local_68);
  SDS_TableViewBase<SCommonTreeView,UObject_*>::UpdateScrollBarThickness
            (local_68.Object,&this->ScrollBarThickness);
  fVar5 = (this->DSScrollbarPadding).Top;
  fVar6 = (this->DSScrollbarPadding).Right;
  fVar7 = (this->DSScrollbarPadding).Bottom;
  lVar1 = (local_68.Object)->_padding_;
  ((local_68.Object)->Padding).Left = (this->DSScrollbarPadding).Left;
  ((local_68.Object)->Padding).Top = fVar5;
  ((local_68.Object)->Padding).Right = fVar6;
  ((local_68.Object)->Padding).Bottom = fVar7;
  if (lVar1 != 0) {
    pSVar2 = *(SBox **)(lVar1 + 0x1d0);
    pSVar11 = pSVar2;
    this_00 = (SBox *)0x0;
    if (pSVar2 != (SBox *)0x0) {
      aVar4 = *(atomic<int> *)&pSVar2->_padding_;
      do {
        pSVar11 = (SBox *)0x0;
        this_00 = (SBox *)0x0;
        if (aVar4 == (atomic<int>)0x0) goto LAB_14bcbdf95;
        LOCK();
        aVar8 = *(atomic<int> *)&pSVar2->_padding_;
        bVar12 = aVar4 == aVar8;
        if (bVar12) {
          *(atomic<int> *)&pSVar2->_padding_ = (atomic<int>)((int)aVar4 + 1);
          aVar8 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar8;
      } while (!bVar12);
      this_00 = *(SBox **)(lVar1 + 0x1c8);
      LOCK();
      *(atomic<int> *)&pSVar2->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar2->_padding_ + 1);
      UNLOCK();
      pSVar11 = pSVar2;
    }
LAB_14bcbdf95:
    if (this_00 != (SBox *)0x0) {
      local_88 = (code *)CONCAT35(local_88._5_3_,0x100000000);
      TStack_80._16_8_ = 0;
      local_88 = (code *)CONCAT44(local_88._4_4_,
                                  (this->DSScrollbarPadding).Bottom + (this->DSScrollbarPadding).Top
                                 );
      TStack_80._0_8_ = 0;
      TStack_80._8_8_ = 0;
      SBox::SetHeightOverride(this_00,(TAttribute<FOptionalSize> *)&local_88);
      local_88 = (code *)CONCAT35(local_88._5_3_,0x100000000);
      TStack_80._16_8_ = 0;
      TStack_80._0_8_ = 0;
      TStack_80._8_8_ = 0;
      local_88 = (code *)CONCAT44(local_88._4_4_,
                                  (this->DSScrollbarPadding).Right + (this->DSScrollbarPadding).Left
                                  + (local_68.Object)->Thickness);
      SBox::SetWidthOverride(this_00,(TAttribute<FOptionalSize> *)&local_88);
      local_58._0_4_ = (EAccessType)(this->DSScrollbarPadding).Left;
      local_58._4_4_ = (this->DSScrollbarPadding).Top;
      local_58._8_8_ = *(undefined8 *)&(this->DSScrollbarPadding).Right;
      local_48 = true;
      local_30 = 0;
      local_40 = (undefined1 *)0x0;
      uStack_38 = 0;
      SBox::SetPadding(this_00,(TAttribute<FMargin> *)local_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar11);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar11);
  }
  local_88 = SetHasUserInteracted;
  TStack_80._0_8_ = (ulonglong)local_68.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(local_68.Object)->OnUserScrollInteracted,(FWriteAccessScope *)local_58);
  local_40 = &((local_68.Object)->OnUserScrollInteracted).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_40);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CommonTreeView____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_CommonTreeView *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_CommonTreeView *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res8);
    puVar9[4] = local_88;
    puVar9[5] = TStack_80._0_8_;
  }
  if (local_48 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_58._8_8_,(FDestructionSentinel *)local_58);
  }
  pTVar3 = (TReferenceControllerBase<1> *)
           CONCAT44(local_68.SharedReferenceCount.ReferenceController._4_4_,
                    local_68.SharedReferenceCount.ReferenceController._0_4_);
  __return_storage_ptr__->Object = (STableViewBase *)local_68.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// ResetBottomScrollSettledTimer @ 14bcc4410

void __thiscall UDS_CommonTreeView::ResetBottomScrollSettledTimer(UDS_CommonTreeView *this)

{
  (this->BottomScrollSettledTimerHandle).Handle = 0;
  return;
}

// ResetTopScrollSettledTimer @ 14bcc4650

void __thiscall UDS_CommonTreeView::ResetTopScrollSettledTimer(UDS_CommonTreeView *this)

{
  (this->TopScrollSettledTimerHandle).Handle = 0;
  return;
}

// SetHasUserInteracted @ 14bcc6710

void __thiscall UDS_CommonTreeView::SetHasUserInteracted(UDS_CommonTreeView *this)

{
  this->bHasUserInteracted = true;
  return;
}

// SetScrollSettledTimerDuration @ 14bcc86b0

void __thiscall
UDS_CommonTreeView::SetScrollSettledTimerDuration(UDS_CommonTreeView *this,float param_1)

{
  this->ScrollSettledTimerDuration = param_1;
  return;
}

// SynchronizeProperties @ 14bccac40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CommonTreeView::SynchronizeProperties(UDS_CommonTreeView *this)

{
  undefined1 *puVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar2;
  TMulticastDelegateRegistration<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this_00;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  TMulticastDelegateRegistration<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy> *this_02;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_CommonTreeView *local_res8;
  code *local_78;
  undefined8 uStack_70;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  UListViewBase::SynchronizeProperties((UListViewBase *)this);
  puVar1 = &this->field_0x348;
  pTVar2 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (*(code *)**(undefined8 **)puVar1)(puVar1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar2,this);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
            (*(code *)**(undefined8 **)puVar1)(puVar1);
  uStack_70._0_4_ = 0;
  local_78 = OnClickedItem;
  TMulticastDelegateRegistration<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_CommonTreeView>(this_00,(UDS_CommonTreeView *)&local_res8,(pmf_3f40057d *)this);
  pTVar2 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)(*(longlong *)puVar1 + 0x58))(puVar1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar2,this);
  this_01 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (**(code **)(*(longlong *)puVar1 + 0x58))(puVar1);
  uStack_70._0_4_ = 0;
  local_78 = OnScrollingFinished;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_CommonTreeView>(this_01,(UDS_CommonTreeView *)&local_res8,(pmf_0bb90e53 *)this);
  pTVar2 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)(*(longlong *)puVar1 + 0x68))(puVar1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar2,this);
  this_02 = (TMulticastDelegateRegistration<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy>
             *)(**(code **)(*(longlong *)puVar1 + 0x68))(puVar1);
  uStack_70._0_4_ = 0;
  local_78 = OnChangedItemExpansion;
  TMulticastDelegateRegistration<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_CommonTreeView>(this_02,(UDS_CommonTreeView *)&local_res8,(pmf_0e4e24ad *)this);
  local_78 = OnGetChildren;
  uStack_70 = (FMRSWRecursiveAccessDetector *)((ulonglong)uStack_70._4_4_ << 0x20);
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__AEAV__TArray_PEAVUObject__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CommonTreeView____A6AXPEAVUObject__AEAV__TArray_PEAVUObject__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
    puVar3[4] = local_78;
    puVar3[5] = uStack_70;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x1138,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_78);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_68 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(uStack_70,(FDestructionSentinel *)&local_78);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  UListViewBase::SetScrollbarVisibility((UListViewBase *)this,this->bUseScrollbar == false);
  return;
}

// UpdateItemExpansion @ 14bccef70

void __thiscall
UDS_CommonTreeView::UpdateItemExpansion
          (UDS_CommonTreeView *this,TWeakObjectPtr<UDS_UserObjectTreeItem,FWeakObjectPtr> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  UDS_UserObjectTreeItem *pUVar4;
  UObject *pUVar5;
  TArray<TObjectPtr<UDS_UserObjectTreeItem>,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  FWeakObjectPtr local_res20;
  
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    pUVar4 = (UDS_UserObjectTreeItem *)FWeakObjectPtr::Get(&local_res10);
    bVar3 = UDS_UserObjectTreeItem::IsItemExpanded(pUVar4);
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    UTreeView::SetItemExpansion((UTreeView *)this,pUVar5,bVar3);
    pUVar4 = (UDS_UserObjectTreeItem *)FWeakObjectPtr::Get(&local_res10);
    pTVar6 = UDS_UserObjectTreeItem::GetChildItems(pUVar4);
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    iVar2 = pTVar6->ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar6->ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectTreeItem>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_res18);
      }
      if (pFVar7 == pFVar1) break;
      pUVar5 = *(UObject **)pFVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar5 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar5 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar5);
          }
        }
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_res18 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res18);
      UpdateItemExpansion(this,(TWeakObjectPtr<UDS_UserObjectTreeItem,FWeakObjectPtr>)local_res20);
      pFVar7 = pFVar7 + 8;
    }
  }
  return;
}

