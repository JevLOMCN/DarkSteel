// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b753990

UClass * __cdecl UDS_VM_W_TotalMenu::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_TotalMenu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_TotalMenu",
               &Z_Registration_Info_UClass_UDS_VM_W_TotalMenu.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_TotalMenu,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_TotalMenu>,
               InternalVTableHelperCtorCaller<UDS_VM_W_TotalMenu>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_TotalMenu.InnerSingleton;
}

// UDS_VM_W_TotalMenu @ 14b759f70

UDS_VM_W_TotalMenu * __thiscall
UDS_VM_W_TotalMenu::UDS_VM_W_TotalMenu(UDS_VM_W_TotalMenu *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_TotalMenu__6B_;
  (this->VM_TotalMenu).field0_0x0.DebugPtr = (UDS_VM_TotalMenu *)0x0;
  (this->VM_TotalMenu_PlayerInfo).field0_0x0.DebugPtr = (UDS_VM_TotalMenu_PlayerInfo *)0x0;
  return this;
}

// UDS_VM_W_TotalMenu @ 14b759fc0

UDS_VM_W_TotalMenu * __thiscall
UDS_VM_W_TotalMenu::UDS_VM_W_TotalMenu(UDS_VM_W_TotalMenu *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_TotalMenu__6B_;
  (this->VM_TotalMenu).field0_0x0.DebugPtr = (UDS_VM_TotalMenu *)0x0;
  (this->VM_TotalMenu_PlayerInfo).field0_0x0.DebugPtr = (UDS_VM_TotalMenu_PlayerInfo *)0x0;
  return this;
}

// ~UDS_VM_W_TotalMenu @ 14b75bbe0

void __thiscall UDS_VM_W_TotalMenu::~UDS_VM_W_TotalMenu(UDS_VM_W_TotalMenu *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_TotalMenu__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b75de40

IClassDescriptor * __thiscall
UDS_VM_W_TotalMenu::GetFieldNotificationDescriptor(UDS_VM_W_TotalMenu *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_TotalMenu::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b75e7f0

UClass * __cdecl UDS_VM_W_TotalMenu::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_TotalMenu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_TotalMenu",
               &Z_Registration_Info_UClass_UDS_VM_W_TotalMenu.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_TotalMenu,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_TotalMenu>,
               InternalVTableHelperCtorCaller<UDS_VM_W_TotalMenu>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_TotalMenu.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_TotalMenu @ 14b75efc0

void __cdecl UDS_VM_W_TotalMenu::StaticRegisterNativesUDS_VM_W_TotalMenu(void)

{
  return;
}

// InitViewModel @ 14c01efd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_TotalMenu::InitViewModel(UDS_VM_W_TotalMenu *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_TotalMenu *pUVar3;
  UDS_VM_TotalMenu_PlayerInfo *pUVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->VM_TotalMenu).field0_0x0.DebugPtr == (UDS_VM_TotalMenu *)0x0) {
    local_a8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_TotalMenu_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_TotalMenu_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar3 = (UDS_VM_TotalMenu *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (pUVar3 != (UDS_VM_TotalMenu *)0x0) {
      *(undefined1 *)((longlong)&pUVar3->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_VM_TotalMenu *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VM_TotalMenu).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->VM_TotalMenu_PlayerInfo).field0_0x0.DebugPtr == (UDS_VM_TotalMenu_PlayerInfo *)0x0) {
    local_a8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_TotalMenu_PlayerInfo_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_TotalMenu_PlayerInfo_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar4 = (UDS_VM_TotalMenu_PlayerInfo *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (pUVar4 != (UDS_VM_TotalMenu_PlayerInfo *)0x0) {
      *(undefined1 *)((longlong)&pUVar4->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_TotalMenu_PlayerInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_TotalMenu_PlayerInfo).field0_0x0.DebugPtr = pUVar4;
  }
  return;
}

// OnSetViewModel @ 14c036180

void __thiscall
UDS_VM_W_TotalMenu::OnSetViewModel
          (UDS_VM_W_TotalMenu *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_TotalMenu *this_00;
  UDS_VM_TotalMenu_PlayerInfo *this_01;
  code *pcVar2;
  bool bVar3;
  FDS_ViewModelContext *pFVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *pUVar7;
  FDS_ViewModelContext *pFVar8;
  FDS_ViewModelContext *pFVar9;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar8 = (FDS_ViewModelContext *)0x0;
  if ((this->VM_TotalMenu).field0_0x0.DebugPtr != (UDS_VM_TotalMenu *)0x0) {
    pFVar4 = ::operator_new(0x20);
    pFVar9 = pFVar8;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_TotalMenu__6B_;
      pFVar9 = pFVar4;
    }
    pFVar5 = ::operator_new(0x20);
    pFVar4 = pFVar8;
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
      ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      pFVar5->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_TotalMenu__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar9;
      pFVar4 = pFVar5;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar6 = FDS_ViewModelContext_TotalMenu::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar6;
    pUVar7 = UDS_ViewModelContextManager::GetInst();
    if (pUVar7 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar4 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar4->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar4->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_58.Object = pFVar9;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar4;
      UDS_ViewModelContextManager::RegisterContext(pUVar7,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = TotalMenu;
    this_00 = (this->VM_TotalMenu).field0_0x0.DebugPtr;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar4->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar4->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_38.Object = pFVar9;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar4;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar4);
  }
  if ((this->VM_TotalMenu_PlayerInfo).field0_0x0.DebugPtr != (UDS_VM_TotalMenu_PlayerInfo *)0x0) {
    pFVar4 = ::operator_new(0x20);
    pFVar9 = pFVar8;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_TotalMenuPlayerInfo__6B_;
      pFVar9 = pFVar4;
    }
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
      ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      pFVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_TotalMenuPlayerInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar9;
      pFVar8 = pFVar4;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar6 = FDS_ViewModelContext_TotalMenuPlayerInfo::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar6;
    pUVar7 = UDS_ViewModelContextManager::GetInst();
    if (pUVar7 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar8->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_48.Object = pFVar9;
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
      UDS_ViewModelContextManager::RegisterContext(pUVar7,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = TotalMenu_PlayerInfo;
    this_01 = (this->VM_TotalMenu_PlayerInfo).field0_0x0.DebugPtr;
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar8->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_28.Object = pFVar9;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

