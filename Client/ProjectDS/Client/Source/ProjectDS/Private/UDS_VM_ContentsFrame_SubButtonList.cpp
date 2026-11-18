// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b628fa0

UClass * __cdecl UDS_VM_ContentsFrame_SubButtonList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ContentsFrame_SubButtonList.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ContentsFrame_SubButtonList",
               &Z_Registration_Info_UClass_UDS_VM_ContentsFrame_SubButtonList.InnerSingleton,
               StaticRegisterNativesUDS_VM_ContentsFrame_SubButtonList,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ContentsFrame_SubButtonList>,
               InternalVTableHelperCtorCaller<UDS_VM_ContentsFrame_SubButtonList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ContentsFrame_SubButtonList.InnerSingleton;
}

// UDS_VM_ContentsFrame_SubButtonList @ 14b62d610

UDS_VM_ContentsFrame_SubButtonList * __thiscall
UDS_VM_ContentsFrame_SubButtonList::UDS_VM_ContentsFrame_SubButtonList
          (UDS_VM_ContentsFrame_SubButtonList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ContentsFrame_SubButtonList__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->EntryFocusEventField).FocusIndex = 0;
  (this->EntryFocusEventField).Offset = 0.0;
  return this;
}

// UDS_VM_ContentsFrame_SubButtonList @ 14b62d670

UDS_VM_ContentsFrame_SubButtonList * __thiscall
UDS_VM_ContentsFrame_SubButtonList::UDS_VM_ContentsFrame_SubButtonList
          (UDS_VM_ContentsFrame_SubButtonList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ContentsFrame_SubButtonList__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->EntryFocusEventField).FocusIndex = 0;
  (this->EntryFocusEventField).Offset = 0.0;
  return this;
}

// ~UDS_VM_ContentsFrame_SubButtonList @ 14b62f2b0

