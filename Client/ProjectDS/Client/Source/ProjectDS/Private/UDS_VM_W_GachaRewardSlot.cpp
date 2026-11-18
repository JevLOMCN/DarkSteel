// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b72f690

UClass * __cdecl UDS_VM_W_GachaRewardSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GachaRewardSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GachaRewardSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_GachaRewardSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GachaRewardSlot,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_GachaRewardSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GachaRewardSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GachaRewardSlot.InnerSingleton;
}

// UDS_VM_W_GachaRewardSlot @ 14b7352b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_GachaRewardSlot * __thiscall
UDS_VM_W_GachaRewardSlot::UDS_VM_W_GachaRewardSlot
          (UDS_VM_W_GachaRewardSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_CharSlot).field0_0x0.DebugPtr = (UDS_VM_W_CharacterSlot *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->VM_ItemSlot).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  this->_padding_ = (longlong)&___7UDS_VM_W_GachaRewardSlot__6B_;
  this->RewardSlotSwitcherIndex = 0;
  ::FString::FString(&this->RewardName,L"");
  this->RewardStackCount = 0;
  (this->VM_CharRewardMoney).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  this->VisibilityRewardCount = Collapsed;
  this->RewardCountSwitcherIndex = 0;
  return this;
}

// UDS_VM_W_GachaRewardSlot @ 14b735340

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_GachaRewardSlot * __thiscall
UDS_VM_W_GachaRewardSlot::UDS_VM_W_GachaRewardSlot
          (UDS_VM_W_GachaRewardSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_CharSlot).field0_0x0.DebugPtr = (UDS_VM_W_CharacterSlot *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->VM_ItemSlot).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  this->_padding_ = (longlong)&___7UDS_VM_W_GachaRewardSlot__6B_;
  this->RewardSlotSwitcherIndex = 0;
  ::FString::FString(&this->RewardName,L"");
  this->RewardStackCount = 0;
  (this->VM_CharRewardMoney).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  this->VisibilityRewardCount = Collapsed;
  this->RewardCountSwitcherIndex = 0;
  return this;
}

