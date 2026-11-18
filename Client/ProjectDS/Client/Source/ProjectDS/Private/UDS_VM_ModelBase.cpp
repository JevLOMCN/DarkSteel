// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b604850

UClass * __cdecl UDS_VM_ModelBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ModelBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ModelBase",
               &Z_Registration_Info_UClass_UDS_VM_ModelBase.InnerSingleton,
               StaticRegisterNativesUDS_VM_ModelBase,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_ModelBase>,
               InternalVTableHelperCtorCaller<UDS_VM_ModelBase>,aFStackX_8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ModelBase.InnerSingleton;
}

// UDS_VM_ModelBase @ 14b69a250

UDS_VM_ModelBase * __thiscall
UDS_VM_ModelBase::UDS_VM_ModelBase(UDS_VM_ModelBase *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ModelBase__6B_;
  (this->Model).field0_0x0.DebugPtr = (UDS_ModelBase *)0x0;
  *(undefined8 *)&this->UpdateViewDelegate = 0;
  *(undefined8 *)&(this->UpdateViewDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateViewDelegate).field_0x10 = 0;
  return this;
}

// UDS_VM_ModelBase @ 14b69a2b0

UDS_VM_ModelBase * __thiscall
UDS_VM_ModelBase::UDS_VM_ModelBase(UDS_VM_ModelBase *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ModelBase__6B_;
  (this->Model).field0_0x0.DebugPtr = (UDS_ModelBase *)0x0;
  *(undefined8 *)&this->UpdateViewDelegate = 0;
  *(undefined8 *)&(this->UpdateViewDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateViewDelegate).field_0x10 = 0;
  return this;
}

// ~UDS_VM_ModelBase @ 14b69b490

void __thiscall UDS_VM_ModelBase::~UDS_VM_ModelBase(UDS_VM_ModelBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ModelBase__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdateViewDelegate);
  pvVar1 = *(void **)&(this->UpdateViewDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->UpdateViewDelegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b69e4a0

UClass * __cdecl UDS_VM_ModelBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ModelBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ModelBase",
               &Z_Registration_Info_UClass_UDS_VM_ModelBase.InnerSingleton,
               StaticRegisterNativesUDS_VM_ModelBase,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_ModelBase>,
               InternalVTableHelperCtorCaller<UDS_VM_ModelBase>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ModelBase.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ModelBase @ 14b69e800

void __cdecl UDS_VM_ModelBase::StaticRegisterNativesUDS_VM_ModelBase(void)

{
  return;
}

// BindModel @ 14be11c60

void __thiscall UDS_VM_ModelBase::BindModel(UDS_VM_ModelBase *this)

{
  UDS_ModelBase *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = (this->Model).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_ModelBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014be11c82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2c8))();
    return;
  }
  return;
}

// OnPostSetViewModel @ 14be326b0

void __thiscall
UDS_VM_ModelBase::OnPostSetViewModel
          (UDS_VM_ModelBase *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pcVar2 = *(code **)(this->_padding_ + 0x330);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (*pcVar2)(this,local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSetViewModel @ 14be39cc0

void __thiscall
UDS_VM_ModelBase::OnSetViewModel(UDS_VM_ModelBase *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  undefined1 *puVar1;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *this_00;
  TReferenceControllerBase<1> *pTVar2;
  UDS_ModelBase *pUVar3;
  code *pcVar4;
  FDS_ViewModelContext_ModelBase *pFVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UDS_VM_ModelBase *local_res8;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  FReadAccessScope local_58;
  FDestructionSentinel local_40;
  undefined1 *local_28;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  this_00 = &this->UpdateViewDelegate;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_58);
  puVar1 = &(this->UpdateViewDelegate).field_0x8;
  if ((*(int *)&(this->UpdateViewDelegate).field_0x10 == 0) ||
     (*(longlong **)puVar1 == (longlong *)0x0)) {
LAB_14be39d30:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    local_78.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_78.Object = (FDS_ViewModelContext_ModelBase *)OnUpdateView;
    local_78.SharedReferenceCount.ReferenceController._4_4_ =
         local_68.SharedReferenceCount.ReferenceController._4_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_40);
    local_28 = puVar1;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_ModelBase____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_ModelBase *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      local_res8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_ModelBase *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res8);
      puVar8[4] = local_78.Object;
      puVar8[5] = CONCAT44(local_78.SharedReferenceCount.ReferenceController._4_4_,
                           local_78.SharedReferenceCount.ReferenceController._0_4_);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
  }
  else {
    cVar6 = (**(code **)(**(longlong **)puVar1 + 0x38))();
    if (cVar6 == '\0') goto LAB_14be39d30;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  pUVar3 = (this->Model).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_ModelBase *)0x0) {
    UDS_ModelBase::RemoveUpdateViewDelegate(pUVar3,this_00);
    (this->Model).field0_0x0.DebugPtr = (UDS_ModelBase *)0x0;
  }
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
  SafeCast<FDS_ViewModelContext_ModelBase>(&local_78,&local_68);
  pFVar5 = local_78.Object;
  if (local_78.Object != (FDS_ViewModelContext_ModelBase *)0x0) {
    if (local_78.Object == (FDS_ViewModelContext_ModelBase *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pUVar3 = (pFVar5->Model).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UDS_ModelBase *)0x0)) {
      (this->Model).field0_0x0.DebugPtr = pUVar3;
      if (pUVar3 == (UDS_ModelBase *)0x0) goto LAB_14be39ee3;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      (this->Model).field0_0x0.DebugPtr = pUVar3;
    }
    (**(code **)(pUVar3->_padding_ + 0x2b0))(pUVar3);
    UDS_ModelBase::AddUpdateViewDelegate((this->Model).field0_0x0.DebugPtr,this_00);
  }
LAB_14be39ee3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_78.SharedReferenceCount.ReferenceController._4_4_,
                      local_78.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateView @ 14be451e0

void __thiscall
UDS_VM_ModelBase::OnUpdateView
          (UDS_VM_ModelBase *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014be451e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x330))();
  return;
}

// UnbindModel @ 14be55530

void __thiscall UDS_VM_ModelBase::UnbindModel(UDS_VM_ModelBase *this)

{
  UDS_ModelBase *this_00;
  UClass *pUVar1;
  void *pvVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  this_00 = (this->Model).field0_0x0.DebugPtr;
  if (this_00 != (UDS_ModelBase *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
    }
    pUVar1 = Z_Construct_UClass_UDS_ObjectPoolItem_NoRegister();
    pvVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar1);
    if ((pvVar2 == (void *)0x0) || (*(char *)((longlong)pvVar2 + 0x10) != '\x01')) {
      (**(code **)(((this->Model).field0_0x0.DebugPtr)->_padding_ + 0x2d0))();
    }
  }
  return;
}

// UpdateView @ 14be5aa40

void __thiscall
UDS_VM_ModelBase::UpdateView
          (UDS_VM_ModelBase *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  UDS_ModelBase *this_00;
  
  this_00 = (this->Model).field0_0x0.DebugPtr;
  if (this_00 != (UDS_ModelBase *)0x0) {
    UDS_ModelBase::SetDirty(this_00,false);
    return;
  }
  return;
}