void __thiscall
UDS_VM_ContentsFrame_SubButtonList::~UDS_VM_ContentsFrame_SubButtonList
          (UDS_VM_ContentsFrame_SubButtonList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ContentsFrame_SubButtonList__6B_;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b631c20

IClassDescriptor * __thiscall
UDS_VM_ContentsFrame_SubButtonList::GetFieldNotificationDescriptor
          (UDS_VM_ContentsFrame_SubButtonList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ContentsFrame_SubButtonList::FFieldNotificationClassDescriptor::GetDescriptor'
             ::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b632960

UClass * __cdecl UDS_VM_ContentsFrame_SubButtonList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ContentsFrame_SubButtonList.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ContentsFrame_SubButtonList",
               &Z_Registration_Info_UClass_UDS_VM_ContentsFrame_SubButtonList.InnerSingleton,
               StaticRegisterNativesUDS_VM_ContentsFrame_SubButtonList,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ContentsFrame_SubButtonList>,
               InternalVTableHelperCtorCaller<UDS_VM_ContentsFrame_SubButtonList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ContentsFrame_SubButtonList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ContentsFrame_SubButtonList @ 14b6330c0

void __cdecl
UDS_VM_ContentsFrame_SubButtonList::StaticRegisterNativesUDS_VM_ContentsFrame_SubButtonList(void)

{
  return;
}

// OnSetViewModel @ 14bdda1e0

void __thiscall
UDS_VM_ContentsFrame_SubButtonList::OnSetViewModel
          (UDS_VM_ContentsFrame_SubButtonList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FDS_ViewModelContext_ContentsFrameButtonList,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ContentsFrameButtonList>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_ContentsFrameButtonList *)0x0) {
    SetContentsSubTabFrameList(this,&(local_28.Object)->TabFrameID);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetContentsSubTabFrameList @ 14bde40a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ContentsFrame_SubButtonList::SetContentsSubTabFrameList
          (UDS_VM_ContentsFrame_SubButtonList *this,EDS_ContentsTabFrameType *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  FDS_ViewModelContext_ContentsFrameButton *pFVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UDS_LogManager *pUVar11;
  FDS_ContentsTabFrameTableRow *pFVar12;
  UDS_UserObjectListItem *pUVar13;
  uint uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  FName *pFVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  atomic<int> *paVar21;
  undefined1 auStackY_5f8 [32];
  undefined1 local_5b8;
  undefined1 local_5b7;
  undefined1 local_5b6 [6];
  ForAnyElementType local_5b0;
  uint local_5a8;
  uint local_5a4;
  uint local_5a0;
  FScriptContainerElement *local_598;
  UDS_VM_ContentsFrame_SubButtonList *local_590;
  TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_> local_588;
  TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_> local_578;
  FWeakObjectPtr local_568;
  EDS_ContentsTabFrameType *local_560;
  UDS_UserObjectListItem *local_558 [2];
  FName local_548;
  int local_540;
  FName local_538;
  int local_530;
  FName local_528;
  int local_520;
  FName local_518;
  int local_510;
  FName local_508;
  int local_500;
  FName local_4f8;
  int local_4f0;
  FName local_4e8;
  int local_4e0;
  TSharedPtr<FDS_ViewModelContext_ContentsFrameButton,1> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  local_590 = this;
  local_560 = param_1;
  TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)&local_568);
  bVar8 = FWeakObjectPtr::IsValid(&local_568);
  if (!bVar8) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_4c8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4c8,"UDS_VM_ContentsFrame_SubButtonList::SetContentsSubTabFrameList",0x3e,Yes)
    ;
    UDS_LogManager::PrintLog(pUVar11,1,Warning,local_4c8.Ptr,0x20,L"contentDataSet is nullptr.");
    if ((void *)local_4c8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_4c8._padding_);
    return;
  }
  pFVar12 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)*param_1,true);
  if (pFVar12 == (FDS_ContentsTabFrameTableRow *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_3a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_3a8,"UDS_VM_ContentsFrame_SubButtonList::SetContentsSubTabFrameList",0x3e,Yes)
    ;
    UDS_LogManager::PrintLog
              (pUVar11,1,Warning,local_3a8.Ptr,0x27,
               L"contentsTabFrameTableRow is nullptr. TabFrameID - %d");
    if ((void *)local_3a8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_3a8._padding_);
    return;
  }
  FDS_ContentsTabFrameTableRow::GetAll(&local_588);
  iVar10 = local_588.ArrayNum;
  pFVar19 = local_588.AllocatorInstance.Data + (longlong)iVar10 * 8;
  uVar15 = local_588._8_8_;
  FVar20.Data = local_588.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar15 != iVar10) {
      local_5b8 = 0;
      `TCheckedPointerIterator<FDS_ContentsTabFrameTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_5b8);
      uVar15 = local_588._8_8_;
    }
    if (FVar20.Data == pFVar19) {
      if (local_588.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_588.AllocatorInstance.Data);
      }
      goto LAB_14bde46e9;
    }
    lVar3 = *(longlong *)FVar20.Data;
    if (((*(int *)(lVar3 + 0x24) == pFVar12->MenuOrder) &&
        (*(int *)(lVar3 + 0x28) == pFVar12->MainTab)) && (*(int *)(lVar3 + 0x2c) == 0)) break;
    FVar20.Data = FVar20.Data + 8;
  }
  if (local_588.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.AllocatorInstance.Data);
  }
  if (lVar3 == 0) {
LAB_14bde46e9:
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_ContentsFrame_SubButtonList::SetContentsSubTabFrameList",0x3e,Yes)
    ;
    UDS_LogManager::PrintLog
              (pUVar11,1,Warning,local_168.Ptr,0x2e,L"mainTabFrameTableRow is nullptr.");
    FVar20.Data = (FScriptContainerElement *)local_168._padding_;
  }
  else {
    plVar2 = &this->_padding_;
    if (*(char *)(lVar3 + 0x20) == '\x01') {
      this->Vis_Vertical = Collapsed;
      local_540 = FFieldNotificationClassDescriptor::Vis_Vertical.BitNumber;
      local_548 = FFieldNotificationClassDescriptor::Vis_Vertical.FieldName;
      (**(code **)(this->_padding_ + 0x38))(plVar2,&local_548);
      this->Vis_Horizontal = SelfHitTestInvisible;
      pFVar17 = &local_538;
      local_538 = FFieldNotificationClassDescriptor::Vis_Horizontal.FieldName;
      local_530 = FFieldNotificationClassDescriptor::Vis_Horizontal.BitNumber;
    }
    else {
      if (*(char *)(lVar3 + 0x20) != '\x02') {
        this->Vis_Vertical = Collapsed;
        local_4f0 = FFieldNotificationClassDescriptor::Vis_Vertical.BitNumber;
        local_4f8 = FFieldNotificationClassDescriptor::Vis_Vertical.FieldName;
        (**(code **)(this->_padding_ + 0x38))(plVar2,&local_4f8);
        this->Vis_Horizontal = Collapsed;
        local_4e0 = FFieldNotificationClassDescriptor::Vis_Horizontal.BitNumber;
        local_4e8 = FFieldNotificationClassDescriptor::Vis_Horizontal.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4e8);
        return;
      }
      this->Vis_Vertical = SelfHitTestInvisible;
      local_520 = FFieldNotificationClassDescriptor::Vis_Vertical.BitNumber;
      local_528 = FFieldNotificationClassDescriptor::Vis_Vertical.FieldName;
      (**(code **)(this->_padding_ + 0x38))(plVar2,&local_528);
      this->Vis_Horizontal = Collapsed;
      pFVar17 = &local_518;
      local_518 = FFieldNotificationClassDescriptor::Vis_Horizontal.FieldName;
      local_510 = FFieldNotificationClassDescriptor::Vis_Horizontal.BitNumber;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar17);
    FDS_ContentsTabFrameTableRow::GetAll(&local_578);
    iVar10 = local_578.ArrayNum;
    uVar14 = 0;
    local_5a8 = 0;
    local_5b0.Data = (FScriptContainerElement *)0x0;
    local_5a4 = 0;
    pFVar19 = local_578.AllocatorInstance.Data + (longlong)local_578.ArrayNum * 8;
    FVar20.Data = local_578.AllocatorInstance.Data;
    while( true ) {
      uVar9 = uVar14;
      if (local_578.ArrayNum != iVar10) {
        local_5b7 = 0;
        `TCheckedPointerIterator<FDS_ContentsTabFrameTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_5b7);
        uVar9 = local_5a8;
      }
      if (FVar20.Data == pFVar19) break;
      lVar4 = *(longlong *)FVar20.Data;
      uVar14 = uVar9;
      if (((*(int *)(lVar4 + 0x24) == *(int *)(lVar3 + 0x24)) &&
          (*(int *)(lVar4 + 0x28) == *(int *)(lVar3 + 0x28))) && (*(int *)(lVar4 + 0x2c) != 0)) {
        if (uVar9 == local_5a4) {
          uVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_5b0,(int *)&local_5a4);
        }
        uVar14 = uVar9 + 1;
        *(longlong *)(local_5b0.Data + (longlong)(int)uVar9 * 8) = *(longlong *)FVar20.Data;
        local_5a8 = uVar14;
      }
      FVar20.Data = FVar20.Data + 8;
    }
    if (local_578.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.AllocatorInstance.Data);
    }
    FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
    uVar16 = (ulonglong)(int)local_5a8;
    local_5a0 = local_5a8;
    local_598 = local_5b0.Data + uVar16 * 8;
    uVar18 = uVar16;
    pFVar19 = local_598;
    FVar20.Data = local_5b0.Data;
    while( true ) {
      if ((int)uVar16 != (int)uVar18) {
        local_5b6[0] = 0;
        `TCheckedPointerIterator<FDS_ContentsTabFrameTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_5b6);
      }
      if (FVar20.Data == pFVar19) break;
      if (*(longlong *)FVar20.Data == 0) {
        pUVar11 = UDS_LogManager::GetInst();
        if (pUVar11 == (UDS_LogManager *)0x0) goto LAB_14bde4636;
        pUVar11 = UDS_LogManager::GetInst();
        local_288._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,"UDS_VM_ContentsFrame_SubButtonList::SetContentsSubTabFrameList",0x3e,
                   Yes);
        UDS_LogManager::PrintLog
                  (pUVar11,1,Warning,local_288.Ptr,0x49,L"contentsTabFrameTableRow is nullptr.");
        pFVar19 = local_598;
        if ((void *)local_288._padding_ == (void *)0x0) goto LAB_14bde4636;
        FMemory::Free((void *)local_288._padding_);
        uVar16 = (ulonglong)local_5a8;
        FVar20.Data = FVar20.Data + 8;
        uVar18 = (ulonglong)local_5a0;
        pFVar19 = local_598;
      }
      else {
        MakeContext<FDS_ViewModelContext_ContentsFrameButton>(&local_4d8);
        pFVar6 = local_4d8.Object;
        if ((local_4d8.Object == (FDS_ViewModelContext_ContentsFrameButton *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)&pFVar6->_padding_ = 0x3e;
        pFVar6->TabFrameID = *(EDS_ContentsTabFrameType *)(*(longlong *)FVar20.Data + 8);
        pFVar6->IsSelected =
             *local_560 == *(EDS_ContentsTabFrameType *)(*(longlong *)FVar20.Data + 8);
        pUVar13 = NewObject<UDS_UserObjectListItem>((UObject *)local_590);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar13 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        FVar7.ReferenceController = local_4d8.SharedReferenceCount.ReferenceController;
        if (local_4d8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0
           ) {
          paVar21 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar21 = &(local_4d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          LOCK();
          *paVar21 = (atomic<int>)((int)*paVar21 + 1);
          UNLOCK();
        }
        iVar10 = (pUVar13->ViewModelContextArray).ArrayNum;
        piVar1 = &(pUVar13->ViewModelContextArray).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(pUVar13->ViewModelContextArray).AllocatorInstance,piVar1);
        }
        (pUVar13->ViewModelContextArray).ArrayNum = iVar10 + 1;
        pFVar19 = (pUVar13->ViewModelContextArray).AllocatorInstance.Data;
        *(FDS_ViewModelContext_ContentsFrameButton **)(pFVar19 + (longlong)iVar10 * 0x10) = pFVar6;
        *(TReferenceControllerBase<1> **)(pFVar19 + (longlong)iVar10 * 0x10 + 8) =
             FVar7.ReferenceController;
        if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar21 = (atomic<int>)((int)*paVar21 + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar7.ReferenceController);
        local_558[0] = pUVar13;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar13 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        FDS_EntryBindingEventField::Add
                  (&local_590->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)local_558)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar7.ReferenceController);
        pFVar19 = local_598;
LAB_14bde4636:
        uVar16 = (ulonglong)local_5a8;
        FVar20.Data = FVar20.Data + 8;
        uVar18 = (ulonglong)local_5a0;
      }
    }
    local_500 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
    local_508 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
    (**(code **)(local_590->_padding_ + 0x38))(&local_590->_padding_,&local_508);
    FVar20.Data = local_5b0.Data;
  }
  if (FVar20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar20.Data);
  }
  return;
}

// SetVis_SubHorizontal @ 14bdea290

void __thiscall
UDS_VM_ContentsFrame_SubButtonList::SetVis_SubHorizontal
          (UDS_VM_ContentsFrame_SubButtonList *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->Vis_Horizontal = *param_1;
  local_10 = FFieldNotificationClassDescriptor::Vis_Horizontal.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_Horizontal.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVis_SubVertical @ 14bdea2d0

void __thiscall
UDS_VM_ContentsFrame_SubButtonList::SetVis_SubVertical
          (UDS_VM_ContentsFrame_SubButtonList *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->Vis_Vertical = *param_1;
  local_10 = FFieldNotificationClassDescriptor::Vis_Vertical.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_Vertical.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

