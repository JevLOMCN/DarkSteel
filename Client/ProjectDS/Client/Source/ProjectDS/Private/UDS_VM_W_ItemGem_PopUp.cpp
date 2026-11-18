// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b73ec40

UClass * __cdecl UDS_VM_W_ItemGem_PopUp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_ItemGem_PopUp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_ItemGem_PopUp",
               &Z_Registration_Info_UClass_UDS_VM_W_ItemGem_PopUp.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_ItemGem_PopUp,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_ItemGem_PopUp>,
               InternalVTableHelperCtorCaller<UDS_VM_W_ItemGem_PopUp>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_ItemGem_PopUp.InnerSingleton;
}

// UDS_VM_W_ItemGem_PopUp @ 14b741bd0

UDS_VM_W_ItemGem_PopUp * __thiscall
UDS_VM_W_ItemGem_PopUp::UDS_VM_W_ItemGem_PopUp(UDS_VM_W_ItemGem_PopUp *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_W_ItemGem_PopUp__6B_;
  return this;
}

// UDS_VM_W_ItemGem_PopUp @ 14b741c10

UDS_VM_W_ItemGem_PopUp * __thiscall
UDS_VM_W_ItemGem_PopUp::UDS_VM_W_ItemGem_PopUp
          (UDS_VM_W_ItemGem_PopUp *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_W_ItemGem_PopUp__6B_;
  return this;
}

// ~UDS_VM_W_ItemGem_PopUp @ 14b742fb0