// ~UDS_VM_W_GachaRewardSlot @ 14b736720

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_GachaRewardSlot::~UDS_VM_W_GachaRewardSlot(UDS_VM_W_GachaRewardSlot *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GachaRewardSlot__6B_;
  pFVar1 = (this->RewardName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b739670

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_W_GachaRewardSlot::GetFieldNotificationDescriptor(UDS_VM_W_GachaRewardSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_GachaRewardSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73a5c0

UClass * __cdecl UDS_VM_W_GachaRewardSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GachaRewardSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GachaRewardSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_GachaRewardSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GachaRewardSlot,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_GachaRewardSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GachaRewardSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GachaRewardSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_GachaRewardSlot @ 14b73afe0

void __cdecl UDS_VM_W_GachaRewardSlot::StaticRegisterNativesUDS_VM_W_GachaRewardSlot(void)

{
  return;
}

// OnSetViewModel @ 14bfcce20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_GachaRewardSlot::OnSetViewModel
          (UDS_VM_W_GachaRewardSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_GachaRewardType EVar1;
  int iVar2;
  code *pcVar3;
  FName FVar4;
  FDS_ViewModelContext_MoneyDisplay *pFVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UDS_VM_Item *pUVar10;
  undefined8 *puVar11;
  FDS_ItemBaseTableRow *this_00;
  FString *pFVar12;
  UDS_VM_W_CharacterSlot *pUVar13;
  FDS_ViewModelContext *pFVar14;
  UScriptStruct *pUVar15;
  UDS_ViewModelContextManager *this_01;
  UDS_VM_MoneyDisplay *pUVar16;
  longlong *plVar17;
  FDS_ViewModelContext *pFVar18;
  FDS_ViewModelContext *pFVar19;
  FDS_ViewModelContext_GachaRewardSlot *pFVar20;
  ESlateVisibility EVar21;
  undefined1 auStackY_748 [32];
  TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1> local_718;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_708;
  undefined8 local_6f8;
  UDS_M_ItemImplBase *local_6f0;
  undefined8 local_6e8;
  FDS_CharacterBaseTableRow *local_6e0;
  FName local_6d8;
  int local_6d0;
  FFieldId local_6c8;
  FName local_6b8;
  int local_6b0;
  FName local_6a8;
  int local_6a0;
  FName local_698;
  int local_690;
  FFieldId local_688;
  FName local_678;
  int local_670;
  FName local_668;
  int local_660;
  FName local_658;
  int local_650;
  FName local_648;
  int local_640;
  TSharedPtr<FDS_ViewModelContext,1> local_638;
  TSharedPtr<FDS_ViewModelContext,1> local_628;
  TSharedPtr<FDS_ViewModelContext,1> local_618;
  TSharedPtr<FDS_ViewModelContext,1> local_608;
  undefined1 local_5f8 [8];
  TReferenceControllerBase<1> *local_5f0;
  TSharedPtr<FDS_ViewModelContext,1> local_5e8;
  undefined1 local_5d8 [128];
  undefined1 local_558 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_748;
  local_628.Object = param_1->Object;
  local_628.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_628.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_628.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_628.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_GachaRewardSlot>(&local_718,&local_628);
  pFVar20 = local_718.Object;
  iVar2 = FFieldNotificationClassDescriptor::RewardSlotSwitcherIndex.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::RewardSlotSwitcherIndex.FieldName;
  if (local_718.Object == (FDS_ViewModelContext_GachaRewardSlot *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_4d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4d8,"UDS_VM_W_GachaRewardSlot::OnSetViewModel",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_4d8.Ptr,0x1a,L"gachaRewardSlotContext is nullptr.");
      if ((void *)local_4d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4d8._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_718.SharedReferenceCount.ReferenceController);
  }
  else {
    EVar1 = ((local_718.Object)->GachaReward).GachaType;
    if (this->RewardSlotSwitcherIndex != EVar1) {
      this->RewardSlotSwitcherIndex = EVar1;
      local_6d0 = iVar2;
      local_6d8 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_6d8);
    }
    if (EVar1 == Character) {
      local_6e0 = FDS_CharacterBaseTableRow::GetRef((longlong)(pFVar20->GachaReward).ID,true);
      bVar6 = FDS_CharacterBaseTableRow::IsValid(local_6e0);
      if (bVar6) {
        pFVar19 = (FDS_ViewModelContext *)0x0;
        if ((this->VM_CharSlot).field0_0x0.DebugPtr == (UDS_VM_W_CharacterSlot *)0x0) {
          local_6e8 = 0;
          pUVar8 = Z_Construct_UClass_UDS_VM_W_CharacterSlot_NoRegister();
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)this,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar9 = Z_Construct_UClass_UDS_VM_W_CharacterSlot_NoRegister();
          CheckIsClassChildOf_Internal(pUVar9,pUVar8);
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_558,pUVar8);
          local_558._48_8_ = (FObjectInstancingGraph *)0x0;
          local_558._56_8_ = (UPackage *)0x0;
          local_558._16_4_ = 0;
          local_558._20_4_ = 0;
          local_558._24_4_ = RF_Transient;
          local_558._40_8_ = (UObject *)0x0;
          local_558[0x20] = false;
          local_558._8_8_ = this;
          pUVar13 = (UDS_VM_W_CharacterSlot *)
                    StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_558);
          if (local_558._64_8_ != 0) {
            plVar17 = (longlong *)(local_558 + 0x50);
            if ((longlong *)local_558._104_8_ != (longlong *)0x0) {
              plVar17 = (longlong *)local_558._104_8_;
            }
            (**(code **)(*plVar17 + 0x10))();
          }
          if (pUVar13 != (UDS_VM_W_CharacterSlot *)0x0) {
            *(undefined1 *)((longlong)&pUVar13->_padding_ + 4) = 0;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar13 != (UDS_VM_W_CharacterSlot *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar13);
          }
          (this->VM_CharSlot).field0_0x0.DebugPtr = pUVar13;
          pFVar14 = ::operator_new(0x30);
          pFVar18 = pFVar19;
          if (pFVar14 != (FDS_ViewModelContext *)0x0) {
            *(undefined8 *)&pFVar14->ViewModelTemplateKey = 0;
            pFVar14[1]._padding_ = 0;
            *(undefined8 *)&pFVar14->DerivedStaticStruct = 0;
            (pFVar14->ViewModelName).ComparisonIndex = 0;
            (pFVar14->ViewModelName).Number = 0;
            pFVar14->_padding_ = (longlong)&___7FDS_ViewModelContext_CharSlotByCharInfoData__6B_;
            *(undefined8 *)&pFVar14[1].DerivedStaticStruct = 0;
            pFVar18 = pFVar14;
            pFVar20 = local_718.Object;
          }
          pFVar14 = ::operator_new(0x20);
          if (pFVar14 != (FDS_ViewModelContext *)0x0) {
            *(atomic<int> *)&pFVar14->DerivedStaticStruct = (atomic<int>)0x1;
            *(code **)&(pFVar14->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
            pFVar14->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharSlotByCharInfoData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
            ;
            ((atomic<int> *)&pFVar14->DerivedStaticStruct)[1] = (atomic<int>)0x1;
            *(FDS_ViewModelContext **)&pFVar14->ViewModelTemplateKey = pFVar18;
            pFVar19 = pFVar14;
          }
          if ((pFVar18 == (FDS_ViewModelContext *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar15 = FDS_ViewModelContext_CharSlotByCharInfoData::StaticStruct();
          *(UScriptStruct **)&pFVar18->DerivedStaticStruct = pUVar15;
          this_01 = UDS_ViewModelContextManager::GetInst();
          if (this_01 != (UDS_ViewModelContextManager *)0x0) {
            if (pFVar19 != (FDS_ViewModelContext *)0x0) {
              LOCK();
              *(atomic<int> *)&pFVar19->DerivedStaticStruct =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar19->DerivedStaticStruct + 1);
              UNLOCK();
            }
            local_638.Object = pFVar18;
            local_638.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar19;
            UDS_ViewModelContextManager::RegisterContext(this_01,&local_638);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_638.SharedReferenceCount.ReferenceController);
          }
          pFVar18->ViewModelTemplateKey = W_CharacterSlot;
          *(undefined1 *)((longlong)&pFVar18[1]._padding_ + 4) = 100;
          pUVar13 = (this->VM_CharSlot).field0_0x0.DebugPtr;
          if (pFVar19 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar19->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar19->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_608.Object = pFVar18;
          local_608.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar19;
          UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar13,&local_608);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar19);
        }
        iVar2 = FFieldNotificationClassDescriptor::RewardName.BitNumber;
        FVar4 = FFieldNotificationClassDescriptor::RewardName.FieldName;
        pFVar12 = (FString *)(**(code **)((local_6e0->ID_Name)._padding_ + 8))();
        local_688.FieldName = FVar4;
        local_688.BitNumber = iVar2;
        UMVVMViewModelBase::SetPropertyValue<FString,FString>
                  ((UMVVMViewModelBase *)this,&this->RewardName,pFVar12,&local_688);
        iVar2 = FFieldNotificationClassDescriptor::VisibilityRewardCount.BitNumber;
        FVar4 = FFieldNotificationClassDescriptor::VisibilityRewardCount.FieldName;
        if (this->VisibilityRewardCount != SelfHitTestInvisible) {
          this->VisibilityRewardCount = SelfHitTestInvisible;
          local_670 = iVar2;
          local_678 = FVar4;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_678);
        }
        if ((pFVar20 == (FDS_ViewModelContext_GachaRewardSlot *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar2 = FFieldNotificationClassDescriptor::RewardCountSwitcherIndex.BitNumber;
        FVar4 = FFieldNotificationClassDescriptor::RewardCountSwitcherIndex.FieldName;
        if ((pFVar20->GachaReward).MoneyValue < 1) {
          if (this->RewardCountSwitcherIndex != 0) {
            this->RewardCountSwitcherIndex = 0;
            local_660 = iVar2;
            local_668 = FVar4;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_668);
          }
          FVar4 = FFieldNotificationClassDescriptor::RewardStackCount.FieldName;
          iVar2 = (pFVar20->GachaReward).Count;
          if (this->RewardStackCount != iVar2) {
            local_650 = FFieldNotificationClassDescriptor::RewardStackCount.BitNumber;
            this->RewardStackCount = iVar2;
            local_658 = FVar4;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_658);
          }
        }
        else {
          if (this->RewardCountSwitcherIndex != 1) {
            this->RewardCountSwitcherIndex = 1;
            local_640 = iVar2;
            local_648 = FVar4;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_648);
          }
          if ((this->VM_CharRewardMoney).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
            pUVar16 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar16 != (UDS_VM_MoneyDisplay *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar16);
            }
            (this->VM_CharRewardMoney).field0_0x0.DebugPtr = pUVar16;
            MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_708);
            pFVar5 = local_708.Object;
            if ((local_708.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(undefined4 *)&pFVar5->_padding_ = 0x192;
            if ((pFVar20 == (FDS_ViewModelContext_GachaRewardSlot *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar2 = (pFVar20->GachaReward).MoneyType;
            if ((pFVar5 == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar5->MoneyId = (longlong)iVar2;
            if ((pFVar20 == (FDS_ViewModelContext_GachaRewardSlot *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar2 = (pFVar20->GachaReward).MoneyValue;
            if ((pFVar5 == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar5->Quantity = (longlong)iVar2;
            pUVar16 = (this->VM_CharRewardMoney).field0_0x0.DebugPtr;
            local_5e8.Object = (FDS_ViewModelContext *)local_708.Object;
            local_5e8.SharedReferenceCount.ReferenceController =
                 local_708.SharedReferenceCount.ReferenceController;
            if (local_708.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_708.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_708.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar16,&local_5e8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_708.SharedReferenceCount.ReferenceController);
          }
        }
      }
      else {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_178._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_178,"UDS_VM_W_GachaRewardSlot::OnSetViewModel",0x28,Yes);
          UDS_LogManager::PrintLog
                    (pUVar7,1,Warning,local_178.Ptr,0x2a,L"charBaseTableRow is Invalid.");
          if ((void *)local_178._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_178._padding_);
          }
        }
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6006424180482900011>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GachaRewardSlot.cpp"
                           ,0x2b,"false");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    else if (EVar1 == Item) {
      iVar2 = (pFVar20->GachaReward).ID;
      if ((this->VM_ItemSlot).field0_0x0.DebugPtr == (UDS_VM_Item *)0x0) {
        local_6f8 = 0;
        pUVar8 = Z_Construct_UClass_UDS_VM_Item_NoRegister();
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar9 = Z_Construct_UClass_UDS_VM_Item_NoRegister();
        CheckIsClassChildOf_Internal(pUVar9,pUVar8);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_5d8,pUVar8);
        local_5d8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_5d8._56_8_ = (UPackage *)0x0;
        local_5d8._16_4_ = 0;
        local_5d8._20_4_ = 0;
        local_5d8._24_4_ = RF_Transient;
        local_5d8._40_8_ = (UObject *)0x0;
        local_5d8[0x20] = false;
        local_5d8._8_8_ = this;
        pUVar10 = (UDS_VM_Item *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_5d8);
        if (local_5d8._64_8_ != 0) {
          plVar17 = (longlong *)(local_5d8 + 0x50);
          if ((longlong *)local_5d8._104_8_ != (longlong *)0x0) {
            plVar17 = (longlong *)local_5d8._104_8_;
          }
          pUVar8 = (UClass *)*plVar17;
          (*(code *)pUVar8->_padding_)();
        }
        if (pUVar10 != (UDS_VM_Item *)0x0) {
          *(undefined1 *)((longlong)&pUVar10->_padding_ + 4) = 0;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UDS_VM_Item *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        (this->VM_ItemSlot).field0_0x0.DebugPtr = pUVar10;
        DS_ItemDataUtil::CreateItemModel
                  ((EDS_ItemSlotStateType)&local_6f0,(int)CONCAT71((int7)((ulonglong)pUVar8 >> 8),6)
                  );
        if (local_6f0 != (UDS_M_ItemImplBase *)0x0) {
          UDS_M_ItemImplBase::SetQuantity(local_6f0,(pFVar20->GachaReward).Count);
          pUVar10 = (this->VM_ItemSlot).field0_0x0.DebugPtr;
          puVar11 = (undefined8 *)(**(code **)(local_6f0->_padding_ + 0x310))(local_6f0,local_5f8);
          local_618.Object = (FDS_ViewModelContext *)*puVar11;
          local_618.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar11[1];
          if (local_618.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_618.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_618.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar10,&local_618);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_5f0);
        }
      }
      this_00 = FDS_ItemBaseTableRow::GetRef((longlong)iVar2,true);
      bVar6 = FDS_ItemBaseTableRow::IsValid(this_00);
      iVar2 = FFieldNotificationClassDescriptor::RewardName.BitNumber;
      FVar4 = FFieldNotificationClassDescriptor::RewardName.FieldName;
      if (bVar6) {
        pFVar12 = (FString *)(**(code **)((this_00->ID_Name)._padding_ + 8))(&this_00->ID_Name);
        local_6c8.FieldName = FVar4;
        local_6c8.BitNumber = iVar2;
        UMVVMViewModelBase::SetPropertyValue<FString,FString>
                  ((UMVVMViewModelBase *)this,&this->RewardName,pFVar12,&local_6c8);
        iVar2 = FFieldNotificationClassDescriptor::RewardCountSwitcherIndex.BitNumber;
        FVar4 = FFieldNotificationClassDescriptor::RewardCountSwitcherIndex.FieldName;
        if (this->RewardCountSwitcherIndex != 2) {
          this->RewardCountSwitcherIndex = 2;
          local_6b0 = iVar2;
          local_6b8 = FVar4;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_6b8);
        }
        FVar4 = FFieldNotificationClassDescriptor::RewardStackCount.FieldName;
        iVar2 = (pFVar20->GachaReward).Count;
        if (this->RewardStackCount != iVar2) {
          local_6a0 = FFieldNotificationClassDescriptor::RewardStackCount.BitNumber;
          this->RewardStackCount = iVar2;
          local_6a8 = FVar4;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_6a8);
        }
        iVar2 = FFieldNotificationClassDescriptor::VisibilityRewardCount.BitNumber;
        FVar4 = FFieldNotificationClassDescriptor::VisibilityRewardCount.FieldName;
        EVar21 = Collapsed;
        if (1 < (pFVar20->GachaReward).Count) {
          EVar21 = SelfHitTestInvisible;
        }
        if (this->VisibilityRewardCount != EVar21) {
          this->VisibilityRewardCount = EVar21;
          local_690 = iVar2;
          local_698 = FVar4;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_698);
        }
      }
      else {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_298._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_298,"UDS_VM_W_GachaRewardSlot::OnSetViewModel",0x28,Yes);
          UDS_LogManager::PrintLog(pUVar7,1,Warning,local_298.Ptr,0x69,L"itemTableRow is Invalid.");
          if ((void *)local_298._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_298._padding_);
          }
        }
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6006424180482900074>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GachaRewardSlot.cpp"
                           ,0x6a,"false");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_3b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_3b8,"UDS_VM_W_GachaRewardSlot::OnSetViewModel",0x28,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Warning,local_3b8.Ptr,0x79,L"Invalid Gacha Type.");
        if ((void *)local_3b8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_3b8._padding_);
        }
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6006424180482900090>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GachaRewardSlot.cpp"
                         ,0x7a,"false");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_718.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

