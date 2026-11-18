// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b694430

UClass * __cdecl UDS_VM_ItemQuickSlotList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemQuickSlotList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemQuickSlotList",
               &Z_Registration_Info_UClass_UDS_VM_ItemQuickSlotList.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemQuickSlotList,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemQuickSlotList>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemQuickSlotList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemQuickSlotList.InnerSingleton;
}

// UDS_VM_ItemQuickSlotList @ 14b697bd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_ItemQuickSlotList * __thiscall
UDS_VM_ItemQuickSlotList::UDS_VM_ItemQuickSlotList
          (UDS_VM_ItemQuickSlotList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemQuickSlotList__6B_;
  (this->VM_Item_1).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_Item_2).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_Item_3).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_Item_4).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_ItemQuickSlot_1).field0_0x0.DebugPtr = (UDS_VM_ItemQuickSlot *)0x0;
  (this->VM_ItemQuickSlot_2).field0_0x0.DebugPtr = (UDS_VM_ItemQuickSlot *)0x0;
  (this->VM_ItemQuickSlot_3).field0_0x0.DebugPtr = (UDS_VM_ItemQuickSlot *)0x0;
  (this->VM_ItemQuickSlot_4).field0_0x0.DebugPtr = (UDS_VM_ItemQuickSlot *)0x0;
  (this->QuickSlotModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuickSlotModelList).ArrayNum = 0;
  (this->QuickSlotModelList).ArrayMax = 0;
  return this;
}

// UDS_VM_ItemQuickSlotList @ 14b697c60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_ItemQuickSlotList * __thiscall
UDS_VM_ItemQuickSlotList::UDS_VM_ItemQuickSlotList
          (UDS_VM_ItemQuickSlotList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemQuickSlotList__6B_;
  (this->VM_Item_1).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_Item_2).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_Item_3).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_Item_4).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_ItemQuickSlot_1).field0_0x0.DebugPtr = (UDS_VM_ItemQuickSlot *)0x0;
  (this->VM_ItemQuickSlot_2).field0_0x0.DebugPtr = (UDS_VM_ItemQuickSlot *)0x0;
  (this->VM_ItemQuickSlot_3).field0_0x0.DebugPtr = (UDS_VM_ItemQuickSlot *)0x0;
  (this->VM_ItemQuickSlot_4).field0_0x0.DebugPtr = (UDS_VM_ItemQuickSlot *)0x0;
  (this->QuickSlotModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuickSlotModelList).ArrayNum = 0;
  (this->QuickSlotModelList).ArrayMax = 0;
  return this;
}