void __thiscall UDS_VM_W_ItemGem_PopUp::~UDS_VM_W_ItemGem_PopUp(UDS_VM_W_ItemGem_PopUp *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_W_ItemGem_PopUp__6B_;
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b744f10

IClassDescriptor * __thiscall
UDS_VM_W_ItemGem_PopUp::GetFieldNotificationDescriptor(UDS_VM_W_ItemGem_PopUp *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_ItemGem_PopUp::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b745800

UClass * __cdecl UDS_VM_W_ItemGem_PopUp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_ItemGem_PopUp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_ItemGem_PopUp",
               &Z_Registration_Info_UClass_UDS_VM_W_ItemGem_PopUp.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_ItemGem_PopUp,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_ItemGem_PopUp>,
               InternalVTableHelperCtorCaller<UDS_VM_W_ItemGem_PopUp>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_ItemGem_PopUp.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_ItemGem_PopUp @ 14b745d80

void __cdecl UDS_VM_W_ItemGem_PopUp::StaticRegisterNativesUDS_VM_W_ItemGem_PopUp(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_ItemGem_PopUp_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGemSlotList @ 14b746e00

void __cdecl UDS_VM_W_ItemGem_PopUp::execGemSlotList(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GemSlotList((UDS_VM_W_ItemGem_PopUp *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->UserObjectList).AllocatorInstance.Data;
    (pFVar1->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->UserObjectList).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->UserObjectList).ArrayMax;
    (pFVar1->UserObjectList).ArrayNum = 0;
    (pFVar1->UserObjectList).ArrayMax = 0;
  }
  if (local_18.UserObjectList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.UserObjectList.AllocatorInstance.Data);
  }
  return;
}

// execOnClickedCancel @ 14b747660

void __cdecl
UDS_VM_W_ItemGem_PopUp::execOnClickedCancel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_ButtonEventField *pFVar2;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  
  local_30[0] = '\0';
  local_30[1] = false;
  local_30[2] = false;
  local_30[3] = false;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_30);
  }
  pFVar2 = (FDS_ButtonEventField *)local_30;
  if ((FDS_ButtonEventField *)param_2->MostRecentPropertyAddress != (FDS_ButtonEventField *)0x0) {
    pFVar2 = (FDS_ButtonEventField *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickedCancel((UDS_VM_W_ItemGem_PopUp *)param_1,pFVar2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// execOnClickedEquip @ 14b747780

void __cdecl
UDS_VM_W_ItemGem_PopUp::execOnClickedEquip(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_ButtonEventField *pFVar2;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  
  local_30[0] = '\0';
  local_30[1] = false;
  local_30[2] = false;
  local_30[3] = false;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_30);
  }
  pFVar2 = (FDS_ButtonEventField *)local_30;
  if ((FDS_ButtonEventField *)param_2->MostRecentPropertyAddress != (FDS_ButtonEventField *)0x0) {
    pFVar2 = (FDS_ButtonEventField *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickedEquip((UDS_VM_W_ItemGem_PopUp *)param_1,pFVar2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// GemSlotList @ 14be1fdf0

FDS_EntryBindingEventField * __thiscall
UDS_VM_W_ItemGem_PopUp::GemSlotList
          (UDS_VM_W_ItemGem_PopUp *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  UDS_M_ItemGem_GemSocket *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FDS_EntryBindingEventField *pFVar5;
  UDS_M_ItemGemPopup *this_01;
  UObject *pUVar6;
  UDS_UserObjectListItem *this_02;
  undefined8 *puVar7;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> *pTVar8;
  ulonglong uVar9;
  atomic<unsigned_char> *paVar10;
  ForAnyElementType FVar11;
  int iVar12;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  UDS_UserObjectListItem *local_res20;
  TArray<TObjectPtr<UDS_M_ItemGem_GemSocket>,TSizedDefaultAllocator<32>_> local_a8;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> local_58;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> local_48;
  
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  pUVar6 = *(UObject **)&this->field_0xa0;
  if (pUVar6 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_ItemGemPopup_NoRegister();
    iVar12 = (int)pUVar4->_padding_;
    if ((iVar12 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar12 * 8) ==
        &pUVar4->_padding_)) goto LAB_14be1fe40;
  }
  pUVar6 = (UObject *)0x0;
LAB_14be1fe40:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9059055525936758867>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_PopUp.cpp"
                       ,0x53,"false");
    if (!bVar3) {
      return __return_storage_ptr__;
    }
    pcVar2 = (code *)swi(3);
    pFVar5 = (FDS_EntryBindingEventField *)(*pcVar2)();
    return pFVar5;
  }
  this_01 = (UDS_M_ItemGemPopup *)FWeakObjectPtr::Get(&local_res10);
  UDS_M_ItemGemPopup::GetGemSocketSlotModelList(this_01,&local_a8);
  iVar12 = local_a8.ArrayNum;
  uVar9 = (ulonglong)local_a8.ArrayNum;
  pFVar1 = local_a8.AllocatorInstance.Data + uVar9 * 8;
  FVar11.Data = local_a8.AllocatorInstance.Data;
  do {
    if ((uint)uVar9 != iVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDS_M_ItemGem_GemSocket>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar11.Data == pFVar1) goto LAB_14be200a0;
    this_00 = *(UDS_M_ItemGem_GemSocket **)FVar11.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_M_ItemGem_GemSocket *)0x0) goto LAB_14be20073;
    }
    else {
      if (this_00 == (UDS_M_ItemGem_GemSocket *)0x0) {
LAB_14be20073:
        iVar12 = 0x57;
        paVar10 = &bGEnsureHasExecuted<9059055525936758871>;
        goto LAB_14be20080;
      }
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pUVar6 = GetTransientPackageAsObject();
    this_02 = NewObject<UDS_UserObjectListItem>(pUVar6);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_02 == (UDS_UserObjectListItem *)0x0) goto LAB_14be20064;
    }
    else {
      if (this_02 == (UDS_UserObjectListItem *)0x0) {
LAB_14be20064:
        iVar12 = 0x5a;
        paVar10 = &bGEnsureHasExecuted<9059055525936758874>;
LAB_14be20080:
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (paVar10,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_PopUp.cpp"
                           ,iVar12,"false");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FDS_EntryBindingEventField *)(*pcVar2)();
          return pFVar5;
        }
