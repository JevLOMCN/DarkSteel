// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// SetOnStatusDetailBtnClickedEvent_WrapperImpl @ 14b7241d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_CharacterStatusPanel::SetOnStatusDetailBtnClickedEvent_WrapperImpl
          (void *param_1,void *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UObject *pUVar5;
  undefined1 auStackY_1d8 [32];
  FWeakObjectPtr aFStack_1a8 [2];
  code *pcStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 auStack_188 [8];
  FDelegateAllocation FStack_180;
  void *pvStack_170;
  FDestructionSentinel FStack_168;
  FDelegateAllocation *pFStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  UDS_CharInfoData::GetData((ulong64)aFStack_1a8);
  bVar1 = FWeakObjectPtr::IsValid(aFStack_1a8);
  if (bVar1) {
    pcStack_198 = OnOpenStatusDetailPopup;
    uStack_190 = 0;
    auStack_188 = (undefined1  [8])0x0;
    FStack_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_180.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_188,
               (FWriteAccessScope *)&FStack_168);
    pFStack_150 = &FStack_180;
    puVar3 = UE::Core::Private::DelegateAllocate(0x30,&FStack_180);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_CharacterStatusPanel____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar3[3] = 0;
      pvStack_170 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&pvStack_170);
      puVar3[4] = pcStack_198;
      puVar3[5] = CONCAT44(uStack_18c,uStack_190);
    }
    if (FStack_168.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_168.Accessor,&FStack_168);
    }
    pUVar5 = FWeakObjectPtr::Get(aFStack_1a8);
    FDS_CharacterService::RequestStatusDetailView
              (*(int *)&pUVar5[8].field_0x8,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_188);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_148,"UDS_VM_W_CharacterStatusPanel::OnStatusDetailBtnClicked",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,TStack_148.Ptr,0x58,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)TStack_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_148._padding_);
      }
    }
  }
  return;
}

// StaticClass @ 14b7241e0

UClass * __cdecl UDS_VM_W_CharacterStatusPanel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CharacterStatusPanel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CharacterStatusPanel",
               &Z_Registration_Info_UClass_UDS_VM_W_CharacterStatusPanel.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CharacterStatusPanel,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_CharacterStatusPanel>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CharacterStatusPanel>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CharacterStatusPanel.InnerSingleton;
}

// UDS_VM_W_CharacterStatusPanel @ 14b727030

UDS_VM_W_CharacterStatusPanel * __thiscall
UDS_VM_W_CharacterStatusPanel::UDS_VM_W_CharacterStatusPanel
          (UDS_VM_W_CharacterStatusPanel *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterStatusPanel__6B_;
  (this->VM_SelectedCharInfoData).field0_0x0.DebugPtr = (UDS_VM_CharInfoData *)0x0;
  (this->VM_W_LevelGauge).field0_0x0.DebugPtr = (UDS_VM_W_Common_LevelGauge *)0x0;
  (this->VM_StatusUpgrade).field0_0x0.DebugPtr = (UDS_VM_CharStatusUpgrade *)0x0;
  (this->VM_W_LevelupInfo).field0_0x0.DebugPtr = (UDS_VM_W_CharacterLevelupInfo *)0x0;
  (this->VM_W_LevelupInfoMaterial).field0_0x0.DebugPtr =
       (UDS_VM_W_CharacterLevelupInfoMaterial *)0x0;
  (this->OnStatusDetailBtnClickedEvent)._padding_ = '\0';
  (this->OnStatusDetailBtnClickedEvent).bIsCustomSelected = false;
  (this->OnStatusDetailBtnClickedEvent).bIsLacked = false;
  (this->OnStatusDetailBtnClickedEvent).bIsCustomDisabled = false;
  (this->OnStatusDetailBtnClickedEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnStatusDetailBtnClickedEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnStatusDetailBtnClickedEvent).Delegate = 0;
  *(undefined8 *)&(this->OnStatusDetailBtnClickedEvent).Delegate.field_0x8 = 0;
  (this->M_CharLevelGauge).field0_0x0.DebugPtr = (UDS_M_CommonLevelGauge_CharLevelup *)0x0;
  this->PanelType = Info;
  this->CharEntityID = 0;
  this->PanelSwitcherIndex = 1;
  this->HaveVisibility = Collapsed;
  return this;
}