// ~UDS_VM_ItemQuickSlotList @ 14b69a450

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemQuickSlotList::~UDS_VM_ItemQuickSlotList(UDS_VM_ItemQuickSlotList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemQuickSlotList__6B_;
  pFVar1 = (this->QuickSlotModelList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69cfb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_ItemQuickSlotList::GetFieldNotificationDescriptor(UDS_VM_ItemQuickSlotList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemQuickSlotList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69d7e0

UClass * __cdecl UDS_VM_ItemQuickSlotList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemQuickSlotList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemQuickSlotList",
               &Z_Registration_Info_UClass_UDS_VM_ItemQuickSlotList.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemQuickSlotList,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemQuickSlotList>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemQuickSlotList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemQuickSlotList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemQuickSlotList @ 14b69e5d0

void __cdecl UDS_VM_ItemQuickSlotList::StaticRegisterNativesUDS_VM_ItemQuickSlotList(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ItemQuickSlotList_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedQuickSlotDeckDataSet @ 14b69f7c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_ItemQuickSlotList::execOnChangedQuickSlotDeckDataSet
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedQuickSlotDeckDataSet((UDS_VM_ItemQuickSlotList *)param_1,local_res10);
  return;
}

// execOnUpdateInventory @ 14b69fa00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_ItemQuickSlotList::execOnUpdateInventory(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDS_InventoryUpdate local_res10;
  
  local_res10 = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnUpdateInventory((UDS_VM_ItemQuickSlotList *)param_1,local_res10);
  return;
}

// operator() @ 14bf99790

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UDS_VM_ItemQuickSlotList::SetQuickSlotList'::__l2::<lambda_1>::operator()
          (void *this,TObjectPtr<UDS_VM_Item> *param_1,TObjectPtr<UDS_VM_ItemQuickSlot> *param_2,
          int param_3)

{
  longlong lVar1;
  UDS_VM_Item *this_00;
  TReferenceControllerBase<1> *pTVar2;
  UDS_VM_ItemQuickSlot *this_01;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UDS_M_ItemImplBase> this_02;
  UClass *pUVar6;
  UDS_QuickSlotDeckData *this_03;
  undefined8 *puVar7;
  TObjectPtr<UDS_VM_Item>_u_0 TVar8;
  TObjectPtr<UDS_VM_Item>_u_0 TVar9;
  UScriptStruct *pUVar10;
  UDS_ViewModelContextManager *this_04;
  FObjectPtr_u_0 FVar11;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar12;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar13;
  ForAnyElementType *pFVar14;
  TObjectPtr<UDS_VM_Item>_u_0 TVar15;
  TObjectPtr<UDS_VM_Item>_u_0 TVar16;
  undefined1 uVar17;
  int local_res20 [2];
  TObjectPtr<UDS_VM_Item>_u_0 local_f8;
  FWeakObjectPtr local_f0;
  TObjectPtr<UDS_VM_Item>_u_0 local_e8;
  TObjectPtr<UDS_VM_Item>_u_0 local_e0;
  FWeakObjectPtr local_d8;
  undefined8 local_d0;
  TReferenceControllerBase<1> *local_c8;
  TObjectPtr<UDS_VM_Item>_u_0 local_c0;
  TObjectPtr<UDS_VM_Item>_u_0 local_b8;
  TSharedPtr<FDS_QuickSlotData,1> local_a8;
  undefined8 local_98;
  TObjectPtr<UDS_VM_Item>_u_0 local_90;
  TObjectPtr<UDS_VM_Item>_u_0 local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_80;
  TObjectPtr<UDS_VM_Item>_u_0 local_70;
  TObjectPtr<UDS_VM_Item>_u_0 local_68;
  undefined1 local_60 [8];
  TSharedPtr<FDS_QuickSlotData,1> local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  local_res20[0] = param_3;
  UDS_QuickSlotDeckData::GetData((ulong64)&local_d8,UDS_PlayerData::MainPlayerEntityID,true);
  bVar4 = FWeakObjectPtr::IsValid(&local_d8);
  if (!bVar4) {
    return;
  }
  FVar11.Handle = (UObject *)&local_98;
  TVar16.DebugPtr = (UDS_VM_Item *)0x0;
  local_f0.ObjectIndex = 0;
  local_f0.ObjectSerialNumber = 0;
  local_98 = 0;
  FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)FVar11);
  TVar12.WeakPtr._1_7_ = FVar11._1_7_;
  TVar12.WeakPtr.ObjectIndex._0_1_ = 5;
  this_02 = DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)local_60,TVar12);
  local_f8.DebugPtr = TVar16.DebugPtr;
  if (*(longlong *)this_02.field0_0x0 != 0) {
    pUVar6 = Z_Construct_UClass_UDS_M_ItemImplQuickSlot_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this_02.field0_0x0,pUVar6);
    if (bVar4) {
      local_f8.ObjectPtr.field0_0x0 = (FObjectPtr)(FObjectPtr_u_0)*(FObjectPtr *)this_02.field0_0x0;
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_f8.DebugPtr == (UDS_VM_Item *)0x0) goto LAB_14bf99864;
    UE::GC::MarkAsReachable((UObject *)local_f8.DebugPtr);
  }
  if (local_f8.DebugPtr != (UDS_VM_Item *)0x0) {
    this_03 = (UDS_QuickSlotDeckData *)FWeakObjectPtr::Get(&local_d8);
    UDS_QuickSlotDeckData::GetQuickSlotData(this_03,&local_a8,local_res20);
    local_58.Object = local_a8.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_a8.SharedReferenceCount.ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_M_ItemImplByQuickSlotData::Init
              ((UDS_M_ItemImplByQuickSlotData *)local_f8.DebugPtr,&local_58);
    lVar1 = *(longlong *)this;
    pFVar14 = (ForAnyElementType *)(lVar1 + 0xe0);
    if ((((TObjectPtr<UDS_VM_Item>_u_0 *)pFVar14->Data <= &local_f8) &&
        (&local_f8 < (TObjectPtr<UDS_VM_Item>_u_0 *)pFVar14->Data + *(int *)(lVar1 + 0xec))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = *(int *)(lVar1 + 0xe8);
    if (iVar5 == *(int *)(lVar1 + 0xec)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar14,(int *)(lVar1 + 0xec));
    }
    *(int *)(lVar1 + 0xe8) = iVar5 + 1;
    ((TObjectPtr<UDS_VM_Item>_u_0 *)(pFVar14->Data + (longlong)iVar5 * 8))->DebugPtr =
         (UDS_VM_Item *)local_f8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_f8.DebugPtr != (UDS_VM_Item *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_f8.DebugPtr);
    }
    this_00 = (param_1->field0_0x0).DebugPtr;
    if (this_00 == (UDS_VM_Item *)0x0) {
      puVar7 = (undefined8 *)
               (**(code **)((local_f8.DebugPtr)->_padding_ + 0x310))(local_f8.DebugPtr,local_48);
      pTVar2 = (TReferenceControllerBase<1> *)puVar7[1];
      local_d0 = *puVar7;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        pTVar13 = *(TSharedPtr<FDS_ViewModelContext,1> **)this;
      }
      else {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        pTVar13 = *(TSharedPtr<FDS_ViewModelContext,1> **)this;
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_c8 = pTVar2;
      DS_ViewModelTemplateUtil::CreateViewModel((UObject *)&local_e8.ObjectPtr,pTVar13);
      TVar15.DebugPtr = TVar16.DebugPtr;
      if (local_e8.DebugPtr != (UDS_VM_Item *)0x0) {
        pUVar6 = Z_Construct_UClass_UDS_VM_Item_NoRegister();
        bVar4 = FObjectPtr::IsA(&local_e8.ObjectPtr,pUVar6);
        if (bVar4) {
          TVar15 = local_e8;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar15.DebugPtr != (UDS_VM_Item *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar15.DebugPtr);
      }
      (param_1->field0_0x0).DebugPtr = (UDS_VM_Item *)TVar15;
    }
    else {
      puVar7 = (undefined8 *)
               (**(code **)((local_f8.DebugPtr)->_padding_ + 0x310))(local_f8.DebugPtr,local_38);
      local_80.Object = (FDS_ViewModelContext *)*puVar7;
      local_80.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar7[1];
      if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_80);
      local_40 = local_30;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    TVar8.DebugPtr = ::operator_new(0x28);
    TVar15.DebugPtr = TVar16.DebugPtr;
    if (TVar8.DebugPtr != (UDS_VM_Item *)0x0) {
      *(undefined8 *)((longlong)&(TVar8.DebugPtr)->_padding_ + 4) = 0;
      *(undefined4 *)((longlong)&(TVar8.DebugPtr)->_padding_ + 4) = 0;
      (TVar8.DebugPtr)->_padding_ = 0;
      (TVar8.DebugPtr)->_padding_ = 0;
      *(undefined4 *)&(TVar8.DebugPtr)->_padding_ = 0;
      (TVar8.DebugPtr)->_padding_ = (longlong)&___7FDS_ViewModelContext_ItemQuickSlot__6B_;
      TVar15.DebugPtr = TVar8.DebugPtr;
    }
    TVar9.DebugPtr = ::operator_new(0x20);
    TVar8.DebugPtr = TVar16.DebugPtr;
    if (TVar9.DebugPtr != (UDS_VM_Item *)0x0) {
      *(undefined4 *)&(TVar9.DebugPtr)->_padding_ = 1;
      (TVar9.DebugPtr)->_padding_ = (longlong)ViewModelContextDeleter;
      (TVar9.DebugPtr)->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ItemQuickSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)((longlong)&(TVar9.DebugPtr)->_padding_ + 4) = 1;
      (TVar9.DebugPtr)->_padding_ = (longlong)TVar15;
      TVar8.DebugPtr = TVar9.DebugPtr;
    }
    if ((TVar15.DebugPtr == (UDS_VM_Item *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar10 = FDS_ViewModelContext_ItemQuickSlot::StaticStruct();
    (TVar15.DebugPtr)->_padding_ = (longlong)pUVar10;
    this_04 = UDS_ViewModelContextManager::GetInst();
    if (this_04 != (UDS_ViewModelContextManager *)0x0) {
      if (TVar8.DebugPtr != (UDS_VM_Item *)0x0) {
        LOCK();
        *(int *)&(TVar8.DebugPtr)->_padding_ = (int)(TVar8.DebugPtr)->_padding_ + 1;
        UNLOCK();
      }
      local_90 = TVar15;
      local_88 = TVar8;
      UDS_ViewModelContextManager::RegisterContext
                (this_04,(TSharedPtr<FDS_ViewModelContext,1> *)&local_90.ObjectPtr);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_88.DebugPtr);
    }
    *(undefined4 *)&(TVar15.DebugPtr)->_padding_ = 0x9d;
    *(int *)((longlong)&(TVar15.DebugPtr)->_padding_ + 4) = local_res20[0];
    if ((local_a8.Object == (FDS_QuickSlotData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar17 = 1;
    if (0 < (local_a8.Object)->TargetTID) {
      uVar17 = 4;
    }
    *(undefined1 *)&(TVar15.DebugPtr)->_padding_ = uVar17;
    this_01 = (param_2->field0_0x0).DebugPtr;
    if (this_01 == (UDS_VM_ItemQuickSlot *)0x0) {
      if (TVar8.DebugPtr == (UDS_VM_Item *)0x0) {
        pTVar13 = *(TSharedPtr<FDS_ViewModelContext,1> **)this;
      }
      else {
        LOCK();
        *(int *)&(TVar8.DebugPtr)->_padding_ = (int)(TVar8.DebugPtr)->_padding_ + 1;
        UNLOCK();
        pTVar13 = *(TSharedPtr<FDS_ViewModelContext,1> **)this;
        LOCK();
        *(int *)&(TVar8.DebugPtr)->_padding_ = (int)(TVar8.DebugPtr)->_padding_ + 1;
        UNLOCK();
      }
      local_c0 = TVar15;
      local_b8 = TVar8;
      DS_ViewModelTemplateUtil::CreateViewModel((UObject *)&local_e0.ObjectPtr,pTVar13);
      if (local_e0.DebugPtr != (UDS_VM_Item *)0x0) {
        pUVar6 = Z_Construct_UClass_UDS_VM_ItemQuickSlot_NoRegister();
        bVar4 = FObjectPtr::IsA(&local_e0.ObjectPtr,pUVar6);
        if (bVar4) {
          TVar16 = local_e0;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)TVar8.DebugPtr);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar16.DebugPtr != (UDS_VM_Item *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar16.DebugPtr);
      }
      (param_2->field0_0x0).DebugPtr = (UDS_VM_ItemQuickSlot *)TVar16;
    }
    else {
      if (TVar8.DebugPtr != (UDS_VM_Item *)0x0) {
        LOCK();
        *(int *)&(TVar8.DebugPtr)->_padding_ = (int)(TVar8.DebugPtr)->_padding_ + 1;
        UNLOCK();
      }
      local_70 = TVar15;
      local_68 = TVar8;
      UDS_ViewModelBase::SetContext
                ((UDS_ViewModelBase *)this_01,
                 (TSharedPtr<FDS_ViewModelContext,1> *)&local_70.ObjectPtr);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar8.DebugPtr);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    return;
  }
LAB_14bf99864:
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8690659825723375697>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_ItemQuickSlotList.cpp"
                     ,0x51,"false");
  if (!bVar4) {
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// BindModel @ 14bf9b7c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_ItemQuickSlotList::BindModel(UDS_VM_ItemQuickSlotList *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_HudManager *pUVar3;
  UObject *pUVar4;
  char *pcVar5;
  UObject *this_00;
  UFunction *pUVar6;
  char *pcVar7;
  <lambda_1> local_res10 [8];
  FWeakObjectPtr local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  FWeakObjectPtr local_100;
  FName local_f8;
  FWeakObjectPtr local_f0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_e8;
  FName local_d8;
  UDS_VM_ItemQuickSlotList *local_d0;
  FName *local_c8 [2];
  undefined1 local_b8 [24];
  FMRSWRecursiveAccessDetector *local_a0;
  char local_98;
  undefined1 local_90 [64];
  FReadAccessScope local_50;
  
  pUVar3 = UDS_HudManager::GetInst();
  if (pUVar3 != (UDS_HudManager *)0x0) {
    local_b8._8_4_ = 0;
    local_b8._0_8_ = OnShowHudEvent;
    local_90._16_8_ = (ulonglong)(uint)local_b8._12_4_ << 0x20;
    local_90._8_8_ = OnShowHudEvent;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_ItemQuickSlotList>
              (&pUVar3->OnHudShowDelegate,(UDS_VM_ItemQuickSlotList *)local_90,(pmf_cef65023 *)this)
    ;
  }
  TDS_DataSetGetter<UDS_QuickSlotDeckDataSet>::Get((ulong64)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) goto LAB_14bf9ba7d;
  pUVar4 = FWeakObjectPtr::Get(&local_res18);
  pcVar5 = strstr("&UDS_VM_ItemQuickSlotList::OnChangedQuickSlotDeckDataSet","::");
  if (pcVar5 == (char *)0x0) {
LAB_14bf9b8ab:
    pcVar7 = &DAT_00000002;
LAB_14bf9b8b0:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar5;
      pcVar5 = strstr(pcVar7 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14bf9b8ab;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14bf9b8b0;
  }
  ::FName::FName(&local_d8,pcVar7);
  if ((this == (UDS_VM_ItemQuickSlotList *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_100.ObjectIndex = 0;
  local_100.ObjectSerialNumber = 0;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  local_res20 = local_d8;
  if ((this == (UDS_VM_ItemQuickSlotList *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_d0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_VM_ItemQuickSlotList *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_d0);
  local_f8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_108,(FReadAccessScope *)(local_90 + 0x28));
  if ((local_f8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_100), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_90 + 0x28));
LAB_14bf9b9e9:
    local_c8[0] = &local_res20;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
    __Internal_BindDynamic<UDS_VM_ItemQuickSlotList>'::__l2::<lambda_1>::operator()(local_c8);
  }
  else {
    pUVar6 = UObject::FindFunction(this_00,local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_90 + 0x28));
    if (pUVar6 == (UFunction *)0x0) goto LAB_14bf9b9e9;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_108,&local_50);
  local_e8.Object = local_100;
  local_e8.FunctionName = local_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),
             (FWriteAccessScope *)(local_b8 + 0x10));
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar4[1].field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),&local_e8);
  if (local_98 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (local_a0,(FDestructionSentinel *)(local_b8 + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
LAB_14bf9ba7d:
  DS_ItemDataUtil::GetItemDataSet();
  bVar2 = FWeakObjectPtr::IsValid(&local_f0);
  if (bVar2) {
    local_e8.FunctionName = (FName)((ulonglong)local_e8.FunctionName & 0xffffffff00000000);
    local_e8.Object = (FWeakObjectPtr)OnUpdateInventory;
    local_90._24_8_ = OnUpdateInventory;
    local_90._32_4_ = local_e8.FunctionName.ComparisonIndex.Value;
    local_90._36_4_ = local_e8.FunctionName.Number;
    pUVar4 = FWeakObjectPtr::Get(&local_f0);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InventoryUpdate),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_ItemQuickSlotList>
              (&pUVar4[0x13].field_0x18,(UDS_VM_ItemQuickSlotList *)local_b8,(pmf_9f39b9e7 *)this);
  }
  return;
}

// InitViewModel @ 14bfaf170

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemQuickSlotList::InitViewModel(UDS_VM_ItemQuickSlotList *this)

{
  return;
}

// OnChangedQuickSlotDeckDataSet @ 14bfb7360

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemQuickSlotList::OnChangedQuickSlotDeckDataSet
          (UDS_VM_ItemQuickSlotList *this,UDS_DataSetBase *param_1)

{
  int *piVar1;
  UDS_VM_ItemQuickSlotList *apUStackX_8 [4];
  
  piVar1 = &(this->QuickSlotModelList).ArrayMax;
  (this->QuickSlotModelList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->QuickSlotModelList).AllocatorInstance,0,piVar1);
  }
  apUStackX_8[0] = this;
  `UDS_VM_ItemQuickSlotList::SetQuickSlotList'::__l2::<lambda_1>::operator()
            (apUStackX_8,&this->VM_Item_1,&this->VM_ItemQuickSlot_1,1);
  `UDS_VM_ItemQuickSlotList::SetQuickSlotList'::__l2::<lambda_1>::operator()
            (apUStackX_8,&this->VM_Item_2,&this->VM_ItemQuickSlot_2,2);
  `UDS_VM_ItemQuickSlotList::SetQuickSlotList'::__l2::<lambda_1>::operator()
            (apUStackX_8,&this->VM_Item_3,&this->VM_ItemQuickSlot_3,3);
  `UDS_VM_ItemQuickSlotList::SetQuickSlotList'::__l2::<lambda_1>::operator()
            (apUStackX_8,&this->VM_Item_4,&this->VM_ItemQuickSlot_4,4);
  return;
}

// OnSetViewModel @ 14bfc0d20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemQuickSlotList::OnSetViewModel
          (UDS_VM_ItemQuickSlotList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  SetQuickSlotList(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnShowHudEvent @ 14bfceaf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemQuickSlotList::OnShowHudEvent
          (UDS_VM_ItemQuickSlotList *this,EDS_WindowLayerGroupType *param_1)

{
  int *piVar1;
  UDS_VM_ItemQuickSlotList *apUStackX_8 [4];
  
  piVar1 = &(this->QuickSlotModelList).ArrayMax;
  (this->QuickSlotModelList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->QuickSlotModelList).AllocatorInstance,0,piVar1);
  }
  apUStackX_8[0] = this;
  `UDS_VM_ItemQuickSlotList::SetQuickSlotList'::__l2::<lambda_1>::operator()
            (apUStackX_8,&this->VM_Item_1,&this->VM_ItemQuickSlot_1,1);
  `UDS_VM_ItemQuickSlotList::SetQuickSlotList'::__l2::<lambda_1>::operator()
            (apUStackX_8,&this->VM_Item_2,&this->VM_ItemQuickSlot_2,2);
  `UDS_VM_ItemQuickSlotList::SetQuickSlotList'::__l2::<lambda_1>::operator()
            (apUStackX_8,&this->VM_Item_3,&this->VM_ItemQuickSlot_3,3);
  `UDS_VM_ItemQuickSlotList::SetQuickSlotList'::__l2::<lambda_1>::operator()
            (apUStackX_8,&this->VM_Item_4,&this->VM_ItemQuickSlot_4,4);
  return;
}

// OnUpdateInventory @ 14bfd1f40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemQuickSlotList::OnUpdateInventory
          (UDS_VM_ItemQuickSlotList *this,EDS_InventoryUpdate param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_res8;
  FWeakObjectPtr local_res18;
  
  pFVar5 = (this->QuickSlotModelList).AllocatorInstance.Data;
  iVar2 = (this->QuickSlotModelList).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->QuickSlotModelList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_M_ItemImplQuickSlot>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar5 == pFVar1) break;
    plVar3 = *(longlong **)pFVar5;
    if (plVar3 != (longlong *)0x0) {
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_res8 = 0;
      pcVar4 = *(code **)(*plVar3 + 0x2e0);
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
      (*pcVar4)(plVar3,local_res18,1);
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// SetQuickSlotList @ 14bfdd500

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemQuickSlotList::SetQuickSlotList(UDS_VM_ItemQuickSlotList *this)

{
  int *piVar1;
  UDS_VM_ItemQuickSlotList *local_res8 [4];
  
  piVar1 = &(this->QuickSlotModelList).ArrayMax;
  (this->QuickSlotModelList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->QuickSlotModelList).AllocatorInstance,0,piVar1);
  }
  local_res8[0] = this;
  `UDS_VM_ItemQuickSlotList::SetQuickSlotList'::__l2::<lambda_1>::operator()
            (local_res8,&this->VM_Item_1,&this->VM_ItemQuickSlot_1,1);
  `UDS_VM_ItemQuickSlotList::SetQuickSlotList'::__l2::<lambda_1>::operator()
            (local_res8,&this->VM_Item_2,&this->VM_ItemQuickSlot_2,2);
  `UDS_VM_ItemQuickSlotList::SetQuickSlotList'::__l2::<lambda_1>::operator()
            (local_res8,&this->VM_Item_3,&this->VM_ItemQuickSlot_3,3);
  `UDS_VM_ItemQuickSlotList::SetQuickSlotList'::__l2::<lambda_1>::operator()
            (local_res8,&this->VM_Item_4,&this->VM_ItemQuickSlot_4,4);
  return;
}

// UnbindModel @ 14bfdf220

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemQuickSlotList::UnbindModel(UDS_VM_ItemQuickSlotList *this)

{
  bool bVar1;
  UDS_HudManager *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  pUVar2 = UDS_HudManager::GetInst();
  if (pUVar2 != (UDS_HudManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnHudShowDelegate,this
              );
  }
  TDS_DataSetGetter<UDS_QuickSlotDeckDataSet>::Get((ulong64)&local_res10);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this)
    ;
  }
  DS_ItemDataUtil::GetItemDataSet();
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[0x13].field_0x18,this);
  }
  return;
}

