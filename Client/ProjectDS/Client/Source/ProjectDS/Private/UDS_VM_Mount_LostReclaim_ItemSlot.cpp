// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b6a2ba0

UClass * __cdecl UDS_VM_Mount_LostReclaim_ItemSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim_ItemSlot.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Mount_LostReclaim_ItemSlot",
               &Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim_ItemSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Mount_LostReclaim_ItemSlot,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Mount_LostReclaim_ItemSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Mount_LostReclaim_ItemSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim_ItemSlot.InnerSingleton;
}

// UDS_VM_Mount_LostReclaim_ItemSlot @ 14b6a5e90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_Mount_LostReclaim_ItemSlot * __thiscall
UDS_VM_Mount_LostReclaim_ItemSlot::UDS_VM_Mount_LostReclaim_ItemSlot
          (UDS_VM_Mount_LostReclaim_ItemSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mount_LostReclaim_ItemSlot__6B_;
  (this->VM_Item).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  return this;
}

// UDS_VM_Mount_LostReclaim_ItemSlot @ 14b6a5ee0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_Mount_LostReclaim_ItemSlot * __thiscall
UDS_VM_Mount_LostReclaim_ItemSlot::UDS_VM_Mount_LostReclaim_ItemSlot
          (UDS_VM_Mount_LostReclaim_ItemSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mount_LostReclaim_ItemSlot__6B_;
  (this->VM_Item).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  return this;
}