// UDS_VM_W_CharacterStatusPanel @ 14b7270e0

UDS_VM_W_CharacterStatusPanel * __thiscall
UDS_VM_W_CharacterStatusPanel::UDS_VM_W_CharacterStatusPanel
          (UDS_VM_W_CharacterStatusPanel *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterStatusPanel__6B_;
  (this->VM_SelectedCharInfoData).field0_0x0.DebugPtr = (UDS_VM_CharInfoData *)0x0;
  (this->VM_W_LevelGauge).field0_0x0.DebugPtr = (UDS_VM_W_Common_LevelGauge *)0x0;
  (this->VM_StatusUpgrade).field0_0x0.DebugPtr = (UDS_VM_CharStatusUpgrade *)0x0;
  (this->VM_W_LevelupInfo).field0_0x0.DebugPtr = (UDS_VM_W_CharacterLevelupInfo *)0x0;
  (this->VM_W_LevelupInfoMaterial).field0_0x0.DebugPtr =
       (UDS_VM_W_CharacterLevelupInfoMaterial *)0x0;
  (this->OnStatusDetailBtnClickedEvent)._padding_ = '\0';
  (this->OnStatusDetailBtnClickedEvent).bIsCustomSelected = false;
  (this->OnStatusDetailBtnClickedEvent).bIsLacked = false;
  (this->OnStatusDetailBtnClickedEvent).bIsCustomDisabled = false;
  (this->OnStatusDetailBtnClickedEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnStatusDetailBtnClickedEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnStatusDetailBtnClickedEvent).Delegate = 0;
  *(undefined8 *)&(this->OnStatusDetailBtnClickedEvent).Delegate.field_0x8 = 0;
  (this->M_CharLevelGauge).field0_0x0.DebugPtr = (UDS_M_CommonLevelGauge_CharLevelup *)0x0;
  this->PanelType = Info;
  this->CharEntityID = 0;
  this->PanelSwitcherIndex = 1;
  this->HaveVisibility = Collapsed;
  return this;
}

// ~UDS_VM_W_CharacterStatusPanel @ 14b728d10

