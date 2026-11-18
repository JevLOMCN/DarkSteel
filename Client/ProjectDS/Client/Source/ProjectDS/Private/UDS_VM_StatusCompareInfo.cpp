// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b6e2a00

UClass * __cdecl UDS_VM_StatusCompareInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_StatusCompareInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_StatusCompareInfo",
               &Z_Registration_Info_UClass_UDS_VM_StatusCompareInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_StatusCompareInfo,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_StatusCompareInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_StatusCompareInfo>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_StatusCompareInfo.InnerSingleton;
}

// UDS_VM_StatusCompareInfo @ 14b6e63f0

UDS_VM_StatusCompareInfo * __thiscall
UDS_VM_StatusCompareInfo::UDS_VM_StatusCompareInfo
          (UDS_VM_StatusCompareInfo *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StatusCompareInfo__6B_;
  (this->StatusCompareListEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StatusCompareListEventField).UserObjectList.ArrayNum = 0;
  (this->StatusCompareListEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_StatusCompareInfo @ 14b6e6440

UDS_VM_StatusCompareInfo * __thiscall
UDS_VM_StatusCompareInfo::UDS_VM_StatusCompareInfo
          (UDS_VM_StatusCompareInfo *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StatusCompareInfo__6B_;
  (this->StatusCompareListEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StatusCompareListEventField).UserObjectList.ArrayNum = 0;
  (this->StatusCompareListEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_StatusCompareInfo @ 14b6e7550

void __thiscall UDS_VM_StatusCompareInfo::~UDS_VM_StatusCompareInfo(UDS_VM_StatusCompareInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StatusCompareInfo__6B_;
  pFVar1 = (this->StatusCompareListEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6e9ad0

IClassDescriptor * __thiscall
UDS_VM_StatusCompareInfo::GetFieldNotificationDescriptor(UDS_VM_StatusCompareInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_StatusCompareInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ea780

UClass * __cdecl UDS_VM_StatusCompareInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_StatusCompareInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_StatusCompareInfo",
               &Z_Registration_Info_UClass_UDS_VM_StatusCompareInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_StatusCompareInfo,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_StatusCompareInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_StatusCompareInfo>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_StatusCompareInfo.InnerSingleton;
}

// ShouldSaveViewModelContext @ 14b6eab50

bool __thiscall UDS_VM_StatusCompareInfo::ShouldSaveViewModelContext(UDS_VM_StatusCompareInfo *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_StatusCompareInfo @ 14b6eacd0

void __cdecl UDS_VM_StatusCompareInfo::StaticRegisterNativesUDS_VM_StatusCompareInfo(void)

{
  return;
}

// OnSetViewModel @ 14bdddd70

void __thiscall
UDS_VM_StatusCompareInfo::OnSetViewModel
          (UDS_VM_StatusCompareInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  int iVar6;
  ulonglong uVar7;
  UDS_UserObjectListItem *pUVar8;
  atomic<int> *paVar9;
  FName FVar10;
  undefined1 local_res18 [8];
  uint local_res20;
  UDS_UserObjectListItem *local_88 [2];
  FName local_78;
  int local_70;
  TSharedPtr<FDS_ViewModelContext_StatusCompareInfo,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_58);
  local_48.Object = param_1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_StatusCompareInfo>(&local_68,&local_48);
  if (local_68.Object == (FDS_ViewModelContext_StatusCompareInfo *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  else {
    FDS_EntryBindingEventField::Reset(&this->StatusCompareListEventField);
    local_res20 = ((local_68.Object)->StatusCompareList).ArrayNum;
    uVar7 = (ulonglong)(int)local_res20;
    FVar10 = (FName)((local_68.Object)->StatusCompareList).AllocatorInstance.Data;
    local_78 = (FName)((longlong)FVar10 + uVar7 * 0x10);
    while( true ) {
      FVar5 = local_78;
      if (((local_68.Object)->StatusCompareList).ArrayNum != (int)uVar7) {
        `TCheckedPointerIterator<TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (FVar10 == FVar5) break;
      pUVar8 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)FVar10 + 8);
      uVar3 = *(undefined8 *)FVar10;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        paVar9 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar9 = &pTVar2->SharedReferenceCount;
        LOCK();
        *paVar9 = (atomic<int>)((int)*paVar9 + 1);
        UNLOCK();
      }
      iVar6 = (pUVar8->ViewModelContextArray).ArrayNum;
      piVar1 = &(pUVar8->ViewModelContextArray).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(pUVar8->ViewModelContextArray).AllocatorInstance,piVar1);
      }
      (pUVar8->ViewModelContextArray).ArrayNum = iVar6 + 1;
      pFVar4 = (pUVar8->ViewModelContextArray).AllocatorInstance.Data;
      *(undefined8 *)(pFVar4 + (longlong)iVar6 * 0x10) = uVar3;
      *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar6 * 0x10 + 8) = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar9 = (atomic<int>)((int)*paVar9 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      local_88[0] = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      FDS_EntryBindingEventField::Add
                (&this->StatusCompareListEventField,(TObjectPtr<UDS_UserObjectListItem>)local_88);
      uVar7 = (ulonglong)local_res20;
      FVar10 = (FName)((longlong)FVar10 + 0x10);
    }
    local_70 = FFieldNotificationClassDescriptor::StatusCompareListEventField.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::StatusCompareListEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