// ~UDS_VM_Mount_LostReclaim_ItemSlot @ 14b6a7640

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mount_LostReclaim_ItemSlot::~UDS_VM_Mount_LostReclaim_ItemSlot
          (UDS_VM_Mount_LostReclaim_ItemSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mount_LostReclaim_ItemSlot__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6a9a20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_Mount_LostReclaim_ItemSlot::GetFieldNotificationDescriptor
          (UDS_VM_Mount_LostReclaim_ItemSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Mount_LostReclaim_ItemSlot::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6aa640

UClass * __cdecl UDS_VM_Mount_LostReclaim_ItemSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim_ItemSlot.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Mount_LostReclaim_ItemSlot",
               &Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim_ItemSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Mount_LostReclaim_ItemSlot,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Mount_LostReclaim_ItemSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Mount_LostReclaim_ItemSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim_ItemSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Mount_LostReclaim_ItemSlot @ 14b6aada0

void __cdecl
UDS_VM_Mount_LostReclaim_ItemSlot::StaticRegisterNativesUDS_VM_Mount_LostReclaim_ItemSlot(void)

{
  return;
}

// OnSetViewModel @ 14bf06ad0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mount_LostReclaim_ItemSlot::OnSetViewModel
          (UDS_VM_Mount_LostReclaim_ItemSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  UDS_VM_Item *this_00;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  UClass *pUVar7;
  undefined8 *puVar8;
  char *pcVar9;
  TObjectPtr<UDS_VM_Item>_u_0 TVar10;
  UDS_M_ItemImplBase *local_res10;
  TObjectPtr<UDS_VM_Item>_u_0 local_res18 [2];
  TSharedPtr<FDS_ViewModelContext_MountLostReclaim_ItemSlot,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
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
  pcVar9 = (char *)&local_68;
  SafeCast<FDS_ViewModelContext_MountLostReclaim_ItemSlot>
            (&local_78,(TSharedPtr<FDS_ViewModelContext,1> *)pcVar9);
  if (local_78.Object == (FDS_ViewModelContext_MountLostReclaim_ItemSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  else {
    if (local_78.Object == (FDS_ViewModelContext_MountLostReclaim_ItemSlot *)0x0) {
      pcVar9 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
      ;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar1 = (local_78.Object)->Quantity_Trade;
    iVar2 = (local_78.Object)->Quantity;
    DS_ItemDataUtil::CreateItemModel
              ((EDS_ItemSlotStateType)&local_res10,
               (int)CONCAT71((int7)((ulonglong)pcVar9 >> 8),0x44));
    if (local_res10 != (UDS_M_ItemImplBase *)0x0) {
      UDS_M_ItemImplBase::SetQuantity(local_res10,iVar1 + iVar2);
      UDS_M_ItemImplBase::SetTradable(local_res10,0 < iVar1);
    }
    this_00 = (this->VM_Item).field0_0x0.DebugPtr;
    if (this_00 == (UDS_VM_Item *)0x0) {
      lVar6 = (**(code **)(local_res10->_padding_ + 0x310))(local_res10,local_48);
      pTVar3 = *(TReferenceControllerBase<1> **)(lVar6 + 8);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      DS_ViewModelTemplateUtil::CreateViewModel
                ((UObject *)&local_res18[0].ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
      if (local_res18[0].DebugPtr == (UDS_VM_Item *)0x0) {
        TVar10.DebugPtr = (UDS_VM_Item *)0x0;
      }
      else {
        pUVar7 = Z_Construct_UClass_UDS_VM_Item_NoRegister();
        bVar5 = FObjectPtr::IsA(&local_res18[0].ObjectPtr,pUVar7);
        TVar10.DebugPtr = (UDS_VM_Item *)0x0;
        if (bVar5) {
          TVar10 = local_res18[0];
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar10.DebugPtr != (UDS_VM_Item *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar10.DebugPtr);
      }
      (this->VM_Item).field0_0x0.DebugPtr = (UDS_VM_Item *)TVar10;
    }
    else {
      puVar8 = (undefined8 *)(**(code **)(local_res10->_padding_ + 0x310))(local_res10,local_38);
      local_58.Object = (FDS_ViewModelContext *)*puVar8;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1];
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_58);
      local_40 = local_30;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetVM_Item @ 14bf1a3e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mount_LostReclaim_ItemSlot::SetVM_Item
          (UDS_VM_Mount_LostReclaim_ItemSlot *this,int param_1,int param_2,int param_3)

{
  UDS_VM_Item *this_00;
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  undefined8 *puVar3;
  UClass *pUVar4;
  TObjectPtr<UDS_VM_Item>_u_0 TVar5;
  UDS_M_ItemImplBase *local_res8;
  TObjectPtr<UDS_VM_Item>_u_0 local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_30;
  undefined1 local_20 [8];
  TReferenceControllerBase<1> *local_18;
  
  DS_ItemDataUtil::CreateItemModel
            ((EDS_ItemSlotStateType)&local_res8,
             (int)CONCAT71((uint7)(uint3)((uint)param_1 >> 8),0x44));
  if (local_res8 != (UDS_M_ItemImplBase *)0x0) {
    UDS_M_ItemImplBase::SetQuantity(local_res8,param_2 + param_3);
    UDS_M_ItemImplBase::SetTradable(local_res8,0 < param_3);
  }
  this_00 = (this->VM_Item).field0_0x0.DebugPtr;
  puVar3 = (undefined8 *)(**(code **)(local_res8->_padding_ + 0x310))(local_res8,local_20);
  if (this_00 == (UDS_VM_Item *)0x0) {
    pTVar1 = (TReferenceControllerBase<1> *)puVar3[1];
    local_30.Object = (FDS_ViewModelContext *)*puVar3;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_30.SharedReferenceCount.ReferenceController = pTVar1;
    DS_ViewModelTemplateUtil::CreateViewModel
              ((UObject *)&local_38.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
    if (local_38.DebugPtr == (UDS_VM_Item *)0x0) {
      TVar5.DebugPtr = (UDS_VM_Item *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_UDS_VM_Item_NoRegister();
      bVar2 = FObjectPtr::IsA(&local_38.ObjectPtr,pUVar4);
      TVar5.DebugPtr = (UDS_VM_Item *)0x0;
      if (bVar2) {
        TVar5 = local_38;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar5.DebugPtr != (UDS_VM_Item *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
    }
    (this->VM_Item).field0_0x0.DebugPtr = (UDS_VM_Item *)TVar5;
  }
  else {
    local_30.Object = (FDS_ViewModelContext *)*puVar3;
    local_30.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar3[1];
    if (local_30.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_30.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