void __thiscall
UDS_VM_W_CharacterStatusPanel::~UDS_VM_W_CharacterStatusPanel(UDS_VM_W_CharacterStatusPanel *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterStatusPanel__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OnStatusDetailBtnClickedEvent).Delegate);
  pvVar1 = *(void **)&(this->OnStatusDetailBtnClickedEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnStatusDetailBtnClickedEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b72ac70

IClassDescriptor * __thiscall
UDS_VM_W_CharacterStatusPanel::GetFieldNotificationDescriptor(UDS_VM_W_CharacterStatusPanel *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_CharacterStatusPanel::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b72b220

UClass * __cdecl UDS_VM_W_CharacterStatusPanel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CharacterStatusPanel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CharacterStatusPanel",
               &Z_Registration_Info_UClass_UDS_VM_W_CharacterStatusPanel.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CharacterStatusPanel,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_CharacterStatusPanel>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CharacterStatusPanel>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CharacterStatusPanel.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_CharacterStatusPanel @ 14b72bda0

void __cdecl UDS_VM_W_CharacterStatusPanel::StaticRegisterNativesUDS_VM_W_CharacterStatusPanel(void)

{
  return;
}

// BindModel @ 14bf9ca80

void __thiscall UDS_VM_W_CharacterStatusPanel::BindModel(UDS_VM_W_CharacterStatusPanel *this)

{
  UDS_CharacterUIEvent *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_VM_W_CharacterStatusPanel *local_res10;
  ulonglong uStack_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pUVar1 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar1 != (UDS_CharacterUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangeDetailPanel,
               this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_CharStatusPanelType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_CharacterStatusPanel>
              (&pUVar1->OnChangeDetailPanel,(UDS_VM_W_CharacterStatusPanel *)&local_res10,
               (pmf_7df063d7 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdateTargetExp,this
              );
    TMulticastDelegateRegistration<void___cdecl(int,__int64,__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_CharacterStatusPanel>
              ((TMulticastDelegateRegistration<void___cdecl(int,__int64,__int64),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnUpdateTargetExp,(UDS_VM_W_CharacterStatusPanel *)&local_res10,
               (pmf_dcaa54ac *)this);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar1->QueryCharLevelupGuageData);
    uStack_30 = uStack_30 & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar1->QueryCharLevelupGuageData,(FWriteAccessScope *)&local_28);
    local_10 = &(pUVar1->QueryCharLevelupGuageData).Delegate.field_0x8;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6A_AUFDS_CharLevelupData__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_CharacterStatusPanel____A6A_AUFDS_CharLevelupData__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_W_CharacterStatusPanel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_W_CharacterStatusPanel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = GetCharLevelupData;
      puVar2[5] = uStack_30;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
  }
  return;
}

// GetCharLevelupData @ 14bfab080

FDS_CharLevelupData * __thiscall
UDS_VM_W_CharacterStatusPanel::GetCharLevelupData
          (UDS_VM_W_CharacterStatusPanel *this,FDS_CharLevelupData *__return_storage_ptr__)

{
  UDS_VM_W_CharacterLevelupInfoMaterial *pUVar1;
  UDS_VM_CharacterLevelup *this_00;
  
  pUVar1 = (this->VM_W_LevelupInfoMaterial).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_VM_W_CharacterLevelupInfoMaterial *)0x0) &&
     (this_00 = (pUVar1->VM_Levelup).field0_0x0.DebugPtr, this_00 != (UDS_VM_CharacterLevelup *)0x0)
     ) {
    UDS_VM_CharacterLevelup::GetCharLevelupData(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  __return_storage_ptr__->AddExp = 0;
  __return_storage_ptr__->PostLevelUpExp = 0;
  return __return_storage_ptr__;
}

// OnChangedPanelType @ 14bfb6c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterStatusPanel::OnChangedPanelType
          (UDS_VM_W_CharacterStatusPanel *this,EDS_CharStatusPanelType param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UDS_VM_W_CharacterLevelupInfoMaterial *pUVar7;
  FDS_ViewModelContext *pFVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *pUVar10;
  UDS_VM_W_CharacterLevelupInfo *pUVar11;
  longlong *plVar12;
  FDS_ViewModelContext *pFVar13;
  FDS_ViewModelContext *pFVar14;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_1b0;
  FName local_1a8;
  int local_1a0;
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TSharedPtr<FDS_ViewModelContext,1> local_138;
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  this->PanelType = param_1;
  if (param_1 == Info) {
    pFVar13 = (FDS_ViewModelContext *)0x0;
    if ((this->VM_W_LevelupInfo).field0_0x0.DebugPtr == (UDS_VM_W_CharacterLevelupInfo *)0x0) {
      local_1b0 = 0;
      pUVar5 = Z_Construct_UClass_UDS_VM_W_CharacterLevelupInfo_NoRegister();
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_VM_W_CharacterLevelupInfo_NoRegister();
      CheckIsClassChildOf_Internal(pUVar6,pUVar5);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_a8,pUVar5);
      local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_a8._56_8_ = (UPackage *)0x0;
      local_a8._16_4_ = 0;
      local_a8._20_4_ = 0;
      local_a8._24_4_ = RF_Transient;
      local_a8._40_8_ = (UObject *)0x0;
      local_a8[0x20] = false;
      local_a8._8_8_ = this;
      pUVar11 = (UDS_VM_W_CharacterLevelupInfo *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
      if (local_a8._64_8_ != 0) {
        plVar12 = (longlong *)(local_a8 + 0x50);
        if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
          plVar12 = (longlong *)local_a8._104_8_;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (pUVar11 != (UDS_VM_W_CharacterLevelupInfo *)0x0) {
        *(undefined1 *)((longlong)&pUVar11->_padding_ + 4) = 0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar11 != (UDS_VM_W_CharacterLevelupInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      (this->VM_W_LevelupInfo).field0_0x0.DebugPtr = pUVar11;
    }
    pFVar8 = ::operator_new(0x28);
    pFVar14 = pFVar13;
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar8->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
      (pFVar8->ViewModelName).ComparisonIndex = 0;
      (pFVar8->ViewModelName).Number = 0;
      pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_CharacterStatusInfoPanel__6B_;
      pFVar8[1]._padding_ = 0;
      pFVar14 = pFVar8;
    }
    pFVar8 = ::operator_new(0x20);
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar8->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar8->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharacterStatusInfoPanel__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar8->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar8->ViewModelTemplateKey = pFVar14;
      pFVar13 = pFVar8;
    }
    if ((pFVar14 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar9 = FDS_ViewModelContext_CharacterStatusInfoPanel::StaticStruct();
    *(UScriptStruct **)&pFVar14->DerivedStaticStruct = pUVar9;
    pUVar10 = UDS_ViewModelContextManager::GetInst();
    if (pUVar10 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar13 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar13->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_158.Object = pFVar14;
      local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
      UDS_ViewModelContextManager::RegisterContext(pUVar10,&local_158);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.SharedReferenceCount.ReferenceController);
    }
    pFVar14[1]._padding_ = this->CharEntityID;
    pUVar11 = (this->VM_W_LevelupInfo).field0_0x0.DebugPtr;
    if (pFVar13 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar13->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_138.Object = pFVar14;
    local_138.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar11,&local_138);
    local_180 = FFieldNotificationClassDescriptor::VM_W_LevelupInfo.BitNumber;
    local_188 = FFieldNotificationClassDescriptor::VM_W_LevelupInfo.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    iVar3 = FFieldNotificationClassDescriptor::PanelSwitcherIndex.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::PanelSwitcherIndex.FieldName;
    if (this->PanelSwitcherIndex != 1) {
      this->PanelSwitcherIndex = 1;
      local_170 = iVar3;
      local_178 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
    }
  }
  else {
    if ((param_1 != Levelup) && (param_1 != Ascend)) {
      return;
    }
    pFVar13 = (FDS_ViewModelContext *)0x0;
    if ((this->VM_W_LevelupInfoMaterial).field0_0x0.DebugPtr ==
        (UDS_VM_W_CharacterLevelupInfoMaterial *)0x0) {
      local_1b8 = 0;
      pUVar5 = Z_Construct_UClass_UDS_VM_W_CharacterLevelupInfoMaterial_NoRegister();
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_VM_W_CharacterLevelupInfoMaterial_NoRegister();
      CheckIsClassChildOf_Internal(pUVar6,pUVar5);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_128,pUVar5);
      local_128._48_8_ = (FObjectInstancingGraph *)0x0;
      local_128._56_8_ = (UPackage *)0x0;
      local_128._16_4_ = 0;
      local_128._20_4_ = 0;
      local_128._24_4_ = RF_Transient;
      local_128._40_8_ = (UObject *)0x0;
      local_128[0x20] = false;
      local_128._8_8_ = this;
      pUVar7 = (UDS_VM_W_CharacterLevelupInfoMaterial *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
      if (local_128._64_8_ != 0) {
        plVar12 = (longlong *)(local_128 + 0x50);
        if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
          plVar12 = (longlong *)local_128._104_8_;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (pUVar7 != (UDS_VM_W_CharacterLevelupInfoMaterial *)0x0) {
        *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 != (UDS_VM_W_CharacterLevelupInfoMaterial *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      (this->VM_W_LevelupInfoMaterial).field0_0x0.DebugPtr = pUVar7;
    }
    pFVar8 = ::operator_new(0x30);
    pFVar14 = pFVar13;
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar8->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar8[1].DerivedStaticStruct = 0;
      *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
      (pFVar8->ViewModelName).ComparisonIndex = 0;
      (pFVar8->ViewModelName).Number = 0;
      pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_CharacterLevelupMaterialPanel__6B_;
      pFVar8[1]._padding_ = 0;
      pFVar14 = pFVar8;
    }
    pFVar8 = ::operator_new(0x20);
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar8->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar8->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharacterLevelupMaterialPanel__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar8->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar8->ViewModelTemplateKey = pFVar14;
      pFVar13 = pFVar8;
    }
    if ((pFVar14 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar9 = FDS_ViewModelContext_CharacterLevelupMaterialPanel::StaticStruct();
    *(UScriptStruct **)&pFVar14->DerivedStaticStruct = pUVar9;
    pUVar10 = UDS_ViewModelContextManager::GetInst();
    if (pUVar10 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar13 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar13->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_168.Object = pFVar14;
      local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
      UDS_ViewModelContextManager::RegisterContext(pUVar10,&local_168);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.SharedReferenceCount.ReferenceController);
    }
    pFVar14[1]._padding_ = this->CharEntityID;
    *(EDS_CharStatusPanelType *)&pFVar14[1].DerivedStaticStruct = this->PanelType;
    pUVar7 = (this->VM_W_LevelupInfoMaterial).field0_0x0.DebugPtr;
    if (pFVar13 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar13->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_148.Object = pFVar14;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar7,&local_148);
    local_1a0 = FFieldNotificationClassDescriptor::VM_W_LevelupInfoMaterial.BitNumber;
    local_1a8 = FFieldNotificationClassDescriptor::VM_W_LevelupInfoMaterial.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
    iVar3 = FFieldNotificationClassDescriptor::PanelSwitcherIndex.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::PanelSwitcherIndex.FieldName;
    if (this->PanelSwitcherIndex != 0) {
      this->PanelSwitcherIndex = 0;
      local_190 = iVar3;
      local_198 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar13);
  return;
}

// OnOpenStatusDetailPopup @ 14bfc0130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterStatusPanel::OnOpenStatusDetailPopup(UDS_VM_W_CharacterStatusPanel *this)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8 [8];
  FDelegateAllocation local_1b0;
  code *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  bool local_188;
  UDS_VM_W_CharacterStatusPanel *local_178;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_CharacterStatusPanel::OnOpenStatusDetailPopup",0x36,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_148.Ptr,100,L"windowMng is nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    uStack_190 = 0;
    local_198 = OnStatusDetailPopupOpened;
    local_1b8 = (undefined1  [8])0x0;
    local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_170);
    local_158 = &local_1b0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_1b0);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_CharacterStatusPanel____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_W_CharacterStatusPanel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_178 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_W_CharacterStatusPanel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_178);
      puVar2[4] = local_198;
      puVar2[5] = CONCAT44(uStack_18c,uStack_190);
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_198,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_1b8);
    UDS_WindowManager::OpenWindow(this_00,StatusDetailPopup,pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_198);
    if ((local_1b0.DelegateSize != 0) &&
       (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1b0,0,0,0x10);
      local_1b0.DelegateSize = 0;
    }
    if (local_188 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_18c,uStack_190),
                 (FDestructionSentinel *)&local_198);
    }
    if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_1b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1b8);
  }
  return;
}