LAB_14be200a0:
        if (local_a8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_a8.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    puVar7 = (undefined8 *)(**(code **)(this_00->_padding_ + 0x310))(this_00,local_68);
    local_98.Object = (FDS_ViewModelContext *)*puVar7;
    local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar7[1];
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_UserObjectListItem::AddContext(this_02,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    pTVar8 = UDS_M_ItemGem_GemSocket::GetGemSlotContextViewModel(this_00,&local_58);
    local_88.Object = (FDS_ViewModelContext *)pTVar8->Object;
    local_88.SharedReferenceCount.ReferenceController =
         (pTVar8->SharedReferenceCount).ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_UserObjectListItem::AddContext(this_02,&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    pTVar8 = UDS_M_ItemGem_GemSocket::GetGemStatusContextViewModel(this_00,&local_48);
    local_78.Object = (FDS_ViewModelContext *)pTVar8->Object;
    local_78.SharedReferenceCount.ReferenceController =
         (pTVar8->SharedReferenceCount).ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_UserObjectListItem::AddContext(this_02,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    local_res20 = this_02;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    FDS_EntryBindingEventField::Add
              (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)&local_res20);
    uVar9 = (ulonglong)(uint)local_a8.ArrayNum;
    FVar11.Data = FVar11.Data + 8;
  } while( true );
}

// OnClickedCancel @ 14be2cbf0

void __thiscall
UDS_VM_W_ItemGem_PopUp::OnClickedCancel(UDS_VM_W_ItemGem_PopUp *this,FDS_ButtonEventField *param_1)

{
  UDS_ModelBase *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_ModelEventGemPopup *pUVar4;
  FWeakObjectPtr local_res8;
  UDS_ModelEventGemPopup *local_res18 [2];
  
  if (*(longlong *)&this->field_0xa0 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9059055525936758842>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_PopUp.cpp"
                       ,0x3a,"false");
    if (!bVar2) {
      return;
    }
  }
  else {
    pUVar3 = GetTransientPackageAsObject();
    pUVar4 = NewObject<UDS_ModelEventGemPopup>(pUVar3);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar4 != (UDS_ModelEventGemPopup *)0x0) goto LAB_14be2cc6f;
    }
    else if (pUVar4 != (UDS_ModelEventGemPopup *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14be2cc6f:
      pUVar4->Event = ClickedCancel;
      this_00 = *(UDS_ModelBase **)&this->field_0xa0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable((UObject *)pUVar4),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18[0] = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
      UDS_ModelBase::UpdateModel
                (this_00,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res8);
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9059055525936758845>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_PopUp.cpp"
                       ,0x3d,"false");
    if (!bVar2) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// OnClickedEquip @ 14be2cd40

void __thiscall
UDS_VM_W_ItemGem_PopUp::OnClickedEquip(UDS_VM_W_ItemGem_PopUp *this,FDS_ButtonEventField *param_1)

{
  UDS_ModelBase *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_ModelEventGemPopup *pUVar4;
  FWeakObjectPtr local_res8;
  UDS_ModelEventGemPopup *local_res18 [2];
  
  if (*(longlong *)&this->field_0xa0 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9059055525936758853>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_PopUp.cpp"
                       ,0x45,"false");
    if (!bVar2) {
      return;
    }
  }
  else {
    pUVar3 = GetTransientPackageAsObject();
    pUVar4 = NewObject<UDS_ModelEventGemPopup>(pUVar3);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar4 != (UDS_ModelEventGemPopup *)0x0) goto LAB_14be2cdbf;
    }
    else if (pUVar4 != (UDS_ModelEventGemPopup *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14be2cdbf:
      pUVar4->Event = ClickedEquip;
      this_00 = *(UDS_ModelBase **)&this->field_0xa0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable((UObject *)pUVar4),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18[0] = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
      UDS_ModelBase::UpdateModel
                (this_00,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res8);
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9059055525936758856>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_PopUp.cpp"
                       ,0x48,"false");
    if (!bVar2) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// OnSetViewModel @ 14be41740

void __thiscall
UDS_VM_W_ItemGem_PopUp::OnSetViewModel
          (UDS_VM_W_ItemGem_PopUp *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  code *pcVar2;
  FDS_ViewModelContext_CommonIconTextButton *pFVar3;
  FDS_ViewModelContext_CommonIconTextButton *pFVar4;
  bool bVar5;
  UClass *pUVar6;
  TWeakObjectPtr<UObject,FWeakObjectPtr> TVar7;
  UObject *pUVar8;
  undefined8 *puVar9;
  FObjectPtr_u_0 FVar10;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar11;
  UObject *pUVar12;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  longlong *local_res20;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_1d8;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_1c8;
  code *local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  UObject *local_1a8;
  UObject *local_1a0;
  UObject *local_198;
  FName local_190;
  FName local_188;
  FDS_Text local_180;
  FDS_Text local_130;
  TSharedPtr<FDS_ViewModelContext,1> local_e0;
  TSharedPtr<FDS_ViewModelContext,1> local_d0;
  TSharedPtr<FDS_ViewModelContext,1> local_c0;
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  TReferenceControllerBase<1> *local_98;
  undefined1 local_90 [8];
  TReferenceControllerBase<1> *local_88;
  code *local_78;
  longlong lStack_70;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  code *local_58;
  longlong lStack_50;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  local_e0.Object = param_1->Object;
  local_e0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_e0);
  if (*(longlong *)&this->field_0xa0 == 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9059055525936758807>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_PopUp.cpp"
                       ,0x17,"false");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14be41e66;
  }
  pUVar8 = *(UObject **)&this->field_0x20;
  pUVar12 = (UObject *)0x0;
  if (pUVar8 == (UObject *)0x0) {
LAB_14be417ff:
    pUVar8 = pUVar12;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14be417ff;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_1a8 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_1a8);
  bVar5 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9059055525936758810>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_PopUp.cpp"
                       ,0x1a,"false");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14be41e66;
  }
  TVar7 = UDS_ModelBase::GetObjectData(*(UDS_ModelBase **)&this->field_0xa0,(int)local_b0);
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar7.WeakPtr);
  if (pUVar8 == (UObject *)0x0) {
LAB_14be418db:
    pUVar8 = pUVar12;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_ItemData_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14be418db;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_1a0 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  FVar10.Handle = (UObject *)&local_1a0;
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)FVar10);
  bVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9059055525936758813>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_PopUp.cpp"
                       ,0x1d,"false");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14be41e66;
  }
  TVar11.WeakPtr._1_7_ = FVar10._1_7_;
  TVar11.WeakPtr.ObjectIndex._0_1_ = 0x10;
  DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&local_res20,TVar11);
  if (local_res20 == (longlong *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9059055525936758816>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_PopUp.cpp"
                       ,0x20,"false");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14be41e66;
  }
  TVar7 = UDS_ModelBase::GetObjectData(*(UDS_ModelBase **)&this->field_0xa0,(int)local_a8);
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar7.WeakPtr);
  if (pUVar8 == (UObject *)0x0) {
LAB_14be41a0e:
    pUVar8 = pUVar12;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_ModelBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14be41a0e;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_198 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_198);
  bVar5 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar5) {
    puVar9 = (undefined8 *)(**(code **)(*local_res20 + 0x310))(local_res20,local_a0);
    local_d0.Object = (FDS_ViewModelContext *)*puVar9;
    local_d0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar9[1];
    if (local_d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_d0,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
    pUVar8 = FWeakObjectPtr::Get(&local_res18);
    puVar9 = (undefined8 *)(**(code **)(*(longlong *)pUVar8 + 0x310))(pUVar8,local_90);
    local_c0.Object = (FDS_ViewModelContext *)*puVar9;
    local_c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar9[1];
    if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_c0,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
    MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_1d8);
    pFVar3 = local_1d8.Object;
    if ((local_1d8.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x15b;
    ::FName::FName(&local_190,"DS_VM_CommonIconTextButton_Cancel");
    pFVar3->_padding_ = (longlong)local_190;
    local_180.StringTableType = None;
    local_180.StringTableID = 0;
    local_180.DateTime.Ticks = 0;
    local_180.TimeSpan.Ticks = 0;
    local_180.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_180.StringEnumTableNameID.Number = 0;
    local_180.TimeExpressionType = None;
    local_180.IsExpression = false;
    local_180.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.UniqueString.Data.ArrayNum = 0;
    local_180.UniqueString.Data.ArrayMax = 0;
    local_180.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.FormatArgs.ArrayNum = 0;
    local_180.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_180,StringUi,0x66);
    FDS_Text::operator=(&pFVar3->DSText,&local_180);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_180.FormatArgs.AllocatorInstance.Data,
               local_180.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_180.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_180.FormatArgs.AllocatorInstance.Data);
    }
    if (local_180.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.UniqueString.Data.AllocatorInstance.Data);
    }
    uStack_1b0 = 0;
    local_1b8 = OnClickedCancel;
    lStack_70 = (ulonglong)uStack_1ac << 0x20;
    local_78 = OnClickedCancel;
    TDelegateRegistration<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>::
    BindUObject<UDS_VM_W_ItemGem_PopUp>
              ((TDelegateRegistration<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
                *)&pFVar3->OnClickDelegate,this,(pmf_40b0aaac *)&local_78);
    local_68.Object = (FDS_ViewModelContext *)local_1d8.Object;
    local_68.SharedReferenceCount.ReferenceController =
         local_1d8.SharedReferenceCount.ReferenceController;
    if (local_1d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_68,false);
    MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_1c8);
    pFVar4 = local_1c8.Object;
    if ((local_1c8.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar4->_padding_ = 0x15b;
    ::FName::FName(&local_188,"DS_VM_CommonIconTextButton_Equip");
    pFVar4->_padding_ = (longlong)local_188;
    local_130.StringTableType = None;
    local_130.StringTableID = 0;
    local_130.DateTime.Ticks = 0;
    local_130.TimeSpan.Ticks = 0;
    local_130.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_130.StringEnumTableNameID.Number = 0;
    local_130.TimeExpressionType = None;
    local_130.IsExpression = false;
    local_130.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.UniqueString.Data.ArrayNum = 0;
    local_130.UniqueString.Data.ArrayMax = 0;
    local_130.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.FormatArgs.ArrayNum = 0;
    local_130.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_130,StringUi,0x9ec9);
    if ((pFVar3 == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FDS_Text::operator=(&pFVar3->DSText,&local_130);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_130.FormatArgs.AllocatorInstance.Data,
               local_130.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_130.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_130.FormatArgs.AllocatorInstance.Data);
    }
    if (local_130.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.UniqueString.Data.AllocatorInstance.Data);
    }
    if ((pFVar4 == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uStack_1b0 = 0;
    local_1b8 = OnClickedEquip;
    lStack_50 = (ulonglong)uStack_1ac << 0x20;
    local_58 = OnClickedEquip;
    TDelegateRegistration<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>::
    BindUObject<UDS_VM_W_ItemGem_PopUp>
              ((TDelegateRegistration<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
                *)&pFVar4->OnClickDelegate,this,(pmf_40b0aaac *)&local_58);
    local_48.Object = (FDS_ViewModelContext *)local_1c8.Object;
    local_48.SharedReferenceCount.ReferenceController =
         local_1c8.SharedReferenceCount.ReferenceController;
    if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_48,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d8.SharedReferenceCount.ReferenceController);
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9059055525936758820>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_PopUp.cpp"
                       ,0x24,"false");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_14be41e66:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

