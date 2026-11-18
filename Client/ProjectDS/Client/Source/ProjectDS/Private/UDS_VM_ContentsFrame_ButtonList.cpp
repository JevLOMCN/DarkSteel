// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b628d40

UClass * __cdecl UDS_VM_ContentsFrame_ButtonList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ContentsFrame_ButtonList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ContentsFrame_ButtonList",
               &Z_Registration_Info_UClass_UDS_VM_ContentsFrame_ButtonList.InnerSingleton,
               StaticRegisterNativesUDS_VM_ContentsFrame_ButtonList,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ContentsFrame_ButtonList>,
               InternalVTableHelperCtorCaller<UDS_VM_ContentsFrame_ButtonList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ContentsFrame_ButtonList.InnerSingleton;
}

// UDS_VM_ContentsFrame_ButtonList @ 14b62d550

UDS_VM_ContentsFrame_ButtonList * __thiscall
UDS_VM_ContentsFrame_ButtonList::UDS_VM_ContentsFrame_ButtonList
          (UDS_VM_ContentsFrame_ButtonList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ContentsFrame_ButtonList__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->EntryFocusEventField).FocusIndex = 0;
  (this->EntryFocusEventField).Offset = 0.0;
  return this;
}

// UDS_VM_ContentsFrame_ButtonList @ 14b62d5b0

UDS_VM_ContentsFrame_ButtonList * __thiscall
UDS_VM_ContentsFrame_ButtonList::UDS_VM_ContentsFrame_ButtonList
          (UDS_VM_ContentsFrame_ButtonList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ContentsFrame_ButtonList__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->EntryFocusEventField).FocusIndex = 0;
  (this->EntryFocusEventField).Offset = 0.0;
  return this;
}

// ~UDS_VM_ContentsFrame_ButtonList @ 14b62f260