// OnSetViewModel @ 14bfc8160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterStatusPanel::OnSetViewModel
          (UDS_VM_W_CharacterStatusPanel *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ulong64 uVar2;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  FDS_ViewModelContext_CharInfoData *pFVar6;
  bool bVar7;
  UDS_LogManager *pUVar8;
  UDS_VM_CharInfoData *pUVar9;
  undefined1 auStackY_1d8 [32];
  TSharedPtr<FDS_ViewModelContext_CharInfoData,1> local_1a8;
  TSharedPtr<FDS_ViewModelContext_CharacterStatusPanel,1> local_198;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_168.Object = param_1->Object;
  local_168.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CharacterStatusPanel>(&local_198,&local_168);
  if (local_198.Object == (FDS_ViewModelContext_CharacterStatusPanel *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_CharacterStatusPanel::OnSetViewModel",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_148.Ptr,0x1f,L"context is Invalid.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1965717462347415584>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_CharacterStatusPanel.cpp"
                       ,0x20,"false");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    goto LAB_14bfc8499;
  }
  if ((local_198.Object == (FDS_ViewModelContext_CharacterStatusPanel *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar9 = (this->VM_SelectedCharInfoData).field0_0x0.DebugPtr;
  this->CharEntityID = (local_198.Object)->CharEntityID;
  if (pUVar9 == (UDS_VM_CharInfoData *)0x0) {
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CharInfoData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_CharInfoData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_SelectedCharInfoData).field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 != (UDS_VM_CharInfoData *)0x0) goto LAB_14bfc830b;
  }
  else {
LAB_14bfc830b:
    MakeContext<FDS_ViewModelContext_CharInfoData>(&local_1a8);
    pFVar6 = local_1a8.Object;
    if (local_1a8.Object != (FDS_ViewModelContext_CharInfoData *)0x0) {
      if ((local_1a8.Object == (FDS_ViewModelContext_CharInfoData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)&pFVar6->_padding_ = 0xe;
      if ((local_198.Object == (FDS_ViewModelContext_CharacterStatusPanel *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar2 = (local_198.Object)->CharEntityID;
      if ((pFVar6 == (FDS_ViewModelContext_CharInfoData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6->CharEntityID = uVar2;
      pUVar9 = (this->VM_SelectedCharInfoData).field0_0x0.DebugPtr;
      local_158.Object = (FDS_ViewModelContext *)local_1a8.Object;
      local_158.SharedReferenceCount.ReferenceController =
           local_1a8.SharedReferenceCount.ReferenceController;
      if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_158);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.SharedReferenceCount.ReferenceController);
  }
  local_180 = FFieldNotificationClassDescriptor::VM_SelectedCharInfoData.BitNumber;
  local_188 = FFieldNotificationClassDescriptor::VM_SelectedCharInfoData.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
  iVar5 = FFieldNotificationClassDescriptor::HaveVisibility.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::HaveVisibility.FieldName;
  if (this->HaveVisibility != SelfHitTestInvisible) {
    this->HaveVisibility = SelfHitTestInvisible;
    local_170 = iVar5;
    local_178 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
  }
  OnChangedPanelType(this,Info);
  UpdateLevelGauge(this,0,0,0);
  UpdateStatusInfo(this,0);
LAB_14bfc8499:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnStatusDetailBtnClicked @ 14bfcfb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterStatusPanel::OnStatusDetailBtnClicked
          (UDS_VM_W_CharacterStatusPanel *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UObject *pUVar5;
  undefined1 auStackY_1d8 [32];
  FWeakObjectPtr local_1a8 [2];
  code *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  UDS_VM_W_CharacterStatusPanel *local_170;
  FDestructionSentinel local_168;
  FDelegateAllocation *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  UDS_CharInfoData::GetData((ulong64)local_1a8);
  bVar1 = FWeakObjectPtr::IsValid(local_1a8);
  if (bVar1) {
    local_198 = OnOpenStatusDetailPopup;
    uStack_190 = 0;
    local_188 = (undefined1  [8])0x0;
    local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_180.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_168);
    local_150 = &local_180;
    puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_180);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_CharacterStatusPanel____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_170 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_170);
      puVar3[4] = local_198;
      puVar3[5] = CONCAT44(uStack_18c,uStack_190);
    }
    if (local_168.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
    }
    pUVar5 = FWeakObjectPtr::Get(local_1a8);
    FDS_CharacterService::RequestStatusDetailView
              (*(int *)&pUVar5[8].field_0x8,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_188);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_CharacterStatusPanel::OnStatusDetailBtnClicked",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0x58,L"charInfoData is Invalid. CharEntityID : %llu"
                );
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// OnStatusDetailPopupOpened @ 14bfcfd80

void __thiscall
UDS_VM_W_CharacterStatusPanel::OnStatusDetailPopupOpened
          (UDS_VM_W_CharacterStatusPanel *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_00;
  UObject *pUVar5;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UDS_UserWidget *local_res20;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    UDS_CharInfoData::GetData((ulong64)&local_res18);
    bVar2 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar2) {
      pFVar3 = ::operator_new(0x30);
      pFVar7 = (FDS_ViewModelContext *)0x0;
      pFVar6 = pFVar7;
      if (pFVar3 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
        ((atomic<int> *)&pFVar3[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
        *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
        (pFVar3->ViewModelName).ComparisonIndex = 0;
        (pFVar3->ViewModelName).Number = 0;
        pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_StatusCategoryList__6B_;
        pFVar3[1]._padding_ = 0;
        *(atomic<int> *)&pFVar3[1].DerivedStaticStruct = (atomic<int>)0x0;
        pFVar6 = pFVar3;
      }
      pFVar3 = ::operator_new(0x20);
      if (pFVar3 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar3->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_StatusCategoryList__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar6;
        pFVar7 = pFVar3;
      }
      if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar4 = FDS_ViewModelContext_StatusCategoryList::StaticStruct();
      *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar4;
      this_00 = UDS_ViewModelContextManager::GetInst();
      if (this_00 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar7->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_48.Object = pFVar6;
        local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
        UDS_ViewModelContextManager::RegisterContext(this_00,&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
      }
      pFVar6->ViewModelTemplateKey = StatusCategoryList;
      pFVar6[1]._padding_ = this->CharEntityID;
      pUVar5 = FWeakObjectPtr::Get(&local_res18);
      *(atomic<int> *)&pFVar6[1].DerivedStaticStruct = *(atomic<int> *)&pUVar5[8].field_0x8;
      *(undefined1 *)((atomic<int> *)&pFVar6[1].DerivedStaticStruct + 1) = 1;
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar7->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_38.Object = pFVar6;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res20 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_38,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar7);
    }
  }
  return;
}

// UnbindModel @ 14bfdfd30

void __thiscall UDS_VM_W_CharacterStatusPanel::UnbindModel(UDS_VM_W_CharacterStatusPanel *this)

{
  UDS_CharacterUIEvent *pUVar1;
  
  pUVar1 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar1 != (UDS_CharacterUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangeDetailPanel,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdateTargetExp,this
              );
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar1->QueryCharLevelupGuageData);
  }
  return;
}

// UpdateLevelGauge @ 14bfe3e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterStatusPanel::UpdateLevelGauge
          (UDS_VM_W_CharacterStatusPanel *this,int param_1,long64 param_2,long64 param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ViewModelContext *pFVar2;
  UClass *pUVar3;
  UDS_M_CommonLevelGauge_CharLevelup *pUVar4;
  UClass *pUVar5;
  UDS_VM_W_Common_LevelGauge *pUVar6;
  longlong *plVar7;
  atomic<int> *paVar8;
  undefined1 auStack_d8 [32];
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((this->M_CharLevelGauge).field0_0x0.DebugPtr == (UDS_M_CommonLevelGauge_CharLevelup *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_M_CommonLevelGauge_CharLevelup_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar3);
    local_a8._8_8_ = this;
    pUVar4 = (UDS_M_CommonLevelGauge_CharLevelup *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar7 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_M_CommonLevelGauge_CharLevelup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->M_CharLevelGauge).field0_0x0.DebugPtr = pUVar4;
  }
  pUVar6 = (this->VM_W_LevelGauge).field0_0x0.DebugPtr;
  if (pUVar6 == (UDS_VM_W_Common_LevelGauge *)0x0) {
    local_b8.Object = (FDS_ViewModelContext *)0x0;
    pUVar3 = Z_Construct_UClass_UDS_VM_W_Common_LevelGauge_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_VM_W_Common_LevelGauge_NoRegister();
    CheckIsClassChildOf_Internal(pUVar5,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar3);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar6 = (UDS_VM_W_Common_LevelGauge *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar7 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if (pUVar6 != (UDS_VM_W_Common_LevelGauge *)0x0) {
      *(undefined1 *)((longlong)&pUVar6->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_W_Common_LevelGauge *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->VM_W_LevelGauge).field0_0x0.DebugPtr = pUVar6;
  }
  pUVar4 = (this->M_CharLevelGauge).field0_0x0.DebugPtr;
  if ((pUVar4 != (UDS_M_CommonLevelGauge_CharLevelup *)0x0) &&
     (pUVar6 != (UDS_VM_W_Common_LevelGauge *)0x0)) {
    UDS_M_CommonLevelGauge_CharLevelup::SetCharInfo(pUVar4,this->CharEntityID);
    pUVar4 = (this->M_CharLevelGauge).field0_0x0.DebugPtr;
    plVar7 = (longlong *)(**(code **)(pUVar4->_padding_ + 0x310))(pUVar4,&local_b8);
    pTVar1 = (TReferenceControllerBase<1> *)plVar7[1];
    pFVar2 = (FDS_ViewModelContext *)*plVar7;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = &pTVar1->SharedReferenceCount;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    if (pFVar2 != (FDS_ViewModelContext *)0x0) {
      pUVar6 = (this->VM_W_LevelGauge).field0_0x0.DebugPtr;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar8 = (atomic<int>)((int)*paVar8 + 1);
        UNLOCK();
      }
      local_b8.Object = pFVar2;
      local_b8.SharedReferenceCount.ReferenceController = pTVar1;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar6,&local_b8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    local_b8.SharedReferenceCount.ReferenceController._0_4_ =
         FFieldNotificationClassDescriptor::VM_W_LevelGauge.BitNumber;
    local_b8.Object =
         (FDS_ViewModelContext *)FFieldNotificationClassDescriptor::VM_W_LevelGauge.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  }
  return;
}

// UpdatePreviewLevelUpStatus @ 14bfe4a10

void __thiscall
UDS_VM_W_CharacterStatusPanel::UpdatePreviewLevelUpStatus
          (UDS_VM_W_CharacterStatusPanel *this,int param_1,long64 param_2,long64 param_3)

{
  UpdateLevelGauge(this,param_1,param_2,param_3);
  UpdateStatusInfo(this,param_1);
  return;
}

// UpdateStatusInfo @ 14bfe58e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterStatusPanel::UpdateStatusInfo(UDS_VM_W_CharacterStatusPanel *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_CharStatusUpgrade *pUVar5;
  FDS_ViewModelContext *pFVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_00;
  longlong *plVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  FName local_d8;
  int local_d0;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar10 = (FDS_ViewModelContext *)0x0;
  if ((this->VM_StatusUpgrade).field0_0x0.DebugPtr == (UDS_VM_CharStatusUpgrade *)0x0) {
    local_e8 = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_CharStatusUpgrade_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_VM_CharStatusUpgrade_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar3);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar5 = (UDS_VM_CharStatusUpgrade *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_CharStatusUpgrade *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_CharStatusUpgrade *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_StatusUpgrade).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UDS_VM_CharStatusUpgrade *)0x0) goto LAB_14bfe5b14;
  }
  pFVar6 = ::operator_new(0x30);
  pFVar9 = pFVar10;
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
    ((atomic<int> *)&pFVar6[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
    *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
    (pFVar6->ViewModelName).ComparisonIndex = 0;
    (pFVar6->ViewModelName).Number = 0;
    pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_CharStatusUpgrade__6B_;
    pFVar6[1]._padding_ = 0;
    *(atomic<int> *)&pFVar6[1].DerivedStaticStruct = (atomic<int>)0x0;
    pFVar9 = pFVar6;
  }
  pFVar6 = ::operator_new(0x20);
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharStatusUpgrade__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar9;
    pFVar10 = pFVar6;
  }
  if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar7 = FDS_ViewModelContext_CharStatusUpgrade::StaticStruct();
  *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar7;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_c8.Object = pFVar9;
    local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
  }
  pFVar9->ViewModelTemplateKey = CharacterStatusUpgrade;
  pFVar9[1]._padding_ = this->CharEntityID;
  *(int *)&pFVar9[1].DerivedStaticStruct = param_1;
  pUVar5 = (this->VM_StatusUpgrade).field0_0x0.DebugPtr;
  if (pFVar10 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar10->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_b8.Object = pFVar9;
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
LAB_14bfe5b14:
  local_d0 = FFieldNotificationClassDescriptor::VM_StatusUpgrade.BitNumber;
  local_d8 = FFieldNotificationClassDescriptor::VM_StatusUpgrade.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
  return;
}