void __thiscall
UDS_VM_ContentsFrame_ButtonList::~UDS_VM_ContentsFrame_ButtonList
          (UDS_VM_ContentsFrame_ButtonList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ContentsFrame_ButtonList__6B_;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b631bb0

IClassDescriptor * __thiscall
UDS_VM_ContentsFrame_ButtonList::GetFieldNotificationDescriptor
          (UDS_VM_ContentsFrame_ButtonList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ContentsFrame_ButtonList::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6328a0

UClass * __cdecl UDS_VM_ContentsFrame_ButtonList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ContentsFrame_ButtonList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ContentsFrame_ButtonList",
               &Z_Registration_Info_UClass_UDS_VM_ContentsFrame_ButtonList.InnerSingleton,
               StaticRegisterNativesUDS_VM_ContentsFrame_ButtonList,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ContentsFrame_ButtonList>,
               InternalVTableHelperCtorCaller<UDS_VM_ContentsFrame_ButtonList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ContentsFrame_ButtonList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ContentsFrame_ButtonList @ 14b6330b0

void __cdecl
UDS_VM_ContentsFrame_ButtonList::StaticRegisterNativesUDS_VM_ContentsFrame_ButtonList(void)

{
  return;
}

// OnSetViewModel @ 14bdda150

void __thiscall
UDS_VM_ContentsFrame_ButtonList::OnSetViewModel
          (UDS_VM_ContentsFrame_ButtonList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

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
    SetContentsTabFrameList(this,&(local_28.Object)->TabFrameID);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetContentsTabFrameList @ 14bde47b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ContentsFrame_ButtonList::SetContentsTabFrameList
          (UDS_VM_ContentsFrame_ButtonList *this,EDS_ContentsTabFrameType *param_1)

{
  int *piVar1;
  FDS_ContentsTabFrameTableRow *pFVar2;
  code *pcVar3;
  FDS_ViewModelContext_ContentsFrameButton *pFVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UDS_LogManager *pUVar9;
  FDS_ContentsTabFrameTableRow *pFVar10;
  UDS_UserObjectListItem *pUVar11;
  uint uVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  atomic<int> *paVar16;
  uint uVar17;
  undefined1 auStackY_358 [32];
  undefined1 local_328;
  undefined1 local_327;
  FIdentityFunctor local_326 [6];
  ForAnyElementType local_320;
  uint local_318;
  uint local_314;
  uint local_310;
  EDS_ContentsTabFrameType *local_308;
  TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_> local_300;
  FWeakObjectPtr local_2f0;
  UDS_UserObjectListItem *local_2e8;
  FDS_EntryBindingEventField *local_2e0;
  FDS_ContentsTabFrameTableRow *local_2d8;
  UDS_VM_ContentsFrame_ButtonList *local_2d0;
  FScriptContainerElement *local_2c8;
  FName local_2b8;
  int local_2b0;
  FName local_2a8;
  int local_2a0;
  TSharedPtr<FDS_ViewModelContext_ContentsFrameButton,1> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_308 = param_1;
  local_2d0 = this;
  TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)&local_2f0);
  bVar6 = FWeakObjectPtr::IsValid(&local_2f0);
  if (bVar6) {
    pFVar10 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)*param_1,true);
    local_2d8 = pFVar10;
    if (pFVar10 == (FDS_ContentsTabFrameTableRow *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar9 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_ContentsFrame_ButtonList::SetContentsTabFrameList",0x38,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Warning,local_168.Ptr,0x27,L"contentsTabFrameTableRow is nullptr.");
      FVar14.Data = (FScriptContainerElement *)local_168._padding_;
    }
    else {
      local_2e0 = &this->EntryBindingEventField;
      uVar17 = 0;
      FDS_EntryBindingEventField::Reset(local_2e0);
      FDS_ContentsTabFrameTableRow::GetAll(&local_300);
      iVar8 = local_300.ArrayNum;
      local_320.Data = (FScriptContainerElement *)0x0;
      local_318 = 0;
      local_314 = 0;
      pFVar15 = local_300.AllocatorInstance.Data + (longlong)local_300.ArrayNum * 8;
      FVar14.Data = local_300.AllocatorInstance.Data;
      uVar12 = uVar17;
      while( true ) {
        uVar7 = uVar12;
        if (local_300.ArrayNum != iVar8) {
          local_328 = 0;
          `TCheckedPointerIterator<FDS_ContentsTabFrameTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_328);
          uVar7 = local_318;
        }
        if (FVar14.Data == pFVar15) break;
        uVar12 = uVar7;
        if ((*(int *)(*(longlong *)FVar14.Data + 0x24) == pFVar10->MenuOrder) &&
           (*(int *)(*(longlong *)FVar14.Data + 0x2c) == 0)) {
          if (uVar7 == local_314) {
            uVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_320,(int *)&local_314);
          }
          uVar12 = uVar7 + 1;
          *(longlong *)(local_320.Data + (longlong)(int)uVar7 * 8) = *(longlong *)FVar14.Data;
          local_318 = uVar12;
        }
        FVar14.Data = FVar14.Data + 8;
      }
      AlgoImpl::
      StableSortInternal<FDS_ContentsTabFrameTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTabFrameTableRow_const_*,_FDS_ContentsTabFrameTableRow::GetMainTabList_::__l2::<lambda_1>_>_>
                ((FDS_ContentsTabFrameTableRow **)local_320.Data,uVar7,local_326[0],
                 (<lambda_1> *)local_326);
      if (local_300.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.AllocatorInstance.Data);
      }
      uVar13 = (ulonglong)(int)local_318;
      local_310 = local_318;
      pFVar15 = local_320.Data + uVar13 * 8;
      FVar14.Data = local_320.Data;
      local_2c8 = pFVar15;
      while( true ) {
        if (local_318 != (uint)uVar13) {
          local_327 = 0;
          `TCheckedPointerIterator<FDS_ContentsTabFrameTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_327);
        }
        if (FVar14.Data == pFVar15) break;
        if (*(FDS_ContentsTabFrameTableRow **)FVar14.Data != (FDS_ContentsTabFrameTableRow *)0x0) {
          MakeContext<FDS_ViewModelContext_ContentsFrameButton>(&local_298);
          pFVar4 = local_298.Object;
          if ((local_298.Object == (FDS_ViewModelContext_ContentsFrameButton *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined4 *)&pFVar4->_padding_ = 0x3e;
          pFVar4->TabFrameID = (*(FDS_ContentsTabFrameTableRow **)FVar14.Data)->ID;
          pFVar2 = *(FDS_ContentsTabFrameTableRow **)FVar14.Data;
          if (((pFVar10->SubTab < 1) || (pFVar2->SubTab != 0)) ||
             (pFVar2->MainTab != pFVar10->MainTab)) {
            pFVar4->IsSelected = pFVar2->ID == *local_308;
          }
          else {
            pFVar4->IsSelected = true;
          }
          if (pFVar4->IsSelected != false) {
            (this->EntryFocusEventField).FocusIndex = uVar17;
          }
          pUVar11 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar11 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar11);
          }
          FVar5.ReferenceController = local_298.SharedReferenceCount.ReferenceController;
          if (local_298.SharedReferenceCount.ReferenceController ==
              (TReferenceControllerBase<1> *)0x0) {
            paVar16 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar16 = &(local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            LOCK();
            *paVar16 = (atomic<int>)((int)*paVar16 + 1);
            UNLOCK();
          }
          iVar8 = (pUVar11->ViewModelContextArray).ArrayNum;
          piVar1 = &(pUVar11->ViewModelContextArray).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(pUVar11->ViewModelContextArray).AllocatorInstance,piVar1);
          }
          (pUVar11->ViewModelContextArray).ArrayNum = iVar8 + 1;
          pFVar15 = (pUVar11->ViewModelContextArray).AllocatorInstance.Data;
          *(FDS_ViewModelContext_ContentsFrameButton **)(pFVar15 + (longlong)iVar8 * 0x10) = pFVar4;
          *(TReferenceControllerBase<1> **)(pFVar15 + (longlong)iVar8 * 0x10 + 8) =
               FVar5.ReferenceController;
          if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar16 = (atomic<int>)((int)*paVar16 + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar5.ReferenceController);
          local_2e8 = pUVar11;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar11 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar11);
          }
          FDS_EntryBindingEventField::Add(local_2e0,(TObjectPtr<UDS_UserObjectListItem>)&local_2e8);
          uVar17 = uVar17 + 1;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar5.ReferenceController);
          pFVar15 = local_2c8;
          this = local_2d0;
          pFVar10 = local_2d8;
        }
        uVar13 = (ulonglong)local_310;
        FVar14.Data = FVar14.Data + 8;
      }
      local_2b0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
      local_2b8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2b8);
      local_2a0 = FFieldNotificationClassDescriptor::EntryFocusEventField.BitNumber;
      local_2a8 = FFieldNotificationClassDescriptor::EntryFocusEventField.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2a8);
      FVar14.Data = local_320.Data;
    }
    if (FVar14.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar14.Data);
    }
  }
  else {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_VM_ContentsFrame_ButtonList::SetContentsTabFrameList",0x38,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_288.Ptr,0x20,L"contentDataSet is nullptr.");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
  }
  return;
}

